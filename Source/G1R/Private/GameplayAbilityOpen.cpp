#include "GameplayAbilityOpen.h"

UGameplayAbilityOpen::UGameplayAbilityOpen() {
    this->ReplicationPolicy = EGameplayAbilityReplicationPolicy::ReplicateYes;
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->m_ApplyCooldown = true;
    this->m_ConsumeKeys = false;
    this->m_LockDifficulty = 0;
    this->m_LockPickTask = NULL;
    this->m_TaskCharMontage = NULL;
    this->m_TaskWaitIntroAnimation = NULL;
    this->m_TaskWaitOpenAnimation = NULL;
    this->m_InteractiveObjectMontage = NULL;
}

void UGameplayAbilityOpen::Server_OnSetLockUnlocked_Implementation() {
}

void UGameplayAbilityOpen::Server_OnLockPickActorBecameInactive_Implementation() {
}

void UGameplayAbilityOpen::Server_OnLockPickActorBecameActive_Implementation() {
}

void UGameplayAbilityOpen::Server_OnCloseRequested_Implementation() {
}

void UGameplayAbilityOpen::Server_NoLockEvent_Implementation() {
}

void UGameplayAbilityOpen::Server_FailedLockEvent_Implementation() {
}

void UGameplayAbilityOpen::OnSectionMoved() {
}

void UGameplayAbilityOpen::OnOpenAnimationFinished() {
}

void UGameplayAbilityOpen::OnLockSequenceFinished(bool Success) {
}

void UGameplayAbilityOpen::OnIntroFinished() {
}

void UGameplayAbilityOpen::OnCloseRequested() {
}

void UGameplayAbilityOpen::NoLockEvent() {
}

void UGameplayAbilityOpen::NetMulticast_OnSetLockUnlocked_Implementation(FName ActorName) {
}

void UGameplayAbilityOpen::NetMulticast_OnLockPickActorBecameInactive_Implementation() {
}

void UGameplayAbilityOpen::NetMulticast_OnLockPickActorBecameActive_Implementation() {
}

void UGameplayAbilityOpen::NetMulticast_OnCloseRequested_Implementation() {
}

void UGameplayAbilityOpen::KeyReleases() {
}

void UGameplayAbilityOpen::FailedLockEvent() {
}


