/*    Copyright (c) 2021, NWH coding, vl. Aron Rescec
 *    All rights reserved
 *
 *    This file is part of the NWH Dynamic Water Physics 2 for Unreal Engine
 *    and is licensed under the Unreal Engine EULA:
 *    https://www.unrealengine.com/en-US/eula/publishing
 */

#include "WaterDataBase.h"
#include "Kismet/GameplayStatics.h"

// Sets default values for this component's properties
UWaterDataBase::UWaterDataBase()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = false;

	_singlePointArray = { FVector(0,0,0) };
	_singleHeightArray = { 0 };
}


// Called when the game starts
void UWaterDataBase::BeginPlay()
{
	Super::BeginPlay();

	UE_LOG(LogTemp, Display, TEXT("Setting up WaterDataBase (flat) for actor %s."), *GetOwner()->GetName());

	// Try to find water height refrence actor by searching for actor with tag 'WaterHeightReference'
	if (!WaterHeightReferenceActor)
	{
		if (UWorld* World = GetWorld())
		{
			TArray<AActor*> OutActors;
			UGameplayStatics::GetAllActorsWithTag(World, FName(TEXT("DWP2_WaterHeightReference")), OutActors);
			if(OutActors.Num() > 0)
			{
				WaterHeightReferenceActor = OutActors[0];
			}
		}
	}
}


// Called every frame
void UWaterDataBase::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}

bool UWaterDataBase::QueryWaterData(TArray<FVector>& points, TArray<float>& waterHeights,
	TArray<FVector>& waterNormals, TArray<FVector>& waterFlows, bool getWaterHeights, bool getWaterNormals, bool getWaterFlows, bool querySinglePoint)
{
	float WaterHeight = WaterHeightReferenceActor ? WaterHeightReferenceActor->GetActorLocation().Z : DefaultWaterHeight;

	// Update only if reference actor has been moved or default water height changed.
	if (WaterHeight != PrevWaterHeight)
	{
		int NumPoints = points.Num();
		for (int i = 0; i < NumPoints; i++)
		{
			waterHeights[i] = WaterHeight;
		}
	}

	PrevWaterHeight = WaterHeight;
	return true;
}

bool UWaterDataBase::PointInWater(FVector& point)
{
	_singlePointArray[0] = point;
	QueryWaterData(_singlePointArray, _singleHeightArray, _singleNormalArray, _singleFlowArray,
		true, false, false);
	return _singlePointArray[0].Z > point.Z;
		
}

