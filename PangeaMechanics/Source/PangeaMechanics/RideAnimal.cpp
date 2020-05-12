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

	SaveInitialStates(); //Only called once
	
	if (!IsFlyingOn)
	{
		AnimalMotion->SetIsGrounded(true);
	}

	//Riding
	UpdateIsRiding();

	//Flying
	if (IsFlyingOn && AnimalMotion->GetIsRiding())
	{
		UpdateIsGrounded();
		FlyingSpecificMotion();
	}

	//Rider Position and Rotation Update
	UpdateRiderPosAndRot();
}

void URideAnimal::SaveInitialStates()
{
	if (!HasSavedPlayerPawn)
	{
		PlayerPawn = GetWorld()->GetFirstPlayerController()->GetPawn();
		PlayerPawnInitialForwardVector = PlayerPawn->GetActorForwardVector();
		PlayerPawnInitialPos = PlayerPawn->GetActorLocation();
		PlayerCharacter = GetWorld()->GetFirstPlayerController()->GetCharacter();
		//InitialMovementMode = GetOwner()->FindComponentByClass<EMovementMode>();
		HasSavedPlayerPawn = true;
	}
}
void URideAnimal::UpdateIsRiding()
{
	if (AnimalMotion->GetIsTamed() && !AnimalMotion->GetIsRiding())
	{
		if (RidingRegionTriggerBox->GetIsInAnimalTriggerBox())
		{
			if (GetWorld()->GetFirstPlayerController()->WasInputKeyJustPressed("R"))
			{
				AnimalMotion->SetIsRiding(true);

				SetupMountState();

				if (IsFlyingOn)
				{
					GetOwner()->FindComponentByClass<UCharacterMovementComponent>()->GravityScale = 0.0f;
					GetOwner()->FindComponentByClass<UCharacterMovementComponent>()->SetMovementMode(MOVE_Flying);
				}
			}
		}
	}
	else if (AnimalMotion->GetIsTamed() && AnimalMotion->GetIsRiding() && AnimalMotion->GetIsGrounded())
	{
		if (GetWorld()->GetFirstPlayerController()->WasInputKeyJustPressed("R"))
		{
			AnimalMotion->SetIsRiding(false);

			SetupDismountState();

			if (IsFlyingOn)
			{
				GetOwner()->FindComponentByClass<UCharacterMovementComponent>()->GravityScale = 1.0f;
				GetOwner()->FindComponentByClass<UCharacterMovementComponent>()->SetMovementMode(MOVE_Walking);
			}
		}
	}
}
void URideAnimal::SetupMountState()
{
	PlayerCharacter->FindComponentByClass<UCharacterMovementComponent>()->GravityScale = 0.0f;
	PlayerCharacter->SetActorEnableCollision(false);
	GetWorld()->GetFirstPlayerController()->UnPossess();
	GetWorld()->GetFirstPlayerController()->Possess(Cast<APawn>(GetOwner()));

	//Mounting Player Animation
	PlayerCharacter->GetMesh()->PlayAnimation(Cast<UAnimationAsset>(RidingAnimation), true);

	//Mounting Animal Animation
	//Cast<ACharacter>(GetOwner())->GetMesh()->PlayAnimation(StandingAnimation, true);

	SetInitialRiderRotation();
}
void URideAnimal::SetInitialRiderRotation()
{
	float RotationAngle = AnimalMotion->CalcAngleFromDotProduct(GetOwner()->GetActorForwardVector(), PlayerPawn->GetActorForwardVector());
	RotationAngle = AnimalMotion->MakeAnglePosOrNeg(GetOwner()->GetActorForwardVector(), RotationAngle, "Y");
	RotationAngle = AnimalMotion->KeepWithinAngleRange(RotationAngle, 180.0f, -180.0f);
	FRotator MountedPlayerRot = FRotator(0.0f, PlayerPawn->GetActorRotation().Yaw - RotationAngle, 0.0f);
	PlayerPawn->SetActorRotation(MountedPlayerRot);
}
void URideAnimal::SetupDismountState()
{
	PlayerCharacter->FindComponentByClass<UCharacterMovementComponent>()->GravityScale = 1.0f;
	PlayerCharacter->SetActorEnableCollision(true);
	GetWorld()->GetFirstPlayerController()->UnPossess();
	GetWorld()->GetFirstPlayerController()->Possess(PlayerPawn);

	//Dismounting Player Animation
	PlayerCharacter->GetMesh()->PlayAnimation(Cast<UAnimationAsset>(StandingAnimation), true);

	//Dismounting Animal Animation
	//Cast<ACharacter>(GetOwner())->GetMesh()->PlayAnimation(StandingAnimation, true);

	SetDismountedPositions();
}
void URideAnimal::SetDismountedPositions()
{
	//Set Dismounting Animal Position (included for when the player dismounts mid-jump).
	FVector UnmountedAnimalPos = FVector(
		GetOwner()->GetActorLocation().X,
		GetOwner()->GetActorLocation().Y,
		PlayerPawnInitialPos.Z);
	GetOwner()->SetActorLocation(UnmountedAnimalPos);

	//Set Dismounting Player Position
	FVector DismountedPlayerPos = FVector(
		GetOwner()->GetActorLocation().X,
		GetOwner()->GetActorLocation().Y,
		GetOwner()->GetActorLocation().Z);
	DismountedPlayerPos += GetOwner()->GetActorRightVector() * 100.0f;
	PlayerPawn->SetActorLocation(DismountedPlayerPos);
}
void URideAnimal::UpdateIsGrounded()
{
	if (GetOwner()->GetActorLocation().Z < MaximumFlyingDismountHeight)
	{
		AnimalMotion->SetIsGrounded(true);
	}
	else
	{
		AnimalMotion->SetIsGrounded(false);
	}
}
void URideAnimal::FlyingSpecificMotion()
{
	if (GetWorld()->GetFirstPlayerController()->IsInputKeyDown("up") ||
		GetWorld()->GetFirstPlayerController()->IsInputKeyDown("down"))
	{
		GetOwner()->SetActorLocation(GetOwner()->GetActorLocation() + (AnimalFlyingSpeed * GetOwner()->GetActorForwardVector()));
	}
	if (GetWorld()->GetFirstPlayerController()->IsInputKeyDown("F"))
	{
		GetOwner()->SetActorLocation(GetOwner()->GetActorLocation() + FVector(0.0f, 0.0f, 5.0f));
	}
	if (GetWorld()->GetFirstPlayerController()->IsInputKeyDown("V"))
	{
		GetOwner()->SetActorLocation(GetOwner()->GetActorLocation() - FVector(0.0f, 0.0f, 5.0f));
	}
}
void URideAnimal::UpdateRiderPosAndRot()
{
	if (AnimalMotion->GetIsRiding())
	{
		//Update rider position (so always above animal)
		FVector MountedPlayerPos = FVector(
			GetOwner()->GetActorLocation().X,
			GetOwner()->GetActorLocation().Y,
			GetOwner()->GetActorLocation().Z + 130.0f);
		MountedPlayerPos -= GetOwner()->GetActorForwardVector() * 20.0f;
		PlayerPawn->SetActorLocation(MountedPlayerPos);

		//Update rider rotation (so always facing forwards on animal)
		float RotationAngle = AnimalMotion->CalcAngleFromDotProduct(GetOwner()->GetActorForwardVector(), PlayerPawnInitialForwardVector);
		RotationAngle = AnimalMotion->MakeAnglePosOrNeg(GetOwner()->GetActorForwardVector(), RotationAngle, "Y");
		RotationAngle = AnimalMotion->KeepWithinAngleRange(RotationAngle, 180.0f, -180.0f);
		FRotator MountedPlayerRot = FRotator(0.0f, RotationAngle, 0.0f);
		PlayerPawn->SetActorRotation(MountedPlayerRot);
	}
}

