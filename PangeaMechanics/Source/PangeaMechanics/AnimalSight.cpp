// Fill out your copyright notice in the Description page of Project Settings.


#include "AnimalSight.h"

// Sets default values for this component's properties
UAnimalSight::UAnimalSight()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
}

// Called when the game starts
void UAnimalSight::BeginPlay()
{
	Super::BeginPlay();

	AnimalMotion = GetOwner()->FindComponentByClass<UAnimalMotion>();
}

// Called every frame
void UAnimalSight::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	//Exhaustion level output log
	UE_LOG(LogTemp, Log, TEXT("Exhaustion level: %.1f/%.1f"),
		AnimalMotion->GetExhaustion(), AnimalMotion->GetMaxExhaustion());

	UE_LOG(LogTemp, Log, TEXT("AnimalPlayerDistance: %f"), AnimalMotion->GetAnimalToPlayerVector().Size());

	//Print IsTamed
	if (AnimalMotion->GetIsTamed())
	{
		UE_LOG(LogTemp, Log, TEXT("IsTamed: true"));
	}
	else
	{
		UE_LOG(LogTemp, Log, TEXT("IsTamed: false"));
	}

	//Print IsAlerted
	if (AnimalMotion->GetIsAlerted())
	{
		UE_LOG(LogTemp, Log, TEXT("IsAlerted: true"));
	}
	else
	{
		UE_LOG(LogTemp, Log, TEXT("IsAlerted: false"));
	}

	//Print IsExhausted
	if (AnimalMotion->GetIsExhausted())
	{
		UE_LOG(LogTemp, Log, TEXT("IsExhausted: true"));
	}
	else
	{
		UE_LOG(LogTemp, Log, TEXT("IsExhausted: false"));
	}

	PlayerAngleFromSightCentre = CalcPlayerAngleFromSightCentre();

	if (AnimalMotion->GetIsTamed())
	{
		SetStatesToTamedSetup();
	}
	else
	{
		IfJustUntamed();
		IfInUnawareState();
		IfInAlertedState();
		IfInExhaustedState();
	}
}

//General
float UAnimalSight::CalcPlayerAngleFromSightCentre()
{
	//Requires animal to be initially facing right (positive y-direction)
	FVector CurrentAnimalFacingDir = GetOwner()->GetActorRightVector();
	FVector AnimalToPlayerVector = AnimalMotion->GetAnimalToPlayerVector();

	float OutputAngle = AnimalMotion->CalcAngleFromDotProduct(CurrentAnimalFacingDir, AnimalToPlayerVector);
	return OutputAngle;
}

//Behaviour separated by animal alertness state
void UAnimalSight::SetStatesToTamedSetup()
{
	AnimalMotion->SetIsAlerted(false);
	AnimalMotion->SetIsExhausted(false);
	AnimalMotion->SetExhaustion(0.0f);
}
void UAnimalSight::IfJustUntamed()
{
	if (AnimalMotion->GetWasJustUntamed())
	{
		AnimalMotion->SetIsAlerted(true);
		AnimalMotion->SetWasJustUntamed(false);
	}
}
void UAnimalSight::IfInUnawareState()
{
	if (!AnimalMotion->GetIsAlerted() && !AnimalMotion->GetIsExhausted())
	{
		//Default to Alerted
		if ((PlayerAngleFromSightCentre < HalfSightWidthAngle) &&
			(AnimalMotion->GetAnimalToPlayerVector().Size() < AnimalSightReach))
		{
			AnimalMotion->SetIsAlerted(true);
		}
	}
}
void UAnimalSight::IfInAlertedState()
{
	if (AnimalMotion->GetIsAlerted() && !AnimalMotion->GetIsExhausted())
	{
		//Fleeing Motion
		if (AnimalMotion->GetAnimalToPlayerVector().Size() < AnimalMotion->GetTargetFleeDistance())
		{
			//Fleeing Movement
			AnimalMotion->FleeingAnimalMovement();

			//Fleeing Rotation
			AnimalMotion->FleeingAnimalRotation();

			//Increase Exhaustion when moving
			if (AnimalMotion->GetExhaustion() < AnimalMotion->GetMaxExhaustion())
			{
				AnimalMotion->IncrementExhaustion();
			}
		}
		else
		{
			//Decrease Exhaustion when stationary at TargetFleeDistance
			if (AnimalMotion->GetExhaustion() > 0.0f)
			{
				AnimalMotion->DecrementExhaustion();
			}
		}

		//Alerted to Exhausted
		if (AnimalMotion->GetExhaustion() >= AnimalMotion->GetMaxExhaustion())
		{
			//check this works - sign is right? - switching from int to float might be breaking this
			AnimalMotion->SetIsExhausted(true);
		}

		//Alerted back to Default
		if (AnimalMotion->GetAnimalToPlayerVector().Size() > AnimalMotion->GetAbandonHuntDistance())
		{
			AnimalMotion->SetIsAlerted(false);
		}
	}
}
void UAnimalSight::IfInExhaustedState()
{
	if (AnimalMotion->GetIsAlerted() && AnimalMotion->GetIsExhausted())
	{
		//Decrease Exhaustion when Exhausted and recovering
		if (AnimalMotion->GetExhaustion() > 0.0f)
		{
			AnimalMotion->DecrementExhaustion();
		}

		//Exhausted back to Alerted
		if (AnimalMotion->GetExhaustion() <= 0.0f)
		{
			AnimalMotion->SetIsExhausted(false);
		}

		//Exhausted back to Default
		if (AnimalMotion->GetAnimalToPlayerVector().Size() > AnimalMotion->GetAbandonHuntDistance())
		{
			AnimalMotion->SetIsAlerted(false);
			AnimalMotion->SetIsExhausted(false);
		}
	}
}