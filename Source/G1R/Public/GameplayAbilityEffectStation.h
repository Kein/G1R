#pragma once
#include "CoreMinimal.h"
#include "Abilities/GameplayAbilityTypes.h"
#include "GameplayTagContainer.h"
#include "GameplayAbilityBlockingInteraction.h"
#include "GameplayAbilityEffectStation.generated.h"

class AInteractiveObjectActor;
class UAbilityTask_PlayMontage_Extended;
class UInteractAnimConfig;

UCLASS()
class G1R_API UGameplayAbilityEffectStation : public UGameplayAbilityBlockingInteraction {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    UAbilityTask_PlayMontage_Extended* m_CharMontageTask;
    
    UPROPERTY(Instanced)
    UInteractAnimConfig* m_InteractionAnim;
    
    UPROPERTY()
    AInteractiveObjectActor* m_InteractiveObjectActor;
    
    UPROPERTY(Transient)
    FGameplayTag m_EventTag;
    
public:
    UGameplayAbilityEffectStation();

protected:
    UFUNCTION(BlueprintCallable)
    void EventApplyEffect(FGameplayEventData Payload);
    
};

