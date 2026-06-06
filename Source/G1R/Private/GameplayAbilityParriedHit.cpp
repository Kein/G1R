#include "GameplayAbilityParriedHit.h"

UGameplayAbilityParriedHit::UGameplayAbilityParriedHit() {
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::ServerInitiated;
    this->AbilityTriggers.AddDefaulted(1);
    this->m_ResetEffect = NULL;
    this->m_ImmunityEffect = NULL;
    this->m_ParriedEffect = NULL;
}


