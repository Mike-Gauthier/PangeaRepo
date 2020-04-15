// Fill out your copyright notice in the Description page of Project Settings.


#include "BehaviorTests.h"

// Sets default values
ABehaviorTests::ABehaviorTests()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABehaviorTests::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABehaviorTests::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ABehaviorTests::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

