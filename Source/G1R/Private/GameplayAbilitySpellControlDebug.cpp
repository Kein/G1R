#include "GameplayAbilitySpellControlDebug.h"

UGameplayAbilitySpellControlDebug::UGameplayAbilitySpellControlDebug() {
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::LocalPredicted;
    this->AbilityTriggers.AddDefaulted(1);
}


