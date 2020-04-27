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

	RootComponent = TBox;

	SM_TBox = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SM_TBox"));
	SM_TBox->SetupAttachment(RootComponent);
}

void AItem::GetPlayer(AActor* Player)
{
	MyPlayerController = Cast<APangeaMechanicsCharacter>(Player);
}

// Called when the game starts or when spawned
void AItem::BeginPlay()
{
	Super::BeginPlay();
}


void AItem::Pickup()
{
	MyPlayerController->Inventory.Add(*ItemName);
	//MyPlayerController->AddItem(this);
	GEngine->AddOnScreenDebugMessage(1, 5.f, FColor::Green, TEXT("Item Picked Up!"));
	Destroy();
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

void AItem::TriggerEnter(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult)
{
	ItemIsWithinRange = true;
	GEngine->AddOnScreenDebugMessage(1, 5.f, FColor::Green, FString::Printf(TEXT("Press E to pickup %s"), *ItemName));
	GetPlayer(OtherActor);
}

void AItem::TriggerExit(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	ItemIsWithinRange = false;
}

