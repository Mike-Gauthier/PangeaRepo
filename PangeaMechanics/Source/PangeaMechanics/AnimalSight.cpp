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

	TameAnimal = GetOwner()->FindComponentByClass<UTameAnimal>();
}

// Called every frame
void UAnimalSight::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	//Requires animal to be initially facing right (positive y-direction)
	FVector CurrentAnimalFacingDir = GetOwner()->GetActorRightVector();
	FVector AnimalToPlayerVector = TameAnimal->GetAnimalToPlayerVector();

	float PlayerAngleFromSightCentre = TameAnimal->CalcAngleFromDotProduct(CurrentAnimalFacingDir, AnimalToPlayerVector);
	
	if (!TameAnimal->GetIsTamed())
	{
		if (PlayerAngleFromSightCentre < HalfSightWidthAngle)
		{
			IsAlerted = true;
			UE_LOG(LogTemp, Log, TEXT("PLAYER IN SIGHT!"));
		}

		if (IsAlerted)
		{
			if (FMath::Abs(AnimalToPlayerVector.Size()) > TargetFleeDistance)
			{
				IsAlerted = false;
			}

			//Animal fleeing movement
			TameAnimal->CalcFleeingAnimalSingleAxisPos(AnimalToPlayerVector.X, FVector(TameAnimal->GetAnimalMovementSpeed(), 0.0f, 0.0f), TargetFleeDistance);
			TameAnimal->CalcFleeingAnimalSingleAxisPos(AnimalToPlayerVector.Y, FVector(0.0f, TameAnimal->GetAnimalMovementSpeed(), 0.0f), TargetFleeDistance);

			//Animal fleeing rotation
			TameAnimal->AnimalRotation("Flee");
		}
	}
	else
	{
		IsAlerted = false;
	}
}