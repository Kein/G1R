#include "GameplayAbilityWalk.h"

UGameplayAbilityWalk::UGameplayAbilityWalk() {
    this->AbilityTriggers.AddDefaulted(1);
    this->m_FinishOnInputReleased = true;
}


