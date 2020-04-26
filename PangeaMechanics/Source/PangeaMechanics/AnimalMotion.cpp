// Fill out your copyright notice in the Description page of Project Settings.


#include "AnimalMotion.h"

// Sets default values for this component's properties
UAnimalMotion::UAnimalMotion()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
}


// Called when the game starts
void UAnimalMotion::BeginPlay()
{
	Super::BeginPlay();	
}


// Called every frame
void UAnimalMotion::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	CalculateAnimalToPlayerVector();
}

//General
void UAnimalMotion::CalculateAnimalToPlayerVector()
{
	FVector CurrPlayerPos = GetWorld()->GetFirstPlayerController()->GetPawn()->GetActorLocation();
	FVector CurrAnimalPos = GetOwner()->GetActorLocation();
	AnimalToPlayerVector = CurrPlayerPos - CurrAnimalPos;
}

//Movement
void UAnimalMotion::TamedAnimalMovement()
{
	CalcTamedAnimalSingleAxisPos(AnimalToPlayerVector.X, FVector(AnimalMovementSpeed, 0.0f, 0.0f));
	CalcTamedAnimalSingleAxisPos(AnimalToPlayerVector.Y, FVector(0.0f, AnimalMovementSpeed, 0.0f));
}
void UAnimalMotion::FleeingAnimalMovement()
{
	CalcFleeingAnimalSingleAxisPos(AnimalToPlayerVector.X, FVector(AnimalMovementSpeed, 0.0f, 0.0f));
	CalcFleeingAnimalSingleAxisPos(AnimalToPlayerVector.Y, FVector(0.0f, AnimalMovementSpeed, 0.0f));
}

//Functions used to calculate Movement
void UAnimalMotion::CalcTamedAnimalSingleAxisPos(float AnimalToPlayerAxisDistance, FVector SignlessAdjustVec)
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
void UAnimalMotion::CalcFleeingAnimalSingleAxisPos(float AnimalToPlayerAxisDistance, FVector SignlessAdjustVec)
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
void UAnimalMotion::UpdateAnimalPos(FVector SignedAdjustVec)
{
	GetOwner()->SetActorLocation(GetOwner()->GetActorLocation() + SignedAdjustVec);
}

//Rotation
void UAnimalMotion::TamedAnimalRotation()
{
	AnimalRotation(1.0f);
}
void UAnimalMotion::FleeingAnimalRotation()
{
	AnimalRotation(-1.0f);
}

//Functions used to calculate Rotation
void UAnimalMotion::AnimalRotation(float DirectionMultiplier)
{
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
float UAnimalMotion::RadiansToDegrees(float RadiansInput)
{
	float DegreesOutput = (RadiansInput * 180.0f) / UKismetMathLibrary::GetPI();
	return DegreesOutput;
}
float UAnimalMotion::CalcAngleFromDotProduct(FVector Input1, FVector Input2)
{
	float OutputAngle = UKismetMathLibrary::Acos(FVector::DotProduct(Input1, Input2) / (Input1.Size() * Input2.Size()));
	OutputAngle = RadiansToDegrees(OutputAngle);
	return OutputAngle;
}
float UAnimalMotion::MakeAnglePosOrNeg(FVector InputVector, float InputAngle)
{
	if (InputVector.X < 0)
	{
		InputAngle = -InputAngle;
	}
	return InputAngle;
}
float UAnimalMotion::KeepWithinAngleRange(float InputAngle, float UpperLimit, float LowerLimit)
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
float UAnimalMotion::CalcTurnDirection(float InputAngle)
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
void UAnimalMotion::UpdateAnimalRot(float TurnDirectionMultiplier)
{
	GetOwner()->SetActorRotation(GetOwner()->GetActorRotation()
		+ (TurnDirectionMultiplier * FRotator(0.0f, AnimalRotationSpeed, 0.0f)));
}

//Movement getters
FVector UAnimalMotion::GetAnimalToPlayerVector()
{
	return AnimalToPlayerVector;
}
float UAnimalMotion::GetAnimalMovementSpeed()
{
	return AnimalMovementSpeed;
}

//Animal States
bool UAnimalMotion::GetIsTamed()
{
	return IsTamed;
}
bool UAnimalMotion::GetWasJustUntamed()
{
	return WasJustUntamed;
}
bool UAnimalMotion::GetIsAlerted()
{
	return IsAlerted;
}
bool UAnimalMotion::GetIsExhausted()
{
	return IsExhausted;
}
void UAnimalMotion::SetIsTamed(bool InputBool)
{
	IsTamed = InputBool;
}
void UAnimalMotion::SetWasJustUntamed(bool InputBool)
{
	WasJustUntamed = InputBool;
}
void UAnimalMotion::SetIsAlerted(bool InputBool)
{
	IsAlerted = InputBool;
}
void UAnimalMotion::SetIsExhausted(bool InputBool)
{
	IsExhausted = InputBool;
}

//Fleeing
float UAnimalMotion::GetTargetFleeDistance()
{
	return TargetFleeDistance;
}
float UAnimalMotion::GetAbandonHuntDistance()
{
	return AbandonHuntDistance;
}
float UAnimalMotion::GetExhaustion()
{
	return Exhaustion;
}
float UAnimalMotion::GetExhaustionIncrSpeed()
{
	return ExhaustionIncrSpeed;
}
float UAnimalMotion::GetExhaustionDecrSpeed()
{
	return ExhaustionDecrSpeed;
}
float UAnimalMotion::GetMaxExhaustion()
{
	return MaxExhaustion;
}
void UAnimalMotion::SetExhaustion(int InputInt)
{
	Exhaustion = InputInt;
}
void UAnimalMotion::IncrementExhaustion()
{
	Exhaustion += ExhaustionIncrSpeed;
}
void UAnimalMotion::DecrementExhaustion()
{
	Exhaustion -= ExhaustionDecrSpeed;
}


