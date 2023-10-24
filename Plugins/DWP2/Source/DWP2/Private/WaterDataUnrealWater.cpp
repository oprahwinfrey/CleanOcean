/*    Copyright (c) 2021, NWH coding, vl. Aron Rescec
 *    All rights reserved
 *
 *    This file is part of the NWH Dynamic Water Physics 2 for Unreal Engine
 *    and is licensed under the Unreal Engine EULA:
 *    https://www.unrealengine.com/en-US/eula/publishing
 */


#include "WaterDataUnrealWater.h"
#include "WaterBodyLakeActor.h"
#include "WaterBodyComponent.h"
#include "BuoyancyComponent.h"
#include "BuoyancyManager.h"
#include "BuoyancyComponent.h"
#include "WaterSubsystem.h"
#include "Kismet/GameplayStatics.h"


UWaterDataUnrealWater::UWaterDataUnrealWater()
{
	PrimaryComponentTick.bCanEverTick = false;

	BuoyancyComponent = CreateDefaultSubobject<UBuoyancyComponent>(TEXT("Buoyancy"));
}


void UWaterDataUnrealWater::BeginPlay()
{
	Super::BeginPlay();

	UE_LOG(LogTemp, Display, TEXT("Setting up WaterDataUnrealWater for actor %s."), *GetOwner()->GetName());

	// Find Buoyancy Manager
	ABuoyancyManager::GetBuoyancyComponentManager(GetWorld(), BuoyancyManager);
	if (!BuoyancyManager)
	{
		UE_LOG(LogTemp, Warning, TEXT("BuoyancyManager not found in world."));
		return;
	}

	// Find BuoyancyComponent. Not used for buoyancy but rather for detecting current WaterBody.
	TArray<UBuoyancyComponent*> OutComponents;
	GetOwner()->GetComponents<UBuoyancyComponent>(OutComponents);
	if (OutComponents.Num() > 0)
	{
		BuoyancyComponent = OutComponents[0];
	}

	if (!BuoyancyComponent)
	{
		UE_LOG(LogTemp, Warning, TEXT("BuoyancyComponent could not be found or created."));
		return;
	}

	// Set buoyancy values to 0 as it will not be used to calculate physics.
	// Probably not required to set everything to 0 but just in case.
	BuoyancyComponent->BuoyancyData.BuoyancyCoefficient = 0;
	BuoyancyComponent->BuoyancyData.bApplyDragForcesInWater = false;
	BuoyancyComponent->BuoyancyData.DragCoefficient = 0;
	BuoyancyComponent->BuoyancyData.DragCoefficient2 = 0;
	BuoyancyComponent->BuoyancyData.AngularDragCoefficient = 0;
	BuoyancyComponent->BuoyancyData.BuoyancyDamp = 0;
	BuoyancyComponent->BuoyancyData.BuoyancyDamp2 = 0;
	BuoyancyComponent->BuoyancyData.MaxBuoyantForce = 0;
	BuoyancyComponent->BuoyancyData.MaxWaterForce = 0;

	// No pontoons found. One required. Setup up the pontoon.
	if (!BuoyancyComponent->HasPontoons())
	{
		//UE_LOG(LogTemp, Display, TEXT("BuoyancyComponent has no pontoons. One required. Adding one."));
		if (const auto Owner = GetOwner())
		{
			FVector ActorOrigin;
			FVector ActorExtents;
			Owner->GetActorBounds(false, ActorOrigin, ActorExtents, true);
			BuoyancyComponent->AddCustomPontoon(
				ActorExtents.GetAbsMax(),
				Owner->GetTransform().InverseTransformPosition(ActorOrigin)
			);
		}

		if (!BuoyancyComponent->HasPontoons())
		{
			UE_LOG(LogTemp, Warning, TEXT("Could not create a pontoon."));
		}
	}

	BuoyancyManager->Register(BuoyancyComponent);
}


bool UWaterDataUnrealWater::QueryWaterData(TArray<FVector>& points, TArray<float>& waterHeights,
	TArray<FVector>& waterNormals, TArray<FVector>& waterFlows, bool getWaterHeights, bool getWaterNormals, bool getWaterFlows, bool querySinglePoint)
{
	// Buoyancy component is null, use default flat water height from WaterDataBase
	if (!BuoyancyComponent)
	{
		UE_LOG(LogTemp, Warning, TEXT("BuoyancyComponent is null."));
		Super::QueryWaterData(points, waterHeights, waterNormals, waterFlows, getWaterHeights, getWaterNormals, getWaterFlows);
		return false;
	}

	// TODO - check if pontoons required
	if (!BuoyancyComponent->HasPontoons())
	{
		UE_LOG(LogTemp, Warning, TEXT("BuoyancyComponent requires a single pontoon."));
		return false;
	}

	// Try to get current water body
	TArray<UWaterBodyComponent*> WaterBodies = BuoyancyComponent->GetCurrentWaterBodyComponents();
	if (WaterBodies.Num() > 0)
	{
		WaterBody = WaterBodies[0];
	}

	// Water body not found, fall back to base.
	if (!WaterBody)
	{
		//UE_LOG(LogTemp, Warning, TEXT("UWaterBody not found. Falling back to WaterDataBase."));
		//Super::QueryWaterData(points, waterHeights, waterNormals, waterFlows, getWaterHeights, getWaterNormals, getWaterFlows);
		return false;
	}

	// Setup water query flags
	EWaterBodyQueryFlags QueryFlags = EWaterBodyQueryFlags::None;

	if (getWaterHeights)
		QueryFlags |= EWaterBodyQueryFlags::ComputeImmersionDepth | EWaterBodyQueryFlags::IncludeWaves;

	if (getWaterNormals)
		QueryFlags |= EWaterBodyQueryFlags::ComputeNormal;

	if (getWaterFlows)
		QueryFlags |= EWaterBodyQueryFlags::ComputeVelocity;

	// Set water data values
	const int NumPoints = points.Num();
	if (QueryFlags != EWaterBodyQueryFlags::None)
	{
		if (querySinglePoint)
		{
			FVector ActorLocation = GetOwner()->GetActorLocation();
			FWaterBodyQueryResult QueryResult = WaterBody->QueryWaterInfoClosestToWorldLocation(ActorLocation, QueryFlags);
			float ImmersionDepth = getWaterHeights ? QueryResult.GetImmersionDepth() : 0;
			FVector WaterNormal = getWaterNormals ? QueryResult.GetWaterSurfaceNormal() : FVector::ZeroVector;
			FVector WaterVelocity = getWaterFlows ? QueryResult.GetVelocity() : FVector::ZeroVector;

			for (int i = 0; i < NumPoints; i++)
			{
				if (getWaterHeights) waterHeights[i] = ActorLocation.Z + ImmersionDepth + (ActorLocation.Z - points[i].Z);
				if (getWaterNormals) waterNormals[i] = WaterNormal;
				if (getWaterFlows) waterFlows[i] = WaterVelocity;
			}
		}
		else
		{
			for (int i = 0; i < NumPoints; i++)
			{
				FWaterBodyQueryResult QueryResult = WaterBody->QueryWaterInfoClosestToWorldLocation(points[i], QueryFlags);
				if (getWaterHeights) waterHeights[i] = points[i].Z + QueryResult.GetImmersionDepth();
				if (getWaterNormals) waterNormals[i] = QueryResult.GetWaterSurfaceNormal();
				if (getWaterFlows) waterFlows[i] = QueryResult.GetVelocity();
			}
		}
	}

	return true;
}

