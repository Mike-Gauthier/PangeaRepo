// Fill out your copyright notice in the Description page of Project Settings.


#include "TameAnimal.h"

// Sets default values for this component's properties
UTameAnimal::UTameAnimal()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
}

// Called when the game starts
void UTameAnimal::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void UTameAnimal::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	FVector CurrPlayerPos = GetWorld()->GetFirstPlayerController()->GetPawn()->GetActorLocation();
	FVector CurrAnimalPos = GetOwner()->GetActorLocation();
	AnimalToPlayerVector = CurrPlayerPos - CurrAnimalPos;

	UpdateIsTamed();

	if (IsTamed)
	{
		//Movement
		TamedAnimalMovement();

		//Rotation
		AnimalRotation("Tamed");

		//NOTE Maybe add a fix to prevent the animal trying to constantly rotate,
		//if the player jumps on top of it and stands in its back half
	}
}

//General TameAnimal
void UTameAnimal::UpdateIsTamed()
{
	if (GetWorld()->GetFirstPlayerController()->WasInputKeyJustPressed("T"))
	{
		if (AnimalTriggerBox->GetIsInAnimalTriggerBox())
		{
			IsTamed = !IsTamed;
		}
		else
		{
			if (IsTamed)
			{
				IsTamed = false;
			}
		}
	}
}

//Movement
//Tamed Movement
void UTameAnimal::TamedAnimalMovement()
{
	CalcAnimalSingleAxisPos(AnimalToPlayerVector.X, FVector(AnimalMovementSpeed, 0.0f, 0.0f));
	CalcAnimalSingleAxisPos(AnimalToPlayerVector.Y, FVector(0.0f, AnimalMovementSpeed, 0.0f));
}
void UTameAnimal::CalcAnimalSingleAxisPos(float AnimalToPlayerAxisDistance, FVector SignlessAdjustVec)
{
	if (FMath::Abs(AnimalToPlayerAxisDistance) > TargetAnimalPlayerDistance)
	{
		if (AnimalToPlayerAxisDistance > 0)
		{
			UpdateAnimalPos(SignlessAdjustVec);
		}
		else
		{
			UpdateAnimalPos(-SignlessAdjustVec);
		}
	}
}
void UTameAnimal::CalcFleeingAnimalSingleAxisPos(float AnimalToPlayerAxisDistance, FVector SignlessAdjustVec, float TargetFleeDistance)
{
	if (FMath::Abs(AnimalToPlayerAxisDistance) < TargetFleeDistance)
	{
		if (AnimalToPlayerAxisDistance > 0)
		{
			UpdateAnimalPos(-SignlessAdjustVec);
		}
		else
		{
			UpdateAnimalPos(SignlessAdjustVec);
		}
	}
}
void UTameAnimal::UpdateAnimalPos(FVector SignedAdjustVec)
{
	GetOwner()->SetActorLocation(GetOwner()->GetActorLocation() + SignedAdjustVec);
}

//Rotation
void UTameAnimal::AnimalRotation(FString MovementType)
{
	float DirectionMultiplier;
	if (MovementType == "Tamed")
	{
		DirectionMultiplier = 1.0f;
	}
	else if (MovementType == "Flee")
	{
		DirectionMultiplier = -1.0f;
	}

	//Vectors used
	FVector CurrentAnimalFacingDir = GetOwner()->GetActorRightVector();
	FVector SignedAnimalToPlayerVector = DirectionMultiplier * AnimalToPlayerVector;

	//Angles used
	//Both measured from positive y axis (the starting front facing direction of the animal)
	float CurrentAnimalAngle = CalcAngleFromDotProduct(CurrentAnimalFacingDir, FVector(0.0f, 1.0f, 0.0f));
	float TargetAnimalAngle = CalcAngleFromDotProduct(SignedAnimalToPlayerVector, FVector(0.0f, 1.0f, 0.0f));

	//Differentiate between positive and negative angles
	CurrentAnimalAngle = MakeAnglePosOrNeg(CurrentAnimalFacingDir, CurrentAnimalAngle);
	TargetAnimalAngle = MakeAnglePosOrNeg(SignedAnimalToPlayerVector, TargetAnimalAngle);

	//Find difference between the two angles
	float AngleToTurn = CurrentAnimalAngle - TargetAnimalAngle;

	//Keep difference within -180 < x < 180 range
	AngleToTurn = KeepWithinAngleRange(AngleToTurn, 180.0f, -180.0f);

	//Calculate the turn direction (requires an angle range of -180 < x < 180)
	float TurnDirectionMultiplier = CalcTurnDirection(AngleToTurn);

	//Rotate animal
	if ((CurrentAnimalAngle < (TargetAnimalAngle - AnimalRotationLeniency))
		|| (CurrentAnimalAngle > (TargetAnimalAngle + AnimalRotationLeniency)))
	{
		UpdateAnimalRot(TurnDirectionMultiplier);
	}
}
float UTameAnimal::RadiansToDegrees(float RadiansInput)
{
	float DegreesOutput = (RadiansInput * 180.0f) / UKismetMathLibrary::GetPI();
	return DegreesOutput;
}
float UTameAnimal::CalcAngleFromDotProduct(FVector Input1, FVector Input2)
{
	float OutputAngle = UKismetMathLibrary::Acos(FVector::DotProduct(Input1, Input2) / (Input1.Size() * Input2.Size()));
	OutputAngle = RadiansToDegrees(OutputAngle);
	return OutputAngle;
}
float UTameAnimal::MakeAnglePosOrNeg(FVector InputVector, float InputAngle)
{
	if (InputVector.X < 0)
	{
		InputAngle = -InputAngle;
	}
	return InputAngle;
}
float UTameAnimal::KeepWithinAngleRange(float InputAngle, float UpperLimit, float LowerLimit)
{
	float Range = UpperLimit - LowerLimit;
	while (InputAngle > UpperLimit)
	{
		InputAngle -= Range;
	}
	while (InputAngle < LowerLimit)
	{
		InputAngle += Range;
	}
	return InputAngle;
}
float UTameAnimal::CalcTurnDirection(float InputAngle)
{
	float TurnDirectionMultiplier;
	if (InputAngle < 0.0f)
	{
		//ANTI-CLOCKWISE
		TurnDirectionMultiplier = -1.0f;
	}
	else if (InputAngle > 0.0f)
	{
		//CLOCKWISE
		TurnDirectionMultiplier = 1.0f;
	}
	return TurnDirectionMultiplier;
}
void UTameAnimal::UpdateAnimalRot(float TurnDirectionMultiplier)
{
	GetOwner()->SetActorRotation(GetOwner()->GetActorRotation()
		+ (TurnDirectionMultiplier * FRotator(0.0f, AnimalRotationSpeed, 0.0f)));
}

//Getters
bool UTameAnimal::GetIsTamed()
{
	return IsTamed;
}
float UTameAnimal::GetAnimalMovementSpeed()
{
	return AnimalMovementSpeed;
}
FVector UTameAnimal::GetAnimalToPlayerVector()
{
	return AnimalToPlayerVector;
}
