#include "GameplayAbilityJump.h"

UGameplayAbilityJump::UGameplayAbilityJump() {
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::NonInstanced;
    this->AbilityTriggers.AddDefaulted(1);
    this->m_FinishOnInputReleased = true;
}


