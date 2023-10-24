/*    Copyright (c) 2021, NWH coding, vl. Aron Rescec
 *    All rights reserved
 *
 *    This file is part of the NWH Dynamic Water Physics 2 for Unreal Engine
 *    and is licensed under the Unreal Engine EULA:
 *    https://www.unrealengine.com/en-US/eula/publishing
 */

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "WaterDataBase.generated.h"

/**
* Base class for retrieving water data. 
*/
UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class DWP2_API UWaterDataBase : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UWaterDataBase();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Water Settings")
	float DefaultWaterHeight = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Water Settings")
	AActor* WaterHeightReferenceActor;

	protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	virtual bool QueryWaterData(
		TArray<FVector>& points,
		TArray<float>& waterHeights,
		TArray<FVector>& waterNormals,
		TArray<FVector>& waterFlows,
		bool getWaterHeights = false,
		bool getWaterNormals = false,
		bool getWaterFlows = false,
		bool querySinglePoint = false);

	bool PointInWater(FVector& point);

protected:
	TArray<FVector> _singlePointArray = { FVector::ZeroVector };
	TArray<float> _singleHeightArray = { 0 };
	TArray<FVector> _singleNormalArray = { FVector::ZeroVector };
	TArray<FVector> _singleFlowArray = { FVector::ZeroVector };

private:
	float PrevWaterHeight = 0;
};
