// Fill out your copyright notice in the Description page of Project Settings.


#include "BasicHuman.h"
#include "Engine/World.h"
#include "Runtime/NavigationSystem/Public/NavigationSystem.h"
#include "NavMesh/RecastNavMesh.h"
#include "NavigationData.h"
#include "Misc/Timespan.h"
#include "AIController.h"
#include "NavigationPath.h"
#include "Math/UnrealMathUtility.h"

void ABasicHuman::CheckIfOwnerIsNear()
{
	// if (The distance from me to my owner is more than my owners InfluenceRadius)
	if (FVector::Dist(GetActorLocation(), MyOwner->GetActorLocation()) > MyOwner->InfluenceRadius) 
	{
		//Trigger the Blueprint Event
		onOwnerMoveOutOfRange();
	}
}

const ARecastNavMesh* ABasicHuman::GetRecastNavMesh()
{
	//Grab the world Navigation System
	auto NavSystem = GetWorld()->GetNavigationSystem();

	if (!NavSystem) { return NULL; }

	//From the Navigation System, grab the Main Navigation Data
	auto NavData = NavSystem->GetMainNavData();

	if (!NavData) { return NULL; }

	//Cast the Navigation Data into a pointer that can read the NavMesh at runtime
	const ARecastNavMesh* NavMesh = Cast<ARecastNavMesh>(NavData);

	if (!NavMesh) { return NULL; }

	//Return the Map to Atlantis
	return NavMesh;
}

//Blueprint getter for MyOwner
AActor* ABasicHuman::GetMyOwner()
{
	return Cast<AActor>(MyOwner);
}

//Blueprint Getter for Distance to MyOwner
float ABasicHuman::GetDistanceToOwner()
{
	FVector myLoc = GetActorLocation();
	FVector ownerLoc = MyOwner->GetActorLocation();

	return FVector::Dist(ownerLoc, myLoc);;

	// TODO: Add if statement to check if owner is too far, nullifying CheckIfOwnerIsNear()
}

FVector ABasicHuman::GetRandomPointNearOwner()
{
	//Grab owner's location
	FVector ownerLoc = MyOwner->GetActorLocation();

	//Store it in a FVector that will be affected.
	FVector finalLoc = ownerLoc;

	//Grab a random point from within a circle with radius equal to MyOwner's Influence Radius
	FVector2D locationMod = FMath::RandPointInCircle(MyOwner->InfluenceRadius);
	
	//Modifiers are added to the Owner's location to ensure that the center of the circle is the Owner AActor
	finalLoc.X += locationMod.X;
	finalLoc.Y += locationMod.Y;
	
	// Set the z component of the finalLoc to the Owner's Z-Axis to ensure no clipping through floors.
	finalLoc.Z = MyOwner->GetActorLocation().Z;

	//Return the finalLoc with modifiers added.
	return finalLoc;
}