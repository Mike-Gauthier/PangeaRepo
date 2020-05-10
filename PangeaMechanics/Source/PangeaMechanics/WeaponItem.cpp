#include "WeaponItem.h"
#include "Engine.h"

void AWeaponItem::Use()
{

}

void AWeaponItem::Info()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("Weight: %s"), *FString::FromInt(weight)));
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("Damage: %s"), *FString::FromInt(damage)));
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("Value: %s"), *FString::FromInt(value)));
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("Description: %s"), *description));
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("%s Info:"), *name));
}