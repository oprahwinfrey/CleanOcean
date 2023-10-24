/*    Copyright (c) 2021, NWH coding, vl. Aron Rescec
 *    All rights reserved
 *
 *    This file is part of the NWH Dynamic Water Physics 2 for Unreal Engine
 *    and is licensed under the Unreal Engine EULA:
 *    https://www.unrealengine.com/en-US/eula/publishing
 */

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "ShipController.generated.h"

class UShipEngineComponent;
class UShipRudderComponent;
class UInputComponent;

/**
 * Manages ship and ship components.
 */
UCLASS()
class DWP2_API AShipController : public APawn
{
	GENERATED_BODY()

public:
	AShipController();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;
	virtual void SetupPlayerInputComponent(UInputComponent* PlayerInputComponent) override;

public:
	void InputThrottle(float Value);
	void InputRudder(float Value);
	void InputEngineStartStop();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = ShipController)
	
	TArray<UShipEngineComponent*> Engines;
	TArray<UShipRudderComponent*> Rudders;
};
