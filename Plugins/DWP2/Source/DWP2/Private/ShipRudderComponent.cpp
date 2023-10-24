/*    Copyright (c) 2021, NWH coding, vl. Aron Rescec
 *    All rights reserved
 *
 *    This file is part of the NWH Dynamic Water Physics 2 for Unreal Engine
 *    and is licensed under the Unreal Engine EULA:
 *    https://www.unrealengine.com/en-US/eula/publishing
 */

#include "ShipRudderComponent.h"

// Sets default values for this component's properties
UShipRudderComponent::UShipRudderComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}

// Called when the game starts
void UShipRudderComponent::BeginPlay()
{
	Super::BeginPlay();

	InitialRotation = this->GetRelativeRotation();
}

// Called every frame
void UShipRudderComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	float TargetAngle = MaxAngle * InputRudder;
	bool TargetAngleIsLarger = TargetAngle > Angle;
	Angle = TargetAngleIsLarger ? Angle + RotationSpeed * DeltaTime : Angle - RotationSpeed * DeltaTime;
	Angle = TargetAngleIsLarger ? FMath::ClampAngle(Angle, Angle, TargetAngle) : FMath::Clamp(Angle, TargetAngle, Angle);
	
	const FRotator NewRotation = FRotator(RotationAxis.X * Angle, RotationAxis.Y * Angle, RotationAxis.Z * Angle);
	this->SetRelativeRotation(InitialRotation + NewRotation);
}

float UShipRudderComponent::GetAnglePercent() const
{
	return Angle / MaxAngle;
}

float UShipRudderComponent::GetCurrentAngle() const
{
	return Angle;
}

void UShipRudderComponent::SetInput(float Value)
{
	InputRudder = Value;
}

