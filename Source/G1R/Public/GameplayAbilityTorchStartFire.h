#pragma once
#include "CoreMinimal.h"
#include "Abilities/GameplayAbilityTypes.h"
#include "GameplayTagContainer.h"
#include "GameplayAbilityBlockingInteraction.h"
#include "GameplayAbilityTorchStartFire.generated.h"

UCLASS()
class G1R_API UGameplayAbilityTorchStartFire : public UGameplayAbilityBlockingInteraction {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    FGameplayTag m_EventTag;
    
public:
    UGameplayAbilityTorchStartFire();

    UFUNCTION(BlueprintCallable)
    void OnItemPicked(FGameplayEventData Payload);
    
    UFUNCTION(BlueprintCallable)
    void OnAnimFinished();
    
};

