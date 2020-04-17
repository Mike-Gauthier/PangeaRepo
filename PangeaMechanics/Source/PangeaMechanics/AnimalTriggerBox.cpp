// Fill out your copyright notice in the Description page of Project Settings.


#include "AnimalTriggerBox.h"

AAnimalTriggerBox::AAnimalTriggerBox()
{
	OnActorBeginOverlap.AddDynamic(this, &AAnimalTriggerBox::OnOverlapBegin);
	OnActorEndOverlap.AddDynamic(this, &AAnimalTriggerBox::OnOverlapEnd);
}

void AAnimalTriggerBox::BeginPlay()
{
	Super::BeginPlay();
}

void AAnimalTriggerBox::OnOverlapBegin(class AActor* OverlappedActor, class AActor* OtherActor)
{
	if (OtherActor && (OtherActor != this))
	{
		IsInAnimalTriggerBox = true;
	}
}

void AAnimalTriggerBox::OnOverlapEnd(class AActor* OverlappedActor, class AActor* OtherActor)
{
	if (OtherActor && (OtherActor != this))
	{
		IsInAnimalTriggerBox = false;
	}
}

bool AAnimalTriggerBox::GetIsInAnimalTriggerBox()
{
	return IsInAnimalTriggerBox;
}