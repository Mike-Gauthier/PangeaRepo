// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "PangeaMechanics.h"
#include "MySaveGame.generated.h"

/**
 * 
 */
UCLASS()
class PANGEAMECHANICS_API UMySaveGame : public USaveGame
{
	GENERATED_BODY()

public:
    // Properties to save
    UPROPERTY(VisibleAnywhere, Category = Basic)
    FVector playerPosition;
    UPROPERTY(VisibleAnywhere, Category = Basic)
    FRotator playerRotation;

    // Default slot name and index
    UPROPERTY(VisibleAnywhere, Category = Basic)
    FString str_saveSlot;
    UPROPERTY(VisibleAnywhere, Category = Basic)
    uint32 int_userIndex;

    UMySaveGame();

    void finishedResponse(const FString &, const int32, bool);
};
