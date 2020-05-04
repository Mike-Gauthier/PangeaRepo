// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "PangeaMechanicsCharacter.h"
#include "HeadMountedDisplayFunctionLibrary.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/Controller.h"
#include "GameFramework/SpringArmComponent.h"

//////////////////////////////////////////////////////////////////////////
// APangeaMechanicsCharacter

APangeaMechanicsCharacter::APangeaMechanicsCharacter()
{
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);

	// set our turn rates for input
	BaseTurnRate = 45.f;
	BaseLookUpRate = 45.f;

	// Don't rotate when the controller rotates. Let that just affect the camera.
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	// Configure character movement
	GetCharacterMovement()->bOrientRotationToMovement = true; // Character moves in the direction of input...	
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 540.0f, 0.0f); // ...at this rotation rate
	GetCharacterMovement()->JumpZVelocity = 600.f;
	GetCharacterMovement()->AirControl = 0.2f;

	// Create a camera boom (pulls in towards the player if there is a collision)
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->TargetArmLength = 300.0f; // The camera follows at this distance behind the character	
	CameraBoom->bUsePawnControlRotation = true; // Rotate the arm based on the controller

	// Create a follow camera
	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName); // Attach the camera to the end of the boom and let the boom adjust to match the controller orientation
	FollowCamera->bUsePawnControlRotation = false; // Camera does not rotate relative to arm

	// Note: The skeletal mesh and anim blueprint references on the Mesh component (inherited from Character) 
	// are set in the derived blueprint asset named MyCharacter (to avoid direct content references in C++)
}

//////////////////////////////////////////////////////////////////////////
// Input

void APangeaMechanicsCharacter::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	// Set up gameplay key bindings
	check(PlayerInputComponent);
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);

	PlayerInputComponent->BindAxis("MoveForward", this, &APangeaMechanicsCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &APangeaMechanicsCharacter::MoveRight);

	// We have 2 versions of the rotation bindings to handle different kinds of devices differently
	// "turn" handles devices that provide an absolute delta, such as a mouse.
	// "turnrate" is for devices that we choose to treat as a rate of change, such as an analog joystick
	PlayerInputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis("TurnRate", this, &APangeaMechanicsCharacter::TurnAtRate);
	PlayerInputComponent->BindAxis("LookUp", this, &APawn::AddControllerPitchInput);
	PlayerInputComponent->BindAxis("LookUpRate", this, &APangeaMechanicsCharacter::LookUpAtRate);

	// handle touch devices
	PlayerInputComponent->BindTouch(IE_Pressed, this, &APangeaMechanicsCharacter::TouchStarted);
	PlayerInputComponent->BindTouch(IE_Released, this, &APangeaMechanicsCharacter::TouchStopped);

	// VR headset functionality
	PlayerInputComponent->BindAction("ResetVR", IE_Pressed, this, &APangeaMechanicsCharacter::OnResetVR);

    //////// input for save and load
    // testSave
    PlayerInputComponent->BindAction("TestSave", IE_Pressed, this, &APangeaMechanicsCharacter::testSave);
    PlayerInputComponent->BindAction("TestLoad", IE_Released, this, &APangeaMechanicsCharacter::testLoad);

}


void APangeaMechanicsCharacter::OnResetVR()
{
	UHeadMountedDisplayFunctionLibrary::ResetOrientationAndPosition();
}

void APangeaMechanicsCharacter::TouchStarted(ETouchIndex::Type FingerIndex, FVector Location)
{
		Jump();
}

void APangeaMechanicsCharacter::TouchStopped(ETouchIndex::Type FingerIndex, FVector Location)
{
		StopJumping();
}

void APangeaMechanicsCharacter::TurnAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerYawInput(Rate * BaseTurnRate * GetWorld()->GetDeltaSeconds());
}

void APangeaMechanicsCharacter::LookUpAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerPitchInput(Rate * BaseLookUpRate * GetWorld()->GetDeltaSeconds());
}

void APangeaMechanicsCharacter::MoveForward(float Value)
{
	if ((Controller != NULL) && (Value != 0.0f))
	{
		// find out which way is forward
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		// get forward vector
		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
		AddMovementInput(Direction, Value);
	}
}

void APangeaMechanicsCharacter::MoveRight(float Value)
{
	if ( (Controller != NULL) && (Value != 0.0f) )
	{
		// find out which way is right
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);
	
		// get right vector 
		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
		// add movement in that direction
		AddMovementInput(Direction, Value);
	}
}



void APangeaMechanicsCharacter::testSave()
{
    // gather data
    FVector actorLocation = GetActorLocation();
    FRotator actorRotation = GetActorRotation();


    // begin save, starting with creating save object
    // saving asynchronously
    if (UMySaveGame* SaveGameInstance = Cast<UMySaveGame>(UGameplayStatics::CreateSaveGameObject(UMySaveGame::StaticClass())))
    {
        // Set up the (optional) delegate.
        FAsyncSaveGameToSlotDelegate SavedDelegate;
        SavedDelegate.BindUObject(SaveGameInstance, &UMySaveGame::finishedResponse); // use created save's function

        // Set data on the savegame object.
        SaveGameInstance->playerPosition = actorLocation;
        SaveGameInstance->playerRotation = actorRotation;

        // Start async save process.
        UGameplayStatics::AsyncSaveGameToSlot(SaveGameInstance, SaveGameInstance->str_saveSlot, SaveGameInstance->int_userIndex, SavedDelegate);
    }


    // Debug notification logging
    FString debugStr = FString(TEXT("Save dunzo!"));
    GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Purple, debugStr);
    UE_LOG(LogClass, Log, TEXT("%s"), *debugStr);
}



void APangeaMechanicsCharacter::testLoad()
{
    // Debug notification logging
    FString debugStr = FString(TEXT("Loading data...."));
    UE_LOG(LogClass, Log, TEXT("%s"), *debugStr);
    GEngine->AddOnScreenDebugMessage(15, 5.f, FColor::Purple, debugStr);


    // load game - use "selected" slot name and index
    // just using defaults
    FString str_saveSlot = TEXT("TestSlot");
    uint32 int_userIndex = 0;

    if (UMySaveGame * LoadedGame = Cast<UMySaveGame>(UGameplayStatics::LoadGameFromSlot(str_saveSlot, int_userIndex)))
    {
        // Load successful

        // Debug notification logging
        FString resultStr = FString(TEXT("Load start successful :D"));
        resultStr += FString(TEXT("\n\t")) + LoadedGame->playerPosition.ToString();
        resultStr += FString(TEXT("\n\t")) + LoadedGame->playerRotation.ToString();
        UE_LOG(LogClass, Log, TEXT("%s"), *resultStr);
        GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Purple, resultStr);

        // use data
        SetActorLocation(LoadedGame->playerPosition);
        SetActorRotation(LoadedGame->playerRotation);
    }
    else
    {
        // Load unsuccessful

        // Debug notification logging
        FString resultStr = FString(TEXT("No matching saved file found successfully :/"));
        UE_LOG(LogClass, Log, TEXT("%s"), *resultStr);
        GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Purple, resultStr);
    }
}
