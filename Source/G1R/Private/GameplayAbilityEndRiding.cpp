#include "GameplayAbilityEndRiding.h"

UGameplayAbilityEndRiding::UGameplayAbilityEndRiding() {
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::ServerInitiated;
    this->AbilityTriggers.AddDefaulted(2);
    this->m_DataModule_Locomotion = NULL;
}

void UGameplayAbilityEndRiding::TryDelayedActivation() {
}

void UGameplayAbilityEndRiding::DelayActivation() {
}


