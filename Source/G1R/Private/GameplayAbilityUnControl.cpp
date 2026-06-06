#include "GameplayAbilityUnControl.h"

UGameplayAbilityUnControl::UGameplayAbilityUnControl() {
    this->ReplicationPolicy = EGameplayAbilityReplicationPolicy::ReplicateYes;
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->AbilityTriggers.AddDefaulted(6);
    this->m_CameraTravelInitialDelay = 0.20f;
    this->m_CameraTravelDuration = 1.00f;
}


void UGameplayAbilityUnControl::OnSync() {
}

void UGameplayAbilityUnControl::OnHoldFinished() {
}

void UGameplayAbilityUnControl::OnHoldCanceled() {
}





