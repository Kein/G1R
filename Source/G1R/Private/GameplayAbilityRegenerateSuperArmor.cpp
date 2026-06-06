#include "GameplayAbilityRegenerateSuperArmor.h"

UGameplayAbilityRegenerateSuperArmor::UGameplayAbilityRegenerateSuperArmor() {
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::ServerOnly;
    this->m_ActivateAbilityOnGranted = true;
    this->m_RegenerateArmorEffect = NULL;
    this->m_AbComp = NULL;
}


