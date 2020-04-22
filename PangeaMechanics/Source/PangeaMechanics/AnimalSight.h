// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/KismetMathLibrary.h"
#include "Components/ActorComponent.h"
#include "TameAnimal.h"
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
	bool IsAlerted = false;

	float HalfSightWidthAngle = 30.0f;
	float TargetFleeDistance = 800.0f;

	UTameAnimal* TameAnimal;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
};
