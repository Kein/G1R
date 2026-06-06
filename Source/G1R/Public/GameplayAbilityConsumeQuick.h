#pragma once
#include "CoreMinimal.h"
#include "Abilities/GameplayAbilityTypes.h"
#include "GameplayAbilityInteractionBase.h"
#include "GameplayAbilityConsumeQuick.generated.h"

class UAbilityTask_PlayMontage_Extended;
class UAnimMontage;
class UCarryComponent;
class UHUDQuickSlotController;

UCLASS()
class G1R_API UGameplayAbilityConsumeQuick : public UGameplayAbilityInteractionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced)
    UCarryComponent* m_CarryComponent;
    
    UPROPERTY()
    UAbilityTask_PlayMontage_Extended* m_AnimTask;
    
    UPROPERTY()
    TWeakObjectPtr<UHUDQuickSlotController> m_QuickSlotController;
    
    UPROPERTY()
    UAnimMontage* m_CurrentMontage;
    
public:
    UGameplayAbilityConsumeQuick();

    UFUNCTION()
    void OnItemSpawned(FGameplayEventData Payload);
    
    UFUNCTION(BlueprintCallable)
    void OnItemConsumed(FGameplayEventData Payload);
    
    UFUNCTION(BlueprintCallable)
    void OnAnimFinished();
    
};

