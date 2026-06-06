#include "GameplayAbilityMagicCombatStance.h"

UGameplayAbilityMagicCombatStance::UGameplayAbilityMagicCombatStance() {
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->m_ActivateAbilityOnGranted = true;
}


