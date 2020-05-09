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

	//Mostly a redundant variable, planning on deleting.
	UPROPERTY(EditAnywhere, Category = "Pet Information")
		APangeaMechanicsCharacter* MyOwner;

	//AActor pointer to the player that 'owns' this creature.
	UPROPERTY(EditAnywhere, Category = "Pet Information")
		AActor* OwnerActor;
	
public:
	//A blueprint event that signals the creature is now too far from it's owner.
	UFUNCTION(BlueprintImplementableEvent)
	void onOwnerMoveOutOfRange();

	//A blueprint function that checks distance to owner, and if greater than the owners 'InfluenceRadius' triggers the onOwnerMoveOutOfRange event.
	UFUNCTION(BlueprintCallable, Category = "Custom Navigation")
		void CheckIfOwnerIsNear();

	//Simple blueprint getter that returns the AActor* for MyOwner.
	UFUNCTION(BlueprintGetter, Category = "Custom Navigation")
	AActor* GetMyOwner();

	// TODO: Check to see if redundant with CheckIfOwnerIsNear(), very possible to neated up.
	UFUNCTION(BlueprintGetter, Category = "Custom Navigation")
		float GetDistanceToOwner();

	//Grabs an FVector of a random point in a circle around the player with a radius equal to the owner's 'Influence Radius'.
	UFUNCTION(BlueprintGetter, Category = "Custom Navigation")
		FVector GetRandomPointNearOwner();

	//Utility function left over from testing, resulting ARecastNavMesh* has many powerful tools that may be helpful later so I left it in for now.
	//Grabs a reference to a pointer that allows us to read the NavMesh at runtime.
	const ARecastNavMesh* GetRecastNavMesh();

};
