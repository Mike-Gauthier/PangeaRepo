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
}

// Called every frame
void UTameAnimal::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if (AnimalTriggerBox->GetIsInAnimalTriggerBox())
	{
		UE_LOG(LogTemp, Log, TEXT("INSIDE TRIGGER BOX: true"));
	}
	else
	{
		UE_LOG(LogTemp, Log, TEXT("INSIDE TRIGGER BOX: false"));
	}

	if (AnimalTriggerBox->GetIsInAnimalTriggerBox()
		&& GetWorld()->GetFirstPlayerController()->WasInputKeyJustPressed("T"))
	{
		IsTamed = !IsTamed;
	}

	if (IsTamed)
	{
		FVector CurrPlayerPos = GetWorld()->GetFirstPlayerController()->GetPawn()->GetActorLocation();
		FVector CurrAnimalPos = GetOwner()->GetActorLocation();
		CalcAnimalAxisPos(CurrAnimalPos.X - CurrPlayerPos.X, FVector(AnimalSpeed, 0.0f, 0.0f));
		CalcAnimalAxisPos(CurrAnimalPos.Y - CurrPlayerPos.Y, FVector(0.0f, AnimalSpeed, 0.0f));
	}
}

void UTameAnimal::CalcAnimalAxisPos(float PlayerAnimalDistance, FVector SignlessAdjustVec)
{
	if (FMath::Abs(PlayerAnimalDistance) > TargetAnimalPlayerDistance)
	{
		if (PlayerAnimalDistance > 0)
		{
			UpdateAnimalPos(-SignlessAdjustVec);
		}
		else
		{
			UpdateAnimalPos(SignlessAdjustVec);
		}
	}
}

void UTameAnimal::UpdateAnimalPos(FVector SignedAdjustVec)
{
	GetOwner()->SetActorLocation(GetOwner()->GetActorLocation() + SignedAdjustVec);
}
