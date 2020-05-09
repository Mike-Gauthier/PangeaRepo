// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AnimalMotion.h"
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
	UAnimalMotion* AnimalMotion;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	//Tamed state
	void UpdateIsTamed();

	UPROPERTY(EditAnywhere)
	AAnimalTriggerBox* AnimalBodyExtentTriggerBox;

	UPROPERTY(EditAnywhere)
	AAnimalTriggerBox* TamingRegionTriggerBox;
};
