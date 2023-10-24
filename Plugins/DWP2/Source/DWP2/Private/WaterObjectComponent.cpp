/*    Copyright (c) 2021, NWH coding, vl. Aron Rescec
 *    All rights reserved
 *
 *    This file is part of the NWH Dynamic Water Physics 2 for Unreal Engine
 *    and is licensed under the Unreal Engine EULA:
 *    https://www.unrealengine.com/en-US/eula/publishing
 */

#include "WaterObjectComponent.h"
#include "GenericPlatform/GenericPlatformMath.h"

#include <Components/StaticMeshComponent.h>
#include <Engine/StaticMesh.h>
#include <KismetProceduralMeshLibrary.h>
#include <ProceduralMeshComponent.h>
#include "WaterDataBase.h"
#include "Math/Vector2D.h"
#include "DrawDebugHelpers.h"
#include "Runtime/Core/Public/Async/ParallelFor.h"

// Sets default values for this component's properties
UWaterObjectComponent::UWaterObjectComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
}


// Called when the game starts
void UWaterObjectComponent::BeginPlay()
{
	Super::BeginPlay();

	UE_LOG(LogTemp, Display, TEXT("---> Initializing %s WaterObject."), *GetName());
	
	if (!GetAttachParent())
	{
		UE_LOG(LogTemp, Warning, TEXT("WaterObjectComponent can not be an object root."));
		return;
	}
	
	USceneComponent* CurrentComponent = this;
	while (CurrentComponent)
	{
		CurrentComponent = CurrentComponent->GetAttachParent();
		if (CurrentComponent)
		{
			SimulatingComponent = Cast<UPrimitiveComponent>(CurrentComponent);
			if (SimulatingComponent && SimulatingComponent->IsSimulatingPhysics())
			{
				break;
			}
		}
	}

	CurrentComponent = this;
	while (CurrentComponent)
	{
		CurrentComponent = CurrentComponent->GetAttachParent();
		if (CurrentComponent)
		{
			SimStaticMeshComponent = Cast<UStaticMeshComponent>(CurrentComponent);
			if (SimStaticMeshComponent)
			{
				break;
			}
		}
	}
	
	if (!SimStaticMeshComponent)
	{
		UE_LOG(LogTemp, Warning, TEXT("SimStaticMeshComponent is null."));
		return;
	}
	UE_LOG(LogTemp, Display, TEXT("Using %s as SimStaticMeshComponent."), *SimStaticMeshComponent->GetName());

	if (!SimulatingComponent)
	{
		UE_LOG(LogTemp, Warning, TEXT("SimulatingComponent is null. Make sure that a UPrimitiveComponent that can simulate physics is present as a parent."));
		return;
	}
	UE_LOG(LogTemp, Display, TEXT("Using %s as SimulatingComponent."), *SimulatingComponent->GetName());
	
	if (!SimStaticMeshComponent->GetStaticMesh())
	{
		UE_LOG(LogTemp, Warning, TEXT("StaticMesh of StaticMeshComponent is null."));
		return;
	}

	SimStaticMeshComponent->GetStaticMesh()->bAllowCPUAccess = true;

	// Get WaterData components
	if (!WaterDataComponent)
	{
		WaterDataComponent = GetOwner()->FindComponentByClass<UWaterDataBase>();

		if (!WaterDataComponent)
		{
			UE_LOG(LogTemp, Display, TEXT("Found no WaterDataComponents. Using WaterObjectComponent default water height."));
			bCalculateWaterHeights = false;
			bCalculateWaterNormals = false;
			bCalculateWaterFlow = false;
		}
	}
	
	InitializeSimMesh(SimStaticMeshComponent, SimMeshLOD, SimMeshSection);

	UE_LOG(LogTemp, Display, TEXT("> Finished initializing %s."), *GetName());
}

void UWaterObjectComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if (!bManualTickWaterObject)
	{
		Simulate(DeltaTime);
	}
}


// Called every frame
void UWaterObjectComponent::Simulate(float DeltaTime)
{
	if (!SimulatingComponent) return;
	if (!SimStaticMeshComponent) return;
	if (DeltaTime == 0) return;
	
	// Get water data
	if(WaterDataComponent)
	{
		bool WaterDataValid = WaterDataComponent->QueryWaterData(WorldVertices, WaterHeights, WaterNormals, WaterFlows,
			bCalculateWaterHeights, bCalculateWaterNormals, bCalculateWaterFlow, bQuerySinglePoint);

		if (!WaterDataValid)
		{
			return;
		}
	}

	// Set simulation data and run
	CalculateForces(
		SimulatingComponent->GetCenterOfMass(),
		SimulatingComponent->GetPhysicsLinearVelocity(),
		SimulatingComponent->GetPhysicsAngularVelocityInRadians(),
		SimStaticMeshComponent->GetComponentTransform().ToMatrixWithScale()
		);

	// Apply force and torque
	SimulatingComponent->AddForce(ResultForce);
	SimulatingComponent->AddTorqueInRadians(ResultTorque);


	// Draw visualizers
	if (bDrawDebug)
	{
		DrawDebugGizmos(DeltaTime);
	}
}

void UWaterObjectComponent::UseManualTick(bool value)
{
	bManualTickWaterObject = value;
}


void UWaterObjectComponent::CalculateForces(FVector rigidbodyCoM, FVector rigidbodyLinVel, FVector rigidbodyAngVel, FMatrix l2wMatrix)
{
	LocalToWorldMatrix = l2wMatrix;
	RigidbodyLinearVel = rigidbodyLinVel;
	RigidbodyAngVel = rigidbodyAngVel;
	RigidbodyCoM = rigidbodyCoM;
	GravityZ = GetWorld()->GetGravityZ();
	
	int vertCount = GetVertexCount();
	int triCount = GetTriangleCount();

	// Convert local to world vertices
	for (int i = 0; i < vertCount; i++)
	{
		WorldVertices[i] = LocalToWorldMatrix.TransformPosition(LocalVertices[i]);
	}

	// Calculate tris
	ParallelFor(triCount, [&](int32 i)
	{
		CalcTri(i);
	});
	
	// Calculate result force and torque
	FVector forceSum = FVector(0, 0, 0);
	FVector torqueSum = FVector(0, 0, 0);

	float counter = 0;
	for (int i = 0; i < triCount; i++)
	{
		if (TriStates[i] < 2)
		{
			counter ++;
			forceSum += ResultForces[i];
			FVector dir = ResultCenters[i] - RigidbodyCoM;
			FVector rForce = ResultForces[i];

			FVector crossUV;
			crossUV.X = dir.Y * rForce.Z - dir.Z * rForce.Y;
			crossUV.Y = dir.Z * rForce.X - dir.X * rForce.Z;
			crossUV.Z = dir.X * rForce.Y - dir.Y * rForce.X;

			torqueSum += crossUV;
		}
	}

	if (counter == 0)
	{
		ResultForce = FVector::ZeroVector;
		ResultTorque = FVector::ZeroVector;
	}
	else
	{
		ResultForce = forceSum * 0.0001f * FinalForceCoefficient;
		ResultTorque = torqueSum * 0.0001f * FinalTorqueCoefficient;
	}
}

void UWaterObjectComponent::CalcTri(int i)
{
	if (TriStates[i] >= 3)
	{
		return;
	}

	int baseIndex = i * 3;
	int vertIndex0 = TriIndices[baseIndex];
	int vertIndex1 = TriIndices[baseIndex + 1];
	int vertIndex2 = TriIndices[baseIndex + 2];

	FVector P0 = WorldVertices[vertIndex0];
	FVector P1 = WorldVertices[vertIndex1];
	FVector P2 = WorldVertices[vertIndex2];

	float wh_P0 = WaterHeights[vertIndex0];
	float wh_P1 = WaterHeights[vertIndex1];
	float wh_P2 = WaterHeights[vertIndex2];

	float d0 = P0.Z - wh_P0;
	float d1 = P1.Z - wh_P1;
	float d2 = P2.Z - wh_P2;

	//All vertices are above water
	if (d0 >= 0 && d1 >= 0 && d2 >= 0)
	{
		TriStates[i] = 2;

		return;
	}

	// All vertices are underwater
	if (d0 <= 0 && d1 <= 0 && d2 <= 0)
	{
		ThreeUnderWater(P0, P1, P2, d0, d1, d2, 0, 1, 2, i);
	}
	// 1 or 2 vertices are below the water
	else
	{
		// v0 > v1
		if (d0 > d1)
		{
			// v0 > v2
			if (d0 > d2)
			{
				// v1 > v2
				if (d1 > d2)
				{
					if (d0 > 0 && d1 < 0 && d2 < 0)
					{
						// 0 1 2
						TwoUnderWater(P0, P1, P2, d0, d1, d2, 0, 1, 2, i);
					}
					else if (d0 > 0 && d1 > 0 && d2 < 0)
					{
						// 0 1 2
						OneUnderWater(P0, P1, P2, d0, d1, d2, 0, 1, 2, i);
					}
				}
				// v2 > v1
				else
				{
					if (d0 > 0 && d2 < 0 && d1 < 0)
					{
						// 0 2 1
						TwoUnderWater(P0, P2, P1, d0, d2, d1, 0, 2, 1, i);
					}
					else if (d0 > 0 && d2 > 0 && d1 < 0)
					{
						// 0 2 1
						OneUnderWater(P0, P2, P1, d0, d2, d1, 0, 2, 1, i);
					}
				}
			}
			// v2 > v0
			else
			{
				if (d2 > 0 && d0 < 0 && d1 < 0)
				{
					// 2 0 1
					TwoUnderWater(P2, P0, P1, d2, d0, d1, 2, 0, 1, i);
				}
				else if (d2 > 0 && d0 > 0 && d1 < 0)
				{
					// 2 0 1
					OneUnderWater(P2, P0, P1, d2, d0, d1, 2, 0, 1, i);
				}
			}
		}
		// v0 < v1
		else
		{
			// v0 < v2
			if (d0 < d2)
			{
				// v1 < v2
				if (d1 < d2)
				{
					if (d2 > 0 && d1 < 0 && d0 < 0)
					{
						// 2 1 0
						TwoUnderWater(P2, P1, P0, d2, d1, d0, 2, 1, 0, i);
					}
					else if (d2 > 0 && d1 > 0 && d0 < 0)
					{
						// 2 1 0
						OneUnderWater(P2, P1, P0, d2, d1, d0, 2, 1, 0, i);
					}
				}
				// v2 < v1
				else
				{
					if (d1 > 0 && d2 < 0 && d0 < 0)
					{
						// 1 2 0
						TwoUnderWater(P1, P2, P0, d1, d2, d0, 1, 2, 0, i);
					}
					else if (d1 > 0 && d2 > 0 && d0 < 0)
					{
						// 1 2 0
						OneUnderWater(P1, P2, P0, d1, d2, d0, 1, 2, 0, i);
					}
				};
			}
			// v2 < v0
			else
			{
				if (d1 > 0 && d0 < 0 && d2 < 0)
				{
					// 1 0 2
					TwoUnderWater(P1, P0, P2, d1, d0, d2, 1, 0, 2, i);
				}
				else if (d1 > 0 && d0 > 0 && d2 < 0)
				{
					// 1 0 2
					OneUnderWater(P1, P0, P2, d1, d0, d2, 1, 0, 2, i);
				}
			}
		}
	}
}

void UWaterObjectComponent::InitializeSimMesh(UStaticMeshComponent *StaticMeshComponent, int32 LOD, int32 SectionIndex)
{
	if (!StaticMeshComponent)
	{
		UE_LOG(LogTemp, Warning, TEXT("StaticMeshComponent is null."));
		return;
	}
	
	SimStaticMeshComponent = StaticMeshComponent;
	
	UStaticMesh* StaticMesh = SimStaticMeshComponent->GetStaticMesh();
	
	if (!StaticMesh)
	{
		UE_LOG(LogTemp, Warning, TEXT("StaticMesh is null."));
		return;
	}

	// Check if LOD available.
	const int NumLODs = StaticMesh->GetNumLODs();
	if (NumLODs <= LOD)
	{
		UE_LOG(LogTemp, Warning, TEXT("Requested mesh LOD is not available."));
		return;
	}

	// If -1 (default) is used use the higest available LOD.
	if (LOD == -1)
	{
		LOD = NumLODs - 1;
	}

	// Check if section available.
	const int NumSections = StaticMesh->GetNumSections(LOD);
	if (NumSections <= SectionIndex)
	{
		UE_LOG(LogTemp, Warning, TEXT("Requested mesh section is not available."));
		return;
	}

	LocalVertices = TArray<FVector>();
	TriIndices = TArray<int32>();
	TArray<FVector> Normals = TArray<FVector>();
	TArray<FVector2D> UVs = TArray<FVector2D>();
	TArray<FProcMeshTangent> Tangents = TArray<FProcMeshTangent>();

	UKismetProceduralMeshLibrary::GetSectionFromStaticMesh(
		StaticMesh,
		LOD,
		SectionIndex,
		LocalVertices,
		TriIndices, 
		Normals, 
		UVs, 
		Tangents);

	if (bWeldVertices)
	{
		int beforeVertCount = LocalVertices.Num();
		WeldMeshVertices(LocalVertices, TriIndices);
		int afterVertCount = LocalVertices.Num();

		UE_LOG(LogTemp, Display, TEXT("Welding vertices. Initial vert count: %d, after welding: %d."), beforeVertCount, afterVertCount);
	}
	
	WaterHeights = TArray<float>();
	WaterNormals = TArray<FVector>();
	WaterFlows = TArray<FVector>();
	TriStates = TArray<int>();
	ResultVelocities = TArray<FVector>();
	WorldVertices = TArray<FVector>();
	ResultP0s = TArray<FVector>();
	ResultForces = TArray<FVector>();
	ResultCenters = TArray<FVector>();
	ResultNormals = TArray<FVector>();
	ResultAreas = TArray<float>();
	ResultDistances = TArray<float>();

	int vertCount = LocalVertices.Num();
	int triIndexCount = TriIndices.Num();
	int triCount = triIndexCount / 3;
	
	WaterHeights.Init(DefaultWaterHeight, vertCount);
	WaterNormals.Init(DefaultWaterNormal, vertCount);
	WaterFlows.Init(DefaultWaterFlow, vertCount);
	TriStates.Init(2, triCount);
	ResultVelocities.Init(FVector(0, 0, 0), triCount);
	WorldVertices.Init(FVector(0, 0, 0), vertCount);
	ResultP0s.Init(FVector(0, 0, 0), triCount * 6);
	ResultForces.Init(FVector(0, 0, 0), triCount);
	ResultCenters.Init(FVector(0, 0, 0), triCount);
	ResultNormals.Init(FVector(0, 0, 0), triCount);
	ResultAreas.Init(0, triCount);
	ResultDistances.Init(0, triCount);

	UE_LOG(LogTemp, Display, TEXT("Initialized from StaticMesh %s from LOD %d with %d triangles and %d vertices."), 
		*StaticMesh->GetName(), LOD, triCount, vertCount);

	if (triCount > 150)
	{
		UE_LOG(LogTemp, Warning, TEXT("StaticMesh %s (LOD %d with %d triangles) has high number of triangles (>150) which will reduce performance. Consider using lower LOD or higher mesh reduction for the current LOD."),
			*StaticMesh->GetName(), LOD, triCount);
	}
}

void
UWaterObjectComponent::CalculateForce(const FVector& p0, const FVector& p1, const FVector& p2,
	const float& dist0, const float& dist1, const float& dist2,
	const int& index, const int& i0, const int& i1, const int& i2,
	FVector& force, FVector& center, float& area, float& distanceToSurface)
{
	force.X = 0;
	force.Y = 0;
	force.Z = 0;

	area = 0;
	distanceToSurface = 0;

	center.X = (p0.X + p1.X + p2.X) / 3.0f;
	center.Y = (p0.Y + p1.Y + p2.Y) / 3.0f;
	center.Z = (p0.Z + p1.Z + p2.Z) / 3.0f;

	FVector u;
	u.X = p1.X - p0.X;
	u.Y = p1.Y - p0.Y;
	u.Z = p1.Z - p0.Z;

	FVector v;
	v.X = p2.X - p0.X;
	v.Y = p2.Y - p0.Y;
	v.Z = p2.Z - p0.Z;

	FVector crossUV;
	crossUV.X = u.Y * v.Z - u.Z * v.Y;
	crossUV.Y = u.Z * v.X - u.X * v.Z;
	crossUV.Z = u.X * v.Y - u.Y * v.X;

	float crossMagnitude = crossUV.X * crossUV.X + crossUV.Y * crossUV.Y + crossUV.Z * crossUV.Z;
	if (crossMagnitude < 1e-6f)
	{
		TriStates[index] = 2;
		return;
	}

	float invSqrtCrossMag = FastInvSqrt(crossMagnitude);
	crossMagnitude *= invSqrtCrossMag;

	FVector normal;
	normal.X = crossUV.X * invSqrtCrossMag;
	normal.Y = crossUV.Y * invSqrtCrossMag;
	normal.Z = crossUV.Z * invSqrtCrossMag;
	ResultNormals[index] = normal;

	FVector p;
	p.X = center.X - RigidbodyCoM.X;
	p.Y = center.Y - RigidbodyCoM.Y;
	p.Z = center.Z - RigidbodyCoM.Z;

	FVector crossAngVelP;
	crossAngVelP.X = RigidbodyAngVel.Y * p.Z - RigidbodyAngVel.Z * p.Y;
	crossAngVelP.Y = RigidbodyAngVel.Z * p.X - RigidbodyAngVel.X * p.Z;
	crossAngVelP.Z = RigidbodyAngVel.X * p.Y - RigidbodyAngVel.Y * p.X;

	FVector velocity;
	velocity.X = crossAngVelP.X + RigidbodyLinearVel.X;
	velocity.Y = crossAngVelP.Y + RigidbodyLinearVel.Y;
	velocity.Z = crossAngVelP.Z + RigidbodyLinearVel.Z;

	FVector waterNormalVector;
	waterNormalVector.X = WorldUpVector.X;
	waterNormalVector.Y = WorldUpVector.Y;
	waterNormalVector.Z = WorldUpVector.Z;

	area = crossMagnitude * 0.5f;
	distanceToSurface = 0.0f;
	if (area > 1e-4f)
	{
		FVector f0;
		f0.X = p0.X - center.X;
		f0.Y = p0.Y - center.Y;
		f0.Z = p0.Z - center.Z;

		FVector f1;
		f1.X = p1.X - center.X;
		f1.Y = p1.Y - center.Y;
		f1.Z = p1.Z - center.Z;

		FVector f2;
		f2.X = p2.X - center.X;
		f2.Y = p2.Y - center.Y;
		f2.Z = p2.Z - center.Z;

		FVector cross12;
		cross12.X = f1.Y * f2.Z - f1.Z * f2.Y;
		cross12.Y = f1.Z * f2.X - f1.X * f2.Z;
		cross12.Z = f1.X * f2.Y - f1.Y * f2.X;
		float magCross12 = cross12.X * cross12.X + cross12.Y * cross12.Y + cross12.Z * cross12.Z;
		magCross12 *= FastInvSqrt(magCross12);

		FVector cross20;
		cross20.X = f2.Y * f0.Z - f2.Z * f0.Y;
		cross20.Y = f2.Z * f0.X - f2.X * f0.Z;
		cross20.Z = f2.X * f0.Y - f2.Y * f0.X;
		float magCross20 = cross20.X * cross20.X + cross20.Y * cross20.Y + cross20.Z * cross20.Z;
		magCross20 *= FastInvSqrt(magCross20);

		float   invDoubleArea = 0.5f / area;
		float   w0 = magCross12 * invDoubleArea;
		float   w1 = magCross20 * invDoubleArea;
		float   w2 = 1.0f - (w0 + w1);


		if (bCalculateWaterNormals)
		{
			FVector n0 = WaterNormals[i0];
			FVector n1 = WaterNormals[i1];
			FVector n2 = WaterNormals[i2];

			float dot0 = n0.X * WorldUpVector.X + n0.Y * WorldUpVector.Y + n0.Z * WorldUpVector.Z;
			float dot1 = n1.X * WorldUpVector.X + n1.Y * WorldUpVector.Y + n1.Z * WorldUpVector.Z;
			float dot2 = n2.X * WorldUpVector.X + n2.Y * WorldUpVector.Y + n2.Z * WorldUpVector.Z;

			distanceToSurface =
				w0 * dist0 * dot0 +
				w1 * dist1 * dot1 +
				w2 * dist2 * dot2;

			waterNormalVector.X = w0 * n0.X + w1 * n1.X + w2 * n2.X;
			waterNormalVector.Y = w0 * n0.Y + w1 * n1.Y + w2 * n2.Y;
			waterNormalVector.Z = w0 * n0.Z + w1 * n1.Z + w2 * n2.Z;
		}
		else
		{
			distanceToSurface =
				w0 * dist0 +
				w1 * dist1 +
				w2 * dist2;
		}

		if (bCalculateWaterFlow)
		{
			FVector wf0 = WaterFlows[i0];
			FVector wf1 = WaterFlows[i1];
			FVector wf2 = WaterFlows[i2];

			velocity.X += w0 * -wf0.X + w1 * -wf1.X + w2 * -wf2.X;
			velocity.Y += w0 * -wf0.Y + w1 * -wf1.Y + w2 * -wf2.Y;
			velocity.Z += w0 * -wf0.Z + w1 * -wf1.Z + w2 * -wf2.Z;
		}
	}
	else
	{
		TriStates[index] = 2;
		return;
	}

	float velocityMagnitude = velocity.X * velocity.X + velocity.Y * velocity.Y + velocity.Z * velocity.Z;
	float invSqrtVelMag = FastInvSqrt(velocityMagnitude);
	velocityMagnitude *= invSqrtVelMag;

	ResultVelocities[index] = velocity;
	ResultAreas[index] = area;

	distanceToSurface = distanceToSurface < 0 ? 0 : distanceToSurface;

	float densityArea = FluidDensity * area;

	FVector buoyantForce;
	if (BuoyForceCoefficient > 0.0001f)
	{
		float gravity = -GravityZ;
		float dotNormalWaterNormal = FVector::DotProduct(normal, waterNormalVector);
		float bfc = distanceToSurface * densityArea * gravity * 0.01f * dotNormalWaterNormal * BuoyForceCoefficient;

		buoyantForce.X = waterNormalVector.X * bfc;
		buoyantForce.Y = waterNormalVector.Y * bfc;
		buoyantForce.Z = waterNormalVector.Z * bfc;
	}
	else
	{
		buoyantForce.X = 0;
		buoyantForce.Y = 0;
		buoyantForce.Z = 0;
	}


	FVector dynamicForce;
	dynamicForce.X = 0;
	dynamicForce.Y = 0;
	dynamicForce.Z = 0;

	if (velocityMagnitude > 1e-6f)
	{
		FVector velocityNormalized;
		velocityNormalized.X = velocity.X * invSqrtVelMag;
		velocityNormalized.Y = velocity.Y * invSqrtVelMag;
		velocityNormalized.Z = velocity.Z * invSqrtVelMag;

		float dotNormVel = FVector::DotProduct(normal, velocityNormalized);

		if (DynamicForceCoefficient > 0.001f)
		{
			if (VelocityDotPower < 0.999f || VelocityDotPower > 1.001f)
			{
				dotNormVel = (dotNormVel > 0.0f ? 1.0f : -1.0f) * FGenericPlatformMath::Pow(dotNormVel > 0 ? dotNormVel : -dotNormVel, VelocityDotPower);
			}

			float c = -dotNormVel * velocityMagnitude * densityArea;
			dynamicForce.X = normal.X * c;
			dynamicForce.Y = normal.Y * c;
			dynamicForce.Z = normal.Z * c;
		}

		if (SkinDragCoefficient > 1e-6f)
		{
			float absDot = dotNormVel < 0 ? -dotNormVel : dotNormVel;
			float c = -(1.0f - absDot) * SkinDragCoefficient * densityArea;
			dynamicForce.X += velocity.X * c;
			dynamicForce.Y += velocity.Y * c;
			dynamicForce.Z += velocity.Z * c;
		}

		float dfc = DynamicForceCoefficient * (dotNormVel > 0 ? SlamForceCoefficient : SuctionForceCoefficient);
		dynamicForce.X *= dfc;
		dynamicForce.Y *= dfc;
		dynamicForce.Z *= dfc;
	}

	force.X = buoyantForce.X + dynamicForce.X;
	force.Y = buoyantForce.Y + dynamicForce.Y;
	force.Z = buoyantForce.Z + dynamicForce.Z;
}

float UWaterObjectComponent::FastInvSqrt(float x)
{
	float xhalf = 0.5f * x;
	int i = *(int*)&x;
	i = 0x5f375a86 - (i >> 1);
	x = *(float*)&i;
	x = x * (1.5f - xhalf * x * x);
	return x;
}

void UWaterObjectComponent::ThreeUnderWater(const FVector& p0, const FVector& p1, const FVector& p2,
	const float& dist0, const float& dist1, const float& dist2,
	const int& i0, const int& i1, const int& i2, const int& index)
{
	TriStates[index] = 0;

	int i = index * 6;
	ResultP0s[i] = p0;
	ResultP0s[i + 1] = p1;
	ResultP0s[i + 2] = p2;

	ResultP0s[i + 3] = FVector(0, 0, 0);
	ResultP0s[i + 4] = FVector(0, 0, 0);
	ResultP0s[i + 5] = FVector(0, 0, 0);

	FVector f, p;
	float a, d;
	CalculateForce(p0, p1, p2, -dist0, -dist1, -dist2, index, i0, i1, i2, f, p, a, d);
	ResultForces[index] = f;
	ResultCenters[index] = p;
	ResultAreas[index] = a;
	ResultDistances[index] = d;
}

void UWaterObjectComponent::TwoUnderWater(const FVector& p0, const FVector& p1, const FVector& p2,
	const float& dist0, const float& dist1, const float& dist2,
	const int& i0, const int& i1, const int& i2, const int& index)
{
	TriStates[index] = 1;

	FVector H, M, L, IM, IL;
	float   hH, hM, hL;
	int     mIndex;

	// H is always at position 0
	H = p0;

	// Find the index of M
	mIndex = i0 - 1;
	if (mIndex < 0)
	{
		mIndex = 2;
	}

	// Heights to the water
	hH = dist0;

	if (i1 == mIndex)
	{
		M = p1;
		L = p2;

		hM = dist1;
		hL = dist2;
	}
	else
	{
		M = p2;
		L = p1;

		hM = dist2;
		hL = dist1;
	}

	IM = -hM / (hH - hM) * (H - M) + M;
	IL = -hL / (hH - hL) * (H - L) + L;

	int i = index * 6;
	ResultP0s[i] = M;
	ResultP0s[i + 1] = IM;
	ResultP0s[i + 2] = IL;

	ResultP0s[i + 3] = M;
	ResultP0s[i + 4] = IL;
	ResultP0s[i + 5] = L;

	FVector f0, f1, c0, c1;
	float dst0, dst1, a0, a1;
	CalculateForce(M, IM, IL, -hM, 0, 0, index, i0, i1, i2, f0, c0, a0, dst0);
	CalculateForce(M, IL, L, -hM, 0, -hL, index, i0, i1, i2, f1, c1, a1, dst1);

	float weight0 = a0 / (a0 + a1);
	float weight1 = 1 - weight0;
	ResultForces[index] = f0 + f1;
	ResultCenters[index] = c0 * weight0 + c1 * weight1;
	ResultDistances[index] = dst0 * weight0 + dst1 * weight1;
	ResultAreas[index] = a0 + a1;
}

void UWaterObjectComponent::OneUnderWater(const FVector& p0, const FVector& p1, const FVector& p2,
	const float& dist0, const float& dist1, const float& dist2,
	const int& i0, const int& i1, const int& i2, const int& index)
{
	TriStates[index] = 1;

	FVector H, M, L, JM, JH;
	float   hH, hM, hL;

	L = p2;

	// Find the index of H
	int hIndex = i2 + 1;
	if (hIndex > 2)
	{
		hIndex = 0;
	}

	// Get heights to water
	hL = dist2;

	if (i1 == hIndex)
	{
		H = p1;
		M = p0;

		hH = dist1;
		hM = dist0;
	}
	else
	{
		H = p0;
		M = p1;

		hH = dist0;
		hM = dist1;
	}

	JM = -hL / (hM - hL) * (M - L) + L;
	JH = -hL / (hH - hL) * (H - L) + L;

	int i = index * 6;
	ResultP0s[i] = L;
	ResultP0s[i + 1] = JH;
	ResultP0s[i + 2] = JM;

	ResultP0s[i + 3] = FVector(0, 0, 0);
	ResultP0s[i + 4] = FVector(0, 0, 0);
	ResultP0s[i + 5] = FVector(0, 0, 0);

	// Generate trisPtr
	FVector f, p;
	float a, d;
	CalculateForce(L, JH, JM, -hL, 0, 0, index, i0, i1, i2, f, p, a, d);
	ResultForces[index] = f;
	ResultCenters[index] = p;
	ResultAreas[index] = a;
	ResultDistances[index] = d;
}

void UWaterObjectComponent::WeldMeshVertices(TArray<FVector>& OutVerts, TArray<int>& OutTris, float MaxDelta)
{
	TArray<int> newVerts = TArray<int>();
	TArray<int>     map  = TArray<int>();
	map.Init(0, OutVerts.Num());

	// create mapping and filter duplicates.
	for (int i = 0; i < OutVerts.Num(); i++)
	{
		FVector p = OutVerts[i];
		bool    duplicate = false;
		for (int i2 = 0; i2 < newVerts.Num(); i2++)
		{
			int a = newVerts[i2];
			float SqrMag = (OutVerts[a] - p).SizeSquared();
			if (SqrMag <= MaxDelta)
			{
				map[i] = i2;
				duplicate = true;
				break;
			}
		}

		if (!duplicate)
		{
			map[i] = newVerts.Num();
			newVerts.Add(i);
		}
	}

	TArray<FVector> verts2 = TArray<FVector>();
	verts2.Init(FVector::ZeroVector, newVerts.Num());

	for (int i = 0; i < newVerts.Num(); i++)
	{
		int a = newVerts[i];
		verts2[i] = OutVerts[a];
	}

	TArray<int> tris = OutTris;
	for (int i = 0; i < OutTris.Num(); i++)
	{
		tris[i] = map[tris[i]];
	}

	OutTris = tris;
	OutVerts = verts2;
}

void UWaterObjectComponent::SetWaterHeights(TArray<float>& waterHeights)
{
	WaterHeights = waterHeights;
}

void UWaterObjectComponent::SetWaterHeightSingle(int index, float value)
{
	WaterHeights[index] = value;
}

void UWaterObjectComponent::SetWaterFlows(TArray<FVector>& waterFlows)
{
	WaterFlows = waterFlows;
}

void UWaterObjectComponent::SetWaterFlowSingle(int index, FVector value)
{
	WaterFlows[index] = value;
}

void UWaterObjectComponent::SetWaterNormals(TArray<FVector>& waterNormals)
{
	WaterNormals = waterNormals;
}

void UWaterObjectComponent::SetWaterNormalSingle(int index, FVector value)
{
	WaterNormals[index] = value;
}

FVector UWaterObjectComponent::GetResultForce()
{
	return ResultForce;
}

FVector UWaterObjectComponent::GetResultTorque()
{
	return ResultTorque;
}

TArray<FVector>& UWaterObjectComponent::GetResultForces()
{
	return ResultForces;
}

TArray<FVector>& UWaterObjectComponent::GetResultPoints()
{
	return ResultCenters;
}

TArray<FVector>& UWaterObjectComponent::GetResultP0s()
{
	return ResultP0s;
}

TArray<FVector>& UWaterObjectComponent::GetResultNormals()
{
	return ResultNormals;
}

TArray<FVector>& UWaterObjectComponent::GetResultVelocities()
{
	return ResultVelocities;
}

TArray<float>& UWaterObjectComponent::GetResultAreas()
{
	return ResultAreas;
}

TArray<float>& UWaterObjectComponent::GetResultDistances()
{
	return ResultDistances;
}

TArray<int>& UWaterObjectComponent::GetTriStates()
{
	return TriStates;
}

int UWaterObjectComponent::GetVertexCount()
{
	return LocalVertices.Num();
}

int UWaterObjectComponent::GetTriangleCount()
{
	return ResultForces.Num();
}

TArray<FVector>& UWaterObjectComponent::GetWorldVertices()
{
	return WorldVertices;
}

int UWaterObjectComponent::IsTouchingWater()
{
	int triStatesSize = TriStates.Num();
	for (int i = 0; i < triStatesSize; i++)
	{
		if (TriStates[i] <= 1)
		{
			return 1;
		}
	}

	return 0;
}

void UWaterObjectComponent::DrawDebugGizmos(const float DeltaTime)
{
	const UWorld* World = GetOwner()->GetWorld();
	const int TriCount = GetTriangleCount();
	const float Thickness = 1.0f;
	const int DepthPriority = 16;
	
	for (int i = 0; i < TriCount; i++)
	{
		int triIndex = i;
		int vertIndex = i * 3;
		int pIndex = i * 6;
		int state = TriStates[triIndex];

		// Draw force point
		FVector forcePoint = ResultCenters[i];
		DrawDebugSphere(World, forcePoint, 5.0f, 4, FColor::Red, false, DeltaTime);

		// Draw normal
		DrawDebugLine(World, forcePoint, forcePoint + ResultNormals[triIndex] * 0.05f, FColor::Blue, false, DeltaTime, DepthPriority, Thickness);

		// Draw force
		FVector RForce = ResultForces[triIndex];
		float RArea = ResultAreas[triIndex];
		FVector ForceDebugVector = RArea > 0.0001f ? (RForce / RArea) * 0.0005f : FVector::ZeroVector;
		DrawDebugLine(World, forcePoint, forcePoint + ForceDebugVector, FColor::Red, false, DeltaTime, DepthPriority, Thickness);

		// Draw velocity
		DrawDebugLine(World, forcePoint, forcePoint + ResultVelocities[triIndex] * 0.1f, FColor::Green, false, DeltaTime, DepthPriority, Thickness);

		// Draw triangles
		const FVector p00 = ResultP0s[pIndex];
		const FVector p01 = ResultP0s[pIndex + 1];
		const FVector p02 = ResultP0s[pIndex + 2];

		const FVector p10 = ResultP0s[pIndex + 3];
		const FVector p11 = ResultP0s[pIndex + 4];
		const FVector p12 = ResultP0s[pIndex + 5];

		if (DeltaTime > 0)
		{
			FColor lineColor = FColor::White;
			int triState = TriStates[triIndex];
			if (triState < 2)
			{
				const FColor colorA = FColor(0, 255, 0, 255);
				const FColor colorB = FColor(255, 0, 0, 255);
				float t = ResultForces[triIndex].Size() * 0.00001f;
				lineColor = FColor(
						FMath::Lerp(colorA.R, colorB.R, t),
						FMath::Lerp(colorA.G, colorB.G, t),
						FMath::Lerp(colorA.B, colorB.B, t),
						FMath::Lerp(colorA.A, colorB.A, t)
					);
			}
			else if (triState == 2)
			{
				lineColor = FColor::Silver;
			}
			else
			{
				lineColor = FColor::Black;
			}


			DrawDebugLine(World, p00, p01, lineColor, false, DeltaTime, DepthPriority, Thickness);
			DrawDebugLine(World, p01, p02, lineColor, false, DeltaTime, DepthPriority, Thickness);
			DrawDebugLine(World, p02, p00, lineColor, false, DeltaTime, DepthPriority, Thickness);

			if (state == 1)
			{
				DrawDebugLine(World, p10, p11, lineColor, false, DeltaTime, DepthPriority, Thickness);
				DrawDebugLine(World, p11, p12, lineColor, false, DeltaTime, DepthPriority, Thickness);
				DrawDebugLine(World, p12, p10, lineColor, false, DeltaTime, DepthPriority, Thickness);
			}
		}

		// Draw distance to water
		DrawDebugLine(World, forcePoint, forcePoint + WorldUpVector * ResultDistances[triIndex], FColor::White, false, DeltaTime, DepthPriority, Thickness);
	}
}