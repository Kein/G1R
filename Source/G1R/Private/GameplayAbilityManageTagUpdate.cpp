#include "GameplayAbilityManageTagUpdate.h"

UGameplayAbilityManageTagUpdate::UGameplayAbilityManageTagUpdate() {
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::LocalOnly;
    this->m_ActivateAbilityOnGranted = true;
    this->m_AbilitySystemComponent = NULL;
}





