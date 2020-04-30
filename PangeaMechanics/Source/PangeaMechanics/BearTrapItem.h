// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Item.h"
#include "BearTrapItem.generated.h"

UCLASS()
class PANGEAMECHANICS_API ABearTrapItem : public AItem
{
	GENERATED_BODY()


public:

	UPROPERTY(EditAnywhere)
	bool active = false;

	void Use();
	
};
