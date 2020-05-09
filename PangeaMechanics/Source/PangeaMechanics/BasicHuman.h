// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PangeaMechanicsCharacter.h"
#include "NavigationSystemTypes.h"
#include "BasicHuman.generated.h"

class ANavigationData;
class ARecastNavMesh;
class UNavigationSystem;
class UWorld;

/**
 * 
 */
UCLASS()
class PANGEAMECHANICS_API ABasicHuman : public APangeaMechanicsCharacter
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, Category = "Pet Information")
		APangeaMechanicsCharacter* MyOwner;

	UPROPERTY(EditAnywhere, Category = "Pet Information")
		AActor* OwnerActor;
	
public:

	UFUNCTION(BlueprintImplementableEvent)
	void onOwnerMoveOutOfRange();

	UFUNCTION(BlueprintCallable, Category = "Custom Navigation")
		void CheckIfOwnerIsNear();

	UFUNCTION(BlueprintGetter, Category = "Custom Navigation")
	AActor* GetMyOwner();

	UFUNCTION(BlueprintGetter, Category = "Custom Navigation")
		float GetDistanceToOwner();

	UFUNCTION(BlueprintGetter, Category = "Custom Navigation")
		FVector GetRandomPointNearOwner();

	const ARecastNavMesh* GetRecastNavMesh();

};
