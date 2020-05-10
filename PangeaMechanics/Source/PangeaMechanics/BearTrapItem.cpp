#include "BearTrapItem.h"
#include "Engine.h"

void ABearTrapItem::Use()
{
	FVector locToSpawn = MyPlayerController->GetActorLocation() + MyPlayerController->GetActorForwardVector() * 150.f;
	locToSpawn.Z = 20;
	// Puts Bear Trap on the floor and sets it to active
	DisableActor(false);
	SetActorLocation(locToSpawn);
	//SM_TBox->SetSimulatePhysics(false);
	active = true;
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("Bear Trap set to active")));
}