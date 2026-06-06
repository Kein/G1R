#include "GameplayAbilityAim.h"

UGameplayAbilityAim::UGameplayAbilityAim() {
    this->AbilityTriggers.AddDefaulted(1);
    this->m_FinishOnInputReleased = true;
    this->m_AbilitySystemComponent = NULL;
}


