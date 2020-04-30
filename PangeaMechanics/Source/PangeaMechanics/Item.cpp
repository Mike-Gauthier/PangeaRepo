// Fill out your copyright notice in the Description page of Project Settings.


#include "Item.h"
#include "Engine.h"

// Sets default values
AItem::AItem()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	TBox = CreateDefaultSubobject<UBoxComponent>(TEXT("TBox"));
	TBox->SetGenerateOverlapEvents(true);
	TBox->OnComponentBeginOverlap.AddDynamic(this, &AItem::TriggerEnter);
	TBox->OnComponentEndOverlap.AddDynamic(this, &AItem::TriggerExit);

	SM_TBox = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SM_TBox"));
	SM_TBox->SetSimulatePhysics(true);
	RootComponent = SM_TBox;
	
	// Set Children
	TBox->SetupAttachment(RootComponent);
}

void AItem::GetPlayer(AActor* Player)
{
	MyPlayerController = Cast<APangeaMechanicsCharacter>(Player);
}

// DISABLE ACTOR
void AItem::DisableActor(bool hide)
{
	SetActorHiddenInGame(hide);
	SetActorEnableCollision(!hide);
	SetActorTickEnabled(!hide);
	SM_TBox->SetSimulatePhysics(!hide);
}

// PICK UP
void AItem::Pickup()
{
	// Static
	int slot = 0;
	if (MyPlayerController->IsInventorySlotEmpty(slot))
	{
		MyPlayerController->StaticInventory[slot] = this;
		DisableActor(true);
	}

	else {
		GEngine->AddOnScreenDebugMessage(1, 5.f, FColor::Red, TEXT("You dont have enough space!"));
	}
}

// USE
void AItem::Use()
{
	GEngine->AddOnScreenDebugMessage(1, 5.f, FColor::Green, TEXT("Using Item"));
}

// Called when the game starts or when spawned
void AItem::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void AItem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	if (MyPlayerController != NULL)
	{
		if (MyPlayerController->isPickingUp && ItemIsWithinRange)
		{
			Pickup();
		}
	}
}

// TRIGGER FUNCTIONS
void AItem::TriggerEnter(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult)
{
	ItemIsWithinRange = true;
	GEngine->AddOnScreenDebugMessage(1, 5.f, FColor::Green, FString::Printf(TEXT("Press E to pickup %s"), *name));
	GetPlayer(OtherActor);
}

void AItem::TriggerExit(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	ItemIsWithinRange = false;
}