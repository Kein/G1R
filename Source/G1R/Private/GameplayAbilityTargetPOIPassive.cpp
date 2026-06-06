#include "GameplayAbilityTargetPOIPassive.h"

UGameplayAbilityTargetPOIPassive::UGameplayAbilityTargetPOIPassive() {
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::ServerInitiated;
    this->m_ActivateAbilityOnGranted = true;
    this->m_UpdatePOITask = NULL;
}


