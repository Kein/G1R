#include "GameplayAbilityFatigueDebuffs.h"

UGameplayAbilityFatigueDebuffs::UGameplayAbilityFatigueDebuffs() {
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::ServerOnly;
    this->AbilityTriggers.AddDefaulted(1);
    this->m_RefreshAttributesEffect = NULL;
}


