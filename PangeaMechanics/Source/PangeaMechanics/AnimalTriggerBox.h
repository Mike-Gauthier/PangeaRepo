// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/TriggerBox.h"
#include "AnimalTriggerBox.generated.h"

/**
 * 
 */
UCLASS()
class PANGEAMECHANICS_API AAnimalTriggerBox : public ATriggerBox
{
	GENERATED_BODY()

public:
	AAnimalTriggerBox();

protected:
	virtual void BeginPlay() override;

private:
	bool IsInAnimalTriggerBox = false;

public:
	UFUNCTION()
	void OnOverlapBegin(class AActor* OverlappedActor, class AActor* OtherActor);

	UFUNCTION()
	void OnOverlapEnd(class AActor* OverlappedActor, class AActor* OtherActor);

	bool GetIsInAnimalTriggerBox();
};
