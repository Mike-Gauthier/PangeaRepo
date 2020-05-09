// Fill out your copyright notice in the Description page of Project Settings.


#include "RideAnimal.h"

// Sets default values for this component's properties
URideAnimal::URideAnimal()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	ConstructorHelpers::FObjectFinder<UAnimSequence> StandingAnim(TEXT("/Game/Characters/Male/stand_anim"));
	StandingAnimation = StandingAnim.Object;
	ConstructorHelpers::FObjectFinder<UAnimSequence> RidingAnim(TEXT("/Game/Characters/Male/ride_anim"));
	RidingAnimation = RidingAnim.Object;
}


// Called when the game starts
void URideAnimal::BeginPlay()
{
	Super::BeginPlay();

	AnimalMotion = GetOwner()->FindComponentByClass<UAnimalMotion>();
}


// Called every frame
void URideAnimal::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	
	if (!HasSavedPlayerPawn)
	{
		PlayerPawn = GetWorld()->GetFirstPlayerController()->GetPawn();
		PlayerPawnInitialForwardVector = PlayerPawn->GetActorForwardVector();
		PlayerPawnInitialPos = PlayerPawn->GetActorLocation();
		PlayerCharacter = GetWorld()->GetFirstPlayerController()->GetCharacter();
		HasSavedPlayerPawn = true;
	}

	if (AnimalMotion->GetIsTamed() && !AnimalMotion->GetIsRiding())
	{
		if(RidingRegionTriggerBox->GetIsInAnimalTriggerBox())
		{
			if (GetWorld()->GetFirstPlayerController()->WasInputKeyJustPressed("R"))
			{
				FVector AnimalPosTemp = GetOwner()->GetActorLocation();

				AnimalMotion->SetIsRiding(true);
				PlayerCharacter->FindComponentByClass<UCharacterMovementComponent>()->GravityScale = 0.0f;
				PlayerCharacter->SetActorEnableCollision(false);
				GetWorld()->GetFirstPlayerController()->UnPossess();
				GetWorld()->GetFirstPlayerController()->Possess(Cast<APawn>(GetOwner()));
				
				//Mounting Player Animation
				PlayerCharacter->GetMesh()->PlayAnimation(Cast<UAnimationAsset>(RidingAnimation), true);
				
				//Mounting Animal Animation
				//Cast<ACharacter>(GetOwner())->GetMesh()->PlayAnimation(StandingAnimation, true);

				//Initially set the player facing direction to be that of the animal, when mounting
				float RotationAngle = AnimalMotion->CalcAngleFromDotProduct(GetOwner()->GetActorForwardVector(), PlayerPawn->GetActorForwardVector());
				RotationAngle = AnimalMotion->MakeAnglePosOrNeg(GetOwner()->GetActorForwardVector(), RotationAngle, "Y");
				RotationAngle = AnimalMotion->KeepWithinAngleRange(RotationAngle, 180.0f, -180.0f);
				FRotator MountedPlayerRot = FRotator(0.0f, PlayerPawn->GetActorRotation().Yaw - RotationAngle, 0.0f);
				PlayerPawn->SetActorRotation(MountedPlayerRot);
			}
		}
	}
	else if (AnimalMotion->GetIsTamed() && AnimalMotion->GetIsRiding())
	{
		if (GetWorld()->GetFirstPlayerController()->WasInputKeyJustPressed("R"))
		{
			FVector AnimalPosTemp = GetOwner()->GetActorLocation();

			AnimalMotion->SetIsRiding(false);
			PlayerCharacter->FindComponentByClass<UCharacterMovementComponent>()->GravityScale = 1.0f;
			PlayerCharacter->SetActorEnableCollision(true);
			GetWorld()->GetFirstPlayerController()->UnPossess();
			GetWorld()->GetFirstPlayerController()->Possess(PlayerPawn);
			
			//Dismounting Player Animation
			PlayerCharacter->GetMesh()->PlayAnimation(Cast<UAnimationAsset>(StandingAnimation), true);
			
			//Dismounting Animal Animation
			//Cast<ACharacter>(GetOwner())->GetMesh()->PlayAnimation(StandingAnimation, true);
			
			//Set Dismounting Player Position
			FVector DismountedPlayerPos = FVector(AnimalPosTemp.X, AnimalPosTemp.Y, AnimalPosTemp.Z);
			DismountedPlayerPos += GetOwner()->GetActorRightVector() * 100.0f;
			PlayerPawn->SetActorLocation(DismountedPlayerPos);

			//Set Dismounting Animal Position
			FVector UnmountedAnimalPos = FVector(AnimalPosTemp.X, AnimalPosTemp.Y, PlayerPawnInitialPos.Z);
			GetOwner()->SetActorLocation(UnmountedAnimalPos);
		}
	}

	if (AnimalMotion->GetIsRiding())
	{
		FVector AnimalPosTemp = GetOwner()->GetActorLocation();

		//Update Player facing direction, so player always faces same direction as the Animal
		FVector MountedPlayerPos = FVector(AnimalPosTemp.X, AnimalPosTemp.Y, AnimalPosTemp.Z + 130.0f);
		MountedPlayerPos -= GetOwner()->GetActorForwardVector() * 20.0f;
		PlayerPawn->SetActorLocation(MountedPlayerPos);
		float RotationAngle = AnimalMotion->CalcAngleFromDotProduct(GetOwner()->GetActorForwardVector(), PlayerPawnInitialForwardVector);
		RotationAngle = AnimalMotion->MakeAnglePosOrNeg(GetOwner()->GetActorForwardVector(), RotationAngle, "Y");
		RotationAngle = AnimalMotion->KeepWithinAngleRange(RotationAngle, 180.0f, -180.0f);
		FRotator MountedPlayerRot = FRotator(0.0f, RotationAngle, 0.0f);
		PlayerPawn->SetActorRotation(MountedPlayerRot);
	}
}

