// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/KismetMathLibrary.h"
#include "Engine/World.h"
#include "GameFramework/PlayerController.h"
#include "Components/ActorComponent.h"
#include "AnimalMotion.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PANGEAMECHANICS_API UAnimalMotion : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UAnimalMotion();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

private:
	//General
	FVector AnimalToPlayerVector;

	//Movement
	float AnimalMovementSpeed = 8.0f;
	float TargetAnimalPlayerDistance = 250.0f;
	
	//Rotation
	float AnimalRotationSpeed = 4.0f;
	float AnimalRotationLeniency = 5.0f;
	bool IsFinishedTurning = false;

	//Animal States
	bool IsTamed = false;
	bool IsAlerted = false;
	bool IsExhausted = false;

	//Fleeing
	float TargetFleeDistance = 2000.0f;
	float AbandonHuntDistance = 4000.0f;
	float Exhaustion = 0.0f;
	float ExhaustionIncrSpeed = 3.0f;
	float ExhaustionDecrSpeed = 2.0f;
	float MaxExhaustion = 1000.0f;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	//General
	void CalculateAnimalToPlayerVector();

	//Movement
	void TamedAnimalMovement();
	void FleeingAnimalMovement();

	//Functions used to calculate Movement
	void CalcTamedAnimalSingleAxisPos(float AnimalToPlayerAxisDistance, FVector SignlessAdjustVec);
	void CalcFleeingAnimalSingleAxisPos(float AnimalToPlayerAxisDistance, FVector SignlessAdjustVec);
	void UpdateAnimalPos(FVector SignedAdjustVec);

	//Rotation
	void TamedAnimalRotation();
	void FleeingAnimalRotation();
	bool GetIsFinishedTurning();

	//Functions used to calculate Rotation
	void AnimalRotation(float DirectionMultiplier);
	float RadiansToDegrees(float RadiansInput);
	float CalcAngleFromDotProduct(FVector Input1, FVector Input2);
	float MakeAnglePosOrNeg(FVector InputVector, float InputAngle);
	float KeepWithinAngleRange(float InputAngle, float UpperLimit, float LowerLimit);
	float CalcTurnDirection(float InputAngle);
	void UpdateAnimalRot(float TurnDirectionMultiplier);

	//Movement getters
	FVector GetAnimalToPlayerVector();
	float GetAnimalMovementSpeed();

	//Animal States
	bool GetIsTamed();
	bool GetIsAlerted();
	bool GetIsExhausted();
	void SetIsTamed(bool InputBool);
	void SetIsAlerted(bool InputBool);
	void SetIsExhausted(bool InputBool);

	//Fleeing
	float GetTargetFleeDistance();
	float GetAbandonHuntDistance();
	float GetExhaustion();
	float GetExhaustionIncrSpeed();
	float GetExhaustionDecrSpeed();
	float GetMaxExhaustion();
	void SetExhaustion(int InputInt);
	void IncrementExhaustion();
	void DecrementExhaustion();
};
