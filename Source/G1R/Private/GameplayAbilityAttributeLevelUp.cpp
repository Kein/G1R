#include "GameplayAbilityAttributeLevelUp.h"

UGameplayAbilityAttributeLevelUp::UGameplayAbilityAttributeLevelUp() {
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::ServerOnly;
    this->m_ActivateAbilityOnGranted = true;
}


