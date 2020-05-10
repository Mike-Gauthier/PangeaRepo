// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Item.h"
#include "WeaponItem.generated.h"

/**
 * 
 */
UCLASS()
class PANGEAMECHANICS_API AWeaponItem : public AItem
{
	GENERATED_BODY()


public:

	UPROPERTY(EditAnywhere, Category = "Item Stats")
		int damage;

	void Info();

	void Use();
	
};
