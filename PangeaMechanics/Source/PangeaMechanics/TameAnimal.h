// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/KismetMathLibrary.h"
#include "Engine/TriggerBox.h"
#include "Engine/World.h"
#include "GameFramework/PlayerController.h"
#include "Components/ActorComponent.h"
#include "Components/SceneComponent.h"
#include "AnimalTriggerBox.h"
#include "TameAnimal.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PANGEAMECHANICS_API UTameAnimal : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UTameAnimal();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

private:
	bool IsTamed = false;

	float AnimalMovementSpeed = 7.0f;
	float AnimalRotationSpeed = 4.0f;
	float TargetAnimalPlayerDistance = 250.0f;
	float AnimalRotationLeniency = 5.0f;

	FVector AnimalToPlayerVector;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	//General TameAnimal
	void UpdateIsTamed();

	//Movement
	void TamedAnimalMovement();
	void CalcAnimalSingleAxisPos(float AnimalToPlayerAxisDistance, FVector SignlessAdjustVec);
	void CalcFleeingAnimalSingleAxisPos(float AnimalToPlayerAxisDistance, FVector SignlessAdjustVec, float TargetFleeDistance);
	void UpdateAnimalPos(FVector SignedAdjustVec);

	//Rotation
	void AnimalRotation(FString MovementType);
	float RadiansToDegrees(float RadiansInput);
	float CalcAngleFromDotProduct(FVector Input1, FVector Input2);
	float MakeAnglePosOrNeg(FVector InputVector, float InputAngle);
	float KeepWithinAngleRange(float InputAngle, float UpperLimit, float LowerLimit);
	float CalcTurnDirection(float InputAngle);
	void UpdateAnimalRot(float TurnDirectionMultiplier);

	//Getters
	bool GetIsTamed();
	float GetAnimalMovementSpeed();
	FVector GetAnimalToPlayerVector();

	UPROPERTY(EditAnywhere)
	AAnimalTriggerBox* AnimalTriggerBox;
};