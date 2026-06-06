#include "GameplayAbilityStatue.h"

UGameplayAbilityStatue::UGameplayAbilityStatue() {
    this->ReplicationPolicy = EGameplayAbilityReplicationPolicy::ReplicateYes;
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->AbilityTriggers.AddDefaulted(1);
    this->m_ApplyCooldown = true;
    this->m_CharMontageTask = NULL;
    this->m_NewTaskIdle = NULL;
    this->m_InteractiveObjectActor = NULL;
    this->m_TriggerExtraData = NULL;
    this->m_CanCancel = false;
}

void UGameplayAbilityStatue::Server_SetNextSection_Implementation(FName NextSectionName, int32 sectionDelta) {
}

void UGameplayAbilityStatue::Multicast_SetNextSection_Implementation(FName NextSectionName, int32 sectionDelta) {
}

void UGameplayAbilityStatue::HandleMoveInput(const FInputActionInstance& Instance) {
}

void UGameplayAbilityStatue::HandleMontageIdleEvent(FGameplayEventData Payload) {
}

void UGameplayAbilityStatue::HandleLeaveInput() {
}


