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
	if (FVector::Dist(GetActorLocation(), MyOwner->GetActorLocation()) > MyOwner->InfluenceRadius) 
	{
		onOwnerMoveOutOfRange();
	}
}

const ARecastNavMesh* ABasicHuman::GetRecastNavMesh()
{
	auto NavSystem = GetWorld()->GetNavigationSystem();

	if (!NavSystem) { return NULL; }

	auto NavData = NavSystem->GetMainNavData();

	if (!NavData) { return NULL; }

	const ARecastNavMesh* NavMesh = Cast<ARecastNavMesh>(NavData);

	if (!NavMesh) { return NULL; }

	return NavMesh;
}

AActor* ABasicHuman::GetMyOwner()
{
	return Cast<AActor>(MyOwner);
}

float ABasicHuman::GetDistanceToOwner()
{
	FVector myLoc = GetActorLocation();
	FVector ownerLoc = MyOwner->GetActorLocation();

	return FVector::Dist(ownerLoc, myLoc);;
}

FVector ABasicHuman::GetRandomPointNearOwner()
{
	FVector ownerLoc = MyOwner->GetActorLocation();

	const ARecastNavMesh* navMesh = GetRecastNavMesh();

	FNavLocation targetLoc;

	navMesh->GetRandomReachablePointInRadius(ownerLoc, MyOwner->InfluenceRadius, targetLoc);

	FVector finalLoc = ownerLoc;

	FVector2D locationMod = FMath::RandPointInCircle(250);
	
	finalLoc.X += locationMod.X;
	finalLoc.Y += locationMod.Y;
	
	finalLoc.Z = MyOwner->GetActorLocation().Z;

	return finalLoc;
}