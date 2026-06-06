#include "GameplayAbilityInLavaMovement.h"

UGameplayAbilityInLavaMovement::UGameplayAbilityInLavaMovement() {
    this->AbilityTriggers.AddDefaulted(1);
    this->m_TickEnabled = true;
    this->m_bCanEverTick = true;
}


