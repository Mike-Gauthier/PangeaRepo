// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/KismetMathLibrary.h"
#include "Components/ActorComponent.h"
#include "AnimalMotion.h"
#include "AnimalSight.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PANGEAMECHANICS_API UAnimalSight : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UAnimalSight();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

private:
	float PlayerAngleFromSightCentre;
	float HalfSightWidthAngle = 30.0f;
	float AnimalSightReach = 500.0f;

	UAnimalMotion* AnimalMotion;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	
	//General
	float CalcPlayerAngleFromSightCentre();

	//Behaviour separated by animal alertness state
	void SetStatesToTamedSetup();
	void IfJustUntamed();
	void IfInUnawareState();
	void IfInAlertedState();
	void IfInExhaustedState();
};
