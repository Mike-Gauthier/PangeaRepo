// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PangeaMechanicsCharacter.h"
#include "Item.generated.h"

UCLASS()
class PANGEAMECHANICS_API AItem : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AItem();

	UPROPERTY(VisibleAnywhere)
		UShapeComponent* TBox;

	UPROPERTY(VisibleAnywhere)
		UStaticMeshComponent* SM_TBox;

	APangeaMechanicsCharacter* MyPlayerController;

	UPROPERTY(EditAnywhere)
		FString ItemName = FString(TEXT(""));

	UPROPERTY(EditAnywhere)
		FString ItemDescription = FString(TEXT(""));

	/*The Texture of the item in case we want to add it in the secrets or inventory*/
	UPROPERTY(EditAnywhere)
		UTexture2D* PickupTexture;

	UPROPERTY(EditAnywhere)
		int Weight = 1;

	void Pickup();
	void GetPlayer(AActor* Player);

	bool ItemIsWithinRange = false;

	UFUNCTION()
		void TriggerEnter(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult);

	UFUNCTION()
		void TriggerExit(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
