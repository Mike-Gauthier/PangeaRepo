//Author Pablo Bengoa | Email: p.bengoanagy@gmail.com

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "HuntingComponent.generated.h"

class ACharacter;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PANGEAMECHANICS_API UHuntingComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UHuntingComponent();

  UPROPERTY(EditAnywhere, BlueprintReadOnly, category = "Settings")
    float damage_;
  UPROPERTY(EditAnywhere, BlueprintReadOnly, category = "Settings")
    float range_;
  UPROPERTY(EditAnywhere, BlueprintReadOnly, category = "Debug")
    bool debug_mode_;
protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

  UFUNCTION()
    void MeleeAttack();

private:

  ACharacter* owning_actor_;
  USceneComponent* camera_transform_;
};
