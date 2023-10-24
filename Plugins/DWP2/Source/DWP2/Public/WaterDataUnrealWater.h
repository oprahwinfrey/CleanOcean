/*    Copyright (c) 2021, NWH coding, vl. Aron Rescec
 *    All rights reserved
 *
 *    This file is part of the NWH Dynamic Water Physics 2 for Unreal Engine
 *    and is licensed under the Unreal Engine EULA:
 *    https://www.unrealengine.com/en-US/eula/publishing
 */

#pragma once

#include "CoreMinimal.h"
#include "WaterDataBase.h"
#include "BuoyancyComponent.h"
#include "WaterBodyActor.h"
#include "Components/ActorComponent.h"
#include "WaterDataUnrealWater.generated.h"

 /**
  * Interface between WaterObject and Unreal Water.
  */
UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class DWP2_API UWaterDataUnrealWater : public UWaterDataBase
{
	GENERATED_BODY()

public:	
	UWaterDataUnrealWater();

	virtual void BeginPlay() override;

	virtual bool QueryWaterData(TArray<FVector>& points, TArray<float>& waterHeights,
		TArray<FVector>& waterNormals, TArray<FVector>& waterFlows, bool getWaterHeights, 
		bool getWaterNormals, bool getWaterFlows, bool querySinglePoint) override;

	class UWaterBodyComponent* WaterBody;

	class ABuoyancyManager* BuoyancyManager;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Water")
	class UBuoyancyComponent* BuoyancyComponent;
};
