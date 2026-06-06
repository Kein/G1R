#include "GameplayAbilityLightHit.h"

UGameplayAbilityLightHit::UGameplayAbilityLightHit() {
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::ServerInitiated;
    this->AbilityTriggers.AddDefaulted(2);
    this->m_Montage = NULL;
    this->m_OnHitEffect = NULL;
}


