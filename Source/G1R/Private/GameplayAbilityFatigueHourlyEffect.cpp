#include "GameplayAbilityFatigueHourlyEffect.h"

UGameplayAbilityFatigueHourlyEffect::UGameplayAbilityFatigueHourlyEffect() {
    this->AbilityTriggers.AddDefaulted(2);
    this->m_ActivateAbilityOnGranted = false;
}


