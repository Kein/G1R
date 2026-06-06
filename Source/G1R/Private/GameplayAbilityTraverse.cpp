#include "GameplayAbilityTraverse.h"

UGameplayAbilityTraverse::UGameplayAbilityTraverse() {
    this->ReplicationPolicy = EGameplayAbilityReplicationPolicy::ReplicateYes;
    this->AbilityTriggers.AddDefaulted(1);
    this->m_TraverseTask = NULL;
    this->m_CurrentMontage = NULL;
    this->m_TaskCharSleepInMontage = NULL;
    this->m_traversingConfig = NULL;
    this->m_TraversingAnimConfig = NULL;
}

void UGameplayAbilityTraverse::Server_TraverseEnd_Implementation(bool isNextTraverseStepRequestFailed) {
}

void UGameplayAbilityTraverse::Server_RequestNextStep_Implementation() {
}

void UGameplayAbilityTraverse::Server_MoveToPoint_Implementation(const UAnimNotifyState_Base* Notify) {
}

void UGameplayAbilityTraverse::OnRequestTraverseEnd() {
}

void UGameplayAbilityTraverse::OnLandedCallback(const FHitResult& Hit) {
}

void UGameplayAbilityTraverse::OnJumpPressed() {
}


