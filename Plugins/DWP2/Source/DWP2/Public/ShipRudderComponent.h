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
#include "ShipRudderComponent.generated.h"

/**
 * SceneComponent that rotates the child object(s) around its transform position based on input.
 * Should be attached as a child to UShipComponent.
 */
UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class DWP2_API UShipRudderComponent : public USceneComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UShipRudderComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

public:
	float GetAnglePercent() const;
	float GetCurrentAngle() const;
	void SetInput(float Value);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Rudder")
	float MaxAngle = 45.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Rudder")
	float RotationSpeed = 40.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Rudder")
	FVector RotationAxis = FVector(0.0f, -1.0f, 0.0f);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Rudder")
	float InputRudder;

private:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Rudder", meta = (AllowPrivateAccess = "true"))
	float Angle;

	FRotator InitialRotation;
};
