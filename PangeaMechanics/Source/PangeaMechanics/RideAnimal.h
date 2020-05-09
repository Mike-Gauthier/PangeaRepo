// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/Character.h"
//#include "Animation/AnimSequence.h"
#include "Components/SkeletalMeshComponent.h"
#include "AnimalMotion.h"
#include "AnimalTriggerBox.h"
#include "RideAnimal.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PANGEAMECHANICS_API URideAnimal : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	URideAnimal();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

private:
	bool HasSavedPlayerPawn = false;
	APawn* PlayerPawn;
	ACharacter* PlayerCharacter;
	FVector PlayerPawnInitialPos;
	FVector PlayerPawnInitialForwardVector;

	UAnimSequence* StandingAnimation;
	UAnimSequence* RidingAnimation;

	UAnimalMotion* AnimalMotion;

	UPROPERTY(EditAnywhere)
	AAnimalTriggerBox* RidingRegionTriggerBox;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
};
