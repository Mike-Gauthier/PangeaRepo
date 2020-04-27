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

	AnimalMotion = GetOwner()->FindComponentByClass<UAnimalMotion>();
}

// Called every frame
void UTameAnimal::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	//NOTE Maybe add a fix to prevent the animal trying to constantly rotate,
	//if the player jumps on top of it and stands in its back half

	UpdateIsTamed();

	if (AnimalMotion->GetIsTamed())
	{
		//Tamed Movement
		AnimalMotion->TamedAnimalMovement();

		//Tamed Rotation
		if(!AnimalBodyExtentTriggerBox->GetIsInAnimalTriggerBox())
		{
			AnimalMotion->TamedAnimalRotation();
		}
	}
}

//Tamed state
void UTameAnimal::UpdateIsTamed()
{
	if (GetWorld()->GetFirstPlayerController()->WasInputKeyJustPressed("T"))
	{
		if ((!AnimalMotion->GetIsTamed() && !AnimalMotion->GetIsAlerted() && !AnimalMotion->GetIsExhausted()) ||
			(!AnimalMotion->GetIsTamed() && AnimalMotion->GetIsAlerted() && AnimalMotion->GetIsExhausted()))
		{
			if (TamingRegionTriggerBox->GetIsInAnimalTriggerBox())
			{
				AnimalMotion->SetIsTamed(true);
			}
		}
	}


}
