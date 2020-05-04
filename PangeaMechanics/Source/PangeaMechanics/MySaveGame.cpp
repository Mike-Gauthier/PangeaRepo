// Fill out your copyright notice in the Description page of Project Settings.


#include "MySaveGame.h"



UMySaveGame::UMySaveGame()
{
    // Default slot name and index
    str_saveSlot = TEXT("TestSlot");
    int_userIndex = 0;
}



void UMySaveGame::finishedResponse(const FString & inSlotName, const int32 inUserIndex, bool isSuccess)
{
    if (isSuccess)
    {
        FString debugStr = FString(TEXT("Saving finished :D"));
        GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Purple, debugStr);
        UE_LOG(LogClass, Log, TEXT("%s"), *debugStr);
    }
    else
    {
        FString debugStr = FString(TEXT("WARNING: Saving failed :("));
        GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Purple, debugStr);
        UE_LOG(LogClass, Log, TEXT("%s"), *debugStr);
    }
}

