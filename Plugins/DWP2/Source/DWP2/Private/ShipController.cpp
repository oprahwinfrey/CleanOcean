/*    Copyright (c) 2021, NWH coding, vl. Aron Rescec
 *    All rights reserved
 *
 *    This file is part of the NWH Dynamic Water Physics 2 for Unreal Engine
 *    and is licensed under the Unreal Engine EULA:
 *    https://www.unrealengine.com/en-US/eula/publishing
 */


#include "ShipController.h"
#include "Components/InputComponent.h"
#include "ShipEngineComponent.h"
#include "ShipRudderComponent.h"
#include "DrawDebugHelpers.h"

// Sets default values
AShipController::AShipController()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	AutoReceiveInput = EAutoReceiveInput::Player0;
}

// Called when the game starts or when spawned
void AShipController::BeginPlay()
{
	Super::BeginPlay();

	GetComponents<UShipEngineComponent>(Engines, true);
	UE_LOG(LogTemp, Display, TEXT("ShipController: Found %d ShipEngineComponent(s)."), Engines.Num());

	GetComponents<UShipRudderComponent>(Rudders, true);
	UE_LOG(LogTemp, Display, TEXT("ShipController: Found %d ShipRudderComponent."), Rudders.Num());
}

// Called every frame
void AShipController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// Called to bind functionality to input
void AShipController::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	check(PlayerInputComponent);

	PlayerInputComponent->BindAxis("Throttle", this, &AShipController::InputThrottle);
	PlayerInputComponent->BindAxis("Rudder", this, &AShipController::InputRudder);
	PlayerInputComponent->BindAction("EngineStartStop", IE_Pressed, this, &AShipController::InputEngineStartStop);
}

void AShipController::InputThrottle(float Value)
{
	for(UShipEngineComponent* Engine : Engines)
	{
		Engine->SetThrottle(Value);
	}
}

void AShipController::InputRudder(float Value)
{
	for(UShipRudderComponent* Rudder : Rudders)
	{
		Rudder->SetInput(Value);
	}
}

void AShipController::InputEngineStartStop()
{
	for (UShipEngineComponent* Engine : Engines)
	{
		Engine->StartStop();
	}
}


