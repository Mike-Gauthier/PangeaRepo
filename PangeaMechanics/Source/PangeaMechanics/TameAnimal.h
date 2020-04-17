// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/TriggerBox.h"
#include "Engine/World.h"
#include "GameFramework/PlayerController.h"
#include "Components/ActorComponent.h"
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

	float AnimalSpeed = 8.0f;
	float TargetAnimalPlayerDistance = 250.0f;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	void UpdateAnimalPos(FVector SignedAdjustVec);
	void CalcAnimalAxisPos(float PlayerAnimalDistance, FVector SignlessAdjustVec);
	
	UPROPERTY(EditAnywhere)
	AAnimalTriggerBox* AnimalTriggerBox;

};
