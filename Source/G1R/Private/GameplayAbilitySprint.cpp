#include "GameplayAbilitySprint.h"

UGameplayAbilitySprint::UGameplayAbilitySprint() {
    this->AbilityTriggers.AddDefaulted(1);
    this->m_FinishOnInputReleased = true;
}


