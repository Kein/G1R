#include "GameplayAbilityLavaExtractor.h"

UGameplayAbilityLavaExtractor::UGameplayAbilityLavaExtractor() {
    this->ReplicationPolicy = EGameplayAbilityReplicationPolicy::ReplicateYes;
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->AbilityTriggers.AddDefaulted(1);
    this->m_bCanEverTick = true;
    this->m_InteractiveObjectActor = NULL;
    this->m_TriggerExtraData = NULL;
    this->m_NumSteps = -1;
    this->m_CharMontageTask = NULL;
    this->m_NewTaskIdle = NULL;
    this->m_PushTaskIdle = NULL;
    this->m_TaskMoveEnd = NULL;
    this->m_CanCancel = false;
}

void UGameplayAbilityLavaExtractor::Server_PushSection_Implementation(FName UniqueName, int32 Section, FName UserName) {
}

void UGameplayAbilityLavaExtractor::Server_MoveEnd_Implementation(FName UniqueName, int32 Section, FName UserName) {
}

void UGameplayAbilityLavaExtractor::Server_LeaveStation_Implementation() {
}

void UGameplayAbilityLavaExtractor::Server_HandleMoveInput_Implementation() {
}

void UGameplayAbilityLavaExtractor::HandleMoveInput(const FInputActionInstance& Instance) {
}

void UGameplayAbilityLavaExtractor::HandleMontagePushEvent(FGameplayEventData Payload) {
}

void UGameplayAbilityLavaExtractor::HandleMontageMoveEndEvent(FGameplayEventData Payload) {
}

void UGameplayAbilityLavaExtractor::HandleMontageIdleEvent(FGameplayEventData Payload) {
}

void UGameplayAbilityLavaExtractor::HandleLeaveInput() {
}


