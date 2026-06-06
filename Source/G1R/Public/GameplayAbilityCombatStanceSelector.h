#pragma once
#include "CoreMinimal.h"
#include "Abilities/GameplayAbilityTargetTypes.h"
#include "GameplayTagContainer.h"
#include "GameplayAbilityBase_Combat.h"
#include "GameplayAbilityCombatStanceSelector.generated.h"

class UAbilityTask_UpdateAttackAxis;

UCLASS()
class G1R_API UGameplayAbilityCombatStanceSelector : public UGameplayAbilityBase_Combat {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    UAbilityTask_UpdateAttackAxis* m_AttackTask;
    
public:
    UGameplayAbilityCombatStanceSelector();

protected:
    UFUNCTION()
    void OnValidData(const FGameplayAbilityTargetDataHandle& TargetData);
    
    UFUNCTION()
    void OnAttackInput(FGameplayTag Direction);
    
};

