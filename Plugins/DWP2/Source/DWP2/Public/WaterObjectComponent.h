/*    Copyright (c) 2021, NWH coding, vl. Aron Rescec
 *    All rights reserved
 *
 *    This file is part of the NWH Dynamic Water Physics 2 for Unreal Engine
 *    and is licensed under the Unreal Engine EULA:
 *    https://www.unrealengine.com/en-US/eula/publishing
 */

#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "WaterObjectComponent.generated.h"

class UStaticMesh;
class UWaterDataBase;

/**
 * Class for simulating interaction of objects with water based on mesh data.
 */
UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class DWP2_API UWaterObjectComponent : public USceneComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UWaterObjectComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION(BlueprintCallable, Category = "Water Object")
	void Simulate(float DeltaTime);

	UFUNCTION(BlueprintCallable, Category = "Water Object")
		void UseManualTick(bool value);

	/**
	 * Ticks the WaterObject simulation.
	 */
	UFUNCTION(BlueprintCallable, Category = "Water Object")
	void CalculateForces(FVector rigidbodyCoM, FVector rigidbodyLinVel, FVector rigidbodyAngVel, FMatrix l2wMatrix);

	/**
	 * Initializes simulation data from a StaticMeshComponent
	 * @param LOD LOD to use.
	 * @param SectionIndex Mesh section index which will be used.
	 */
	UFUNCTION(BlueprintCallable, Category = "Water Object")
	void InitializeSimMesh(UStaticMeshComponent* StaticMeshComponent, int32 LOD = 0, int32 SectionIndex = 0);

	/**
	 * Runs calculations on a single triangle.
	 * @param i Triangle index.
	 */
	UFUNCTION(BlueprintCallable, Category = "Water Object")
	void CalcTri(int i);
	
	/**
	 * Sets the water heights array. Normally filled in by WaterData class.
	 * @param waterHeights World water heights at vertex positions.
	 */
	UFUNCTION(BlueprintCallable, Category = "Water Data")
	void SetWaterHeights(TArray<float>& waterHeights);


	/**
	 * Sets the single water height at index.
	 */
	UFUNCTION(BlueprintCallable, Category = "Water Data")
	void SetWaterHeightSingle(int index, float value);

	/**
	 * Sets the water flows/surface velocities array. Normally filled in by WaterData class.
	 * @param waterFlows World water flows at vertex positions.
	 */
	UFUNCTION(BlueprintCallable, Category = "Water Data")
	void SetWaterFlows(TArray<FVector>& waterFlows);


	/**
	 * Sets the single water flow at index.
	 */
	UFUNCTION(BlueprintCallable, Category = "Water Data")
	void SetWaterFlowSingle(int index, FVector value);

	/**
	 * Sets the water normals array. Normally filled in by WaterData class.
	 * @param waterNormals World water normals at vertex positions.
	 */
	UFUNCTION(BlueprintCallable, Category = "Water Data")
	void SetWaterNormals(TArray<FVector>& waterNormals);

	/**
	 * Sets the single water normal at index.
	 */
	UFUNCTION(BlueprintCallable, Category = "Water Data")
	void SetWaterNormalSingle(int index, FVector value);

	/**
	 * Component from which the water data will be retrieved.
	 * @param waterFlows World water flows at vertex positions.
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Water Data")
	UWaterDataBase* WaterDataComponent;

	/**
	 * Returns total force acting on the body at the CoM.
	 */
	UFUNCTION(BlueprintCallable, Category = "Sim Results")
	FVector GetResultForce();
	
	/**
	 *  Returns total torque acting on the body at the CoM.
	 */
	UFUNCTION(BlueprintCallable, Category = "Sim Results")
	FVector GetResultTorque();

	/**
	 *  Returns per-triangle result forces.
	 */
	UFUNCTION(BlueprintCallable, Category = "Sim Results")
	TArray<FVector>& GetResultForces();

	/**
	 *  Returns per-triangle result force application points.
	 */
	UFUNCTION(BlueprintCallable, Category = "Sim Results")
	TArray<FVector>& GetResultPoints();

	/**
	*  Returns per-triangle water intersection points.
	*/
	UFUNCTION(BlueprintCallable, Category = "Sim Results")
	TArray<FVector>& GetResultP0s();

	/**
	 *  Returns per-triangle result normals.
	 */
	UFUNCTION(BlueprintCallable, Category = "Sim Results")
	TArray<FVector>& GetResultNormals();

	/**
	 *  Returns per-triangle result water flow / velocities.
	 */
	UFUNCTION(BlueprintCallable, Category = "Sim Results")
	TArray<FVector>& GetResultVelocities();

	/**
	 *  Returns triangle areas.
	 */
	UFUNCTION(BlueprintCallable, Category = "Sim Results")
	TArray<float>& GetResultAreas();

	/**
	 *  Returns triangle distances to water.
	 */
	UFUNCTION(BlueprintCallable, Category = "Sim Results")
	TArray<float>& GetResultDistances();

	/**
	*     Returns the states of triangles.
	*     0 - Triangle is under water
	*     1 - Triangle is partially under water
	*     2 - Triangle is above water
	*     3 - Triangle is disabled
	*     4 - Triangle is deleted
	 */
	UFUNCTION(BlueprintCallable, Category = "Sim Results")
	TArray<int>& GetTriStates();

	/**
	 *  Returns world vertex coordinates.
	 */
	UFUNCTION(BlueprintCallable, Category = "Sim Results")
	TArray<FVector>& GetWorldVertices();

	UFUNCTION(BlueprintCallable, Category = "Sim Results")
	int GetVertexCount();

	UFUNCTION(BlueprintCallable, Category = "Sim Results")
	int GetTriangleCount();

	/**
	 *  True if any triangle is partially or fully submerged.
	 */
	UFUNCTION(BlueprintCallable, Category = "Sim Results")
	int IsTouchingWater();


	UFUNCTION(BlueprintCallable, Category = "Debug")
	void DrawDebugGizmos(float DeltaTime);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Water Settings")
		bool bCalculateWaterHeights = true;

	/**
	 *     Should water normals be taken into account when calculating forces?
	 *     Should be disabled if the water if flat or the water system does not support water normal queries
	 *     to save on performance.
	 *     Will be automatically disabled if the water system does not support normal queries.
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Water Settings")
		bool bCalculateWaterNormals = true;

	/**
	 *     Should water velocities be taken into account when calculating forces?
	 *     Should be disabled if the water used does not support velocity/flow map queries
	 *     Will be automatically disabled if the water system does not support velocity queries.
	 *     to save on performance.
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Water Settings")
		bool bCalculateWaterFlow = false;

	/**
	* If true and WaterData component is present water height will only be queried once, at the center of the
	* actor, instead of center of each mesh triangle.
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Water Settings")
		bool bQuerySinglePoint = false;

	/**
	 *     Density of the fluid the object is in.
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Water Settings")
		float FluidDensity = 1030;

	/**
	 * Coefficient by which the buoyancy forces are multiplied.
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Water Settings", meta = (ClampMin = "0.0", ClampMax = "5.0"))
		float BuoyForceCoefficient = 1;

	/**
	 *     Coefficient by which all the non-buoyancy forces are multiplied.
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Water Settings", meta = (ClampMin = "0.0", ClampMax = "2.0"))
		float DynamicForceCoefficient = 1;

	/**
	*     Set to 1 for linear dot/force ratio or other than 1 for exponential ratio.
	*     When force is calculated it is multiplied by the dot value between normal of the surface and the velocity.
	*    High power values will result in shallow angles between the two having less of an effect on the final force, and
	*     vice versa.
	*     Use 1 for best performance. Any other value will result in additional Mathf.Pow() call per triangle.
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Water Settings", meta = (ClampMin = "0.1", ClampMax = "2.0"))
		float VelocityDotPower = 1.0f;

	/* Force coefficient when the surface is entering the water. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Water Settings", meta = (ClampMin = "0.0", ClampMax = "2.0"))
		float SlamForceCoefficient = 1.0f;

	/* Force coefficient when the surface is exiting the water. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Water Settings", meta = (ClampMin = "0.0", ClampMax = "2.0"))
		float SuctionForceCoefficient = 1.0f;

	/* Coefficient by which the final (total) force is multiplied. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Water Settings", meta = (ClampMin = "0.0", ClampMax = "4.0"))
		float FinalForceCoefficient = 1.0f;

	/* Coefficient by which the final (totale) torque is multiplied. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Water Settings", meta = (ClampMin = "0.0", ClampMax = "4.0"))
		float FinalTorqueCoefficient = 1.0f;
	
	/**
	 * Resistant force exerted on an object moving in a fluid.
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Water Settings", meta = (ClampMin = "0.0", ClampMax = "0.2"))
		float SkinDragCoefficient = 0.001f;


	/**
	* Default water height. This value will be used if there are no WaterData components attached.
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Water Settings")
		float DefaultWaterHeight = 0.0f;

	/**
	* Default water height. This value will be used if there are no WaterData components attached.
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Water Settings")
	FVector DefaultWaterNormal = FVector(0,0, 1);

	/**
	* Default water height. This value will be used if there are no WaterData components attached.
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Water Settings")
	FVector DefaultWaterFlow = FVector(0, 0, 0);

	/**
	 * Global gravity value.
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Water Settings")
		float GravityZ = -980.0f;

	/**
	 * Global up direction. On flat water buoyancy forces will be applied along this direction.
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Water Settings")
		FVector WorldUpVector = FVector(0, 0, 1);

	/**
	* Should debug gizmos be drawn? Impacts performance. 
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Water Settings")
	bool bDrawDebug = false;

	/**
	* Welds co-located vertices reducing water height query count 
	* which drastically improves Unreal Water and 3rd party plugin performance
	* when using waves with bSingleWaterQuery disabled.
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Mesh Settings")
	bool bWeldVertices = true;

	/**
	* StaticMesh LOD that will be used to simulate water physics. 
	* Default (-1) uses the lowest LOD available.
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Mesh Settings")
	int SimMeshLOD = -1;

	/**
	* StaticMesh section that will be used to simulate water physics.
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Mesh Settings")
	int SimMeshSection = 0;

	/*
	* Static mesh that will be used to simulate physics. It is recommended that this mesh contains the
	* minimum amount of triangles as the performance is directly proportional to the triangle count.
	*/
	UPROPERTY()
		class UStaticMeshComponent* SimStaticMeshComponent;

	/*
	* PrimitiveComponent to which the forces will be applied.
	*/
	UPROPERTY()
		class UPrimitiveComponent* SimulatingComponent;

	/*
	* If enabled tick will have to be called manually but the engine Tick event will still run.
	*/
	UPROPERTY()
		bool bManualTickWaterObject = false;


private:
	void CalculateForce(const FVector& p0, const FVector& p1, const FVector& p2,
		const float& dist0, const float& dist1, const float& dist2,
		const int& index, const int& i0, const int& i1, const int& i2,
		FVector& force, FVector& center, float& area, float& distanceToSurface);

	void ThreeUnderWater(const FVector& p0, const FVector& p1, const FVector& p2,
		const float& dist0, const float& dist1, const float& dist2,
		const int& i0, const int& i1, const int& i2, const int& index);

	void TwoUnderWater(const FVector& p0, const FVector& p1, const FVector& p2,
		const float& dist0, const float& dist1, const float& dist2,
		const int& i0, const int& i1, const int& i2, const int& index);

	void OneUnderWater(const FVector& p0, const FVector& p1, const FVector& p2,
		const float& dist0, const float& dist1, const float& dist2,
		const int& i0, const int& i1, const int& i2, const int& index);

	void WeldMeshVertices(TArray<FVector>& OutVerts, TArray<int>& OutTris, float MaxDelta = 0.01f);
	
	float FastInvSqrt(float x);

	/// <summary>
	///     An array representing the state of each triangle:
	///     0 - all three verts are under water
	///     1 - one or two verts are under water
	///     2 - triangle is above water
	///     3 - triangle is disabled
	///     4 - triangle has been deleted
	///     To see if the triangle should be simulated check if its state is less or equal to 2.
	///     For triangle to be touching water its state should be 0 or 1.
	/// </summary>
	TArray<int> TriStates;
	FMatrix LocalToWorldMatrix;

	// Rigidbody data
	FVector RigidbodyCoM = FVector(0, 0, 0);
	FVector RigidbodyLinearVel = FVector(0, 0, 0);
	FVector RigidbodyAngVel = FVector(0, 0, 0);

	// Mesh data
	TArray<FVector> LocalVertices;
	TArray<int32> TriIndices;
	TArray<FVector> WorldVertices;

	// Water data
	TArray<float> WaterHeights;
	TArray<FVector> WaterFlows;
	TArray<FVector> WaterNormals;

	// Result data
	FVector ResultForce;
	FVector ResultTorque;
	TArray<FVector> ResultP0s;
	TArray<FVector> ResultForces;
	TArray<FVector> ResultCenters;
	TArray<FVector> ResultNormals;
	TArray<FVector> ResultVelocities;
	TArray<float> ResultAreas;
	TArray<float> ResultDistances;		
};
