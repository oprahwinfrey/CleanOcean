/*    Copyright (c) 2021, NWH coding, vl. Aron Rescec
 *    All rights reserved
 *
 *    This file is part of the NWH Dynamic Water Physics 2 for Unreal Engine
 *    and is licensed under the Unreal Engine EULA:
 *    https://www.unrealengine.com/en-US/eula/publishing
 */


#include "ShipEngineComponent.h"
#include "Components/AudioComponent.h"

// Sets default values for this component's properties
UShipEngineComponent::UShipEngineComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UShipEngineComponent::BeginPlay()
{
	Super::BeginPlay();

	if (IsOn)
	{
		State = ShipEngineState::On;
		WasOn = true;
	}
	else
	{
		State = ShipEngineState::Off;
		WasOn = false;
	}

	SimulatingComponent = Cast<UPrimitiveComponent>(GetOwner()->GetRootComponent());
	if (!SimulatingComponent)
	{
		UE_LOG(LogTemp, Warning, TEXT("ShipEngineComponent: Root component is not a UPrimitiveComponent."));
	}
	else
	{
		UE_LOG(LogTemp, Display, TEXT("ShipEngineComponent: Applying forces to %s"), *SimulatingComponent->GetName());
	}

	TArray<USceneComponent*> ChildComponents;
	GetChildrenComponents(false, ChildComponents);
	for(int i = 0; i < ChildComponents.Num(); i++)
	{
		EngineAudioComponent = Cast<UAudioComponent>(ChildComponents[i]);
		if (EngineAudioComponent)
		{
			break;
		}
	}

	if(!EngineAudioComponent)
	{
		UE_LOG(LogTemp, Warning, TEXT("ShipEngineComponent: EngineAudioComponent not found in children. Engine sound will not play."));
	}

	// Try get propeller StaticMeshComponent in children.
	if (!PropellerStaticMeshComponent)
	{
		GetChildrenComponents(false, ChildComponents);
		for (int i = 0; i < ChildComponents.Num(); i++)
		{
			PropellerStaticMeshComponent = Cast<UStaticMeshComponent>(ChildComponents[i]);
			if (PropellerStaticMeshComponent)
			{
				break;
			}
		}
	}
}


// Called every frame
void UShipEngineComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if (!SimulatingComponent)
	{
		return;
	}
	
	if (const UWorld* World = GetWorld())
	{
		float Time = World->RealTimeSeconds;
		float Speed = GetSpeed() * 0.01f;
		
		if (!IsOn && InputThrottle > 0.5f)
		{
			StartEngine();
		}

		// Check engine state
		if (State == ShipEngineState::Starting && !IsOn)
		{
			State = ShipEngineState::Off;
		}
		else if (IsOn && !WasOn)
		{
			State = ShipEngineState::Starting;
			StartTime = Time;
		}
		else if (!IsOn && WasOn)
		{
			State = ShipEngineState::Stopping;
			StopTime = Time;
		}

		// Run timer starting or stopping
		if (State == ShipEngineState::Starting)
		{
			if (Time > StartTime + StartDuration)
			{
				State = ShipEngineState::On;
			}
		}
		else if (State == ShipEngineState::Stopping)
		{
			if (Time > StopTime + StartDuration)
			{
				State = ShipEngineState::Off;
			}
		}

		// RPM
		float NewRpm = 0.0f;
		switch (State)
		{
			case ShipEngineState::On:
				NewRpm = (0.7f + 0.3f * (Speed / MaxSpeed)) * FMath::Abs(InputThrottle) * MaxRPM;
				NewRpm = FMath::Clamp(NewRpm, MinRPM, MaxRPM);
				if (!IsSubmerged())
				{
					NewRpm = MaxRPM;
				}

				break;
			case ShipEngineState::Off:
				NewRpm = 0;
				break;
			case ShipEngineState::Starting:
				NewRpm = StartingRPM;
				break;
			case ShipEngineState::Stopping:
				NewRpm = 0.0f;
				break;
		}

		RPM = FMath::FInterpTo(RPM, NewRpm, DeltaTime, SpinUpSpeed);

		if (State == ShipEngineState::On)
		{
			const bool ApplyForce = IsSubmerged() || ApplyThrustWhenAboveWater;

			Thrust = 0;
			if (ApplyForce && MaxRPM != 0 && MaxSpeed != 0 && Speed < MaxSpeed && RPM > MinRPM + 1.0f && InputThrottle != 0)
			{
				Thrust = FMath::Sign(InputThrottle) * (RPM / MaxRPM) * MaxThrust;
				Thrust = FMath::Sign(InputThrottle) == 1 ? Thrust : Thrust * ReverseThrustCoefficient;
				const FVector ThrustVector = Thrust * GetComponentTransform().TransformVector(FVector::ForwardVector) * 100.0f;
				const FVector ThrustPosition = GetComponentLocation();
				SimulatingComponent->AddForceAtLocation(ThrustVector, ThrustPosition);
			}
			
			if (PropellerStaticMeshComponent)
			{
				float Roll = RPM * PropellerRPMRatio * 6.0012f * DeltaTime;
				FRotator Rotation = FRotator(0, 0, Roll);
				PropellerStaticMeshComponent->AddRelativeRotation(Rotation);
			}
		}
		
		WasOn = IsOn;
	}
	
	SoundUpdate();
}

void UShipEngineComponent::SetThrottle(float Value)
{
	InputThrottle = Value;
}

float UShipEngineComponent::GetThrottle() const
{
	return InputThrottle;
}

float UShipEngineComponent::GetRpmPercent()
{
	return FMath::Clamp(((RPM - MinRPM) / MaxRPM), 0.0f, 1.0f);
}

float UShipEngineComponent::GetThrust()
{
	return Thrust;
}

void UShipEngineComponent::StartEngine()
{
	UE_LOG(LogTemp, Display, TEXT("Starting ShipEngine %s."), *GetName())
	IsOn = true;
}

void UShipEngineComponent::StopEngine()
{
	UE_LOG(LogTemp, Display, TEXT("Stopping ShipEngine %s."), *GetName())
	IsOn = false;
}

void UShipEngineComponent::StartStop()
{
	if (State == ShipEngineState::On || State == ShipEngineState::Starting)
	{
		StopEngine();
	}
	else
	{
		StartEngine();
	}
}

bool UShipEngineComponent::IsSubmerged()
{
	return true; // TODO
}

float UShipEngineComponent::GetSpeed()
{
	return GetOwner()->GetVelocity().X; // TODO - check
}

void UShipEngineComponent::SoundUpdate()
{
    if (!EngineAudioComponent)
    {
        return;
    }

	float TargetVolume = BaseVolume + GetRpmPercent() * VolumeRange;
	float TargetPitch = BasePitch + GetRpmPercent() * PitchRange;
	
	EngineAudioComponent->SetVolumeMultiplier(TargetVolume);
    EngineAudioComponent->SetPitchMultiplier(TargetPitch);
	
    if (State != ShipEngineState::Off)
    {
    	if(!EngineAudioComponent->IsPlaying())
    	{
    		EngineAudioComponent->Play();
    	}
    }
    else 
    {
        EngineAudioComponent->Stop();
    }
}

