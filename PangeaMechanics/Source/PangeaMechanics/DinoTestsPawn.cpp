// Fill out your copyright notice in the Description page of Project Settings.


#include "DinoTestsPawn.h"

// Sets default values
ADinoTestsPawn::ADinoTestsPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ADinoTestsPawn::BeginPlay()
{
	Super::BeginPlay();
	health = 100.0f;
}

// Called every frame
void ADinoTestsPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	health -= 1 * DeltaTime;

	if (health <= 0) {
		Destroy;
	}
}

// Called to bind functionality to input
void ADinoTestsPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

