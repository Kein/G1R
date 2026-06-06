#include "GameplayAbilityDoor.h"

UGameplayAbilityDoor::UGameplayAbilityDoor() {
    this->ReplicationPolicy = EGameplayAbilityReplicationPolicy::ReplicateYes;
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->AbilityTriggers.AddDefaulted(3);
    this->m_UseCameraTarget = false;
    this->m_ApplyCooldown = true;
    this->m_UnEquipBefore = false;
    this->m_LockPickTask = NULL;
    this->m_CharMontageTask_Door = NULL;
    this->m_LockpickingInteractionTaskClass = NULL;
    this->m_LockpickingInteractionTask = NULL;
    this->m_ConsumeKeys = false;
}

void UGameplayAbilityDoor::SuccessLockEvent() {
}

void UGameplayAbilityDoor::Server_SuccessLockEvent_Implementation() {
}

void UGameplayAbilityDoor::Server_OnSetLockUnlocked_Implementation() {
}

void UGameplayAbilityDoor::Server_NoLockEvent_Implementation() {
}

void UGameplayAbilityDoor::Server_FailedLockEvent_Implementation() {
}

void UGameplayAbilityDoor::Server_CreateAndRunLockpickingInteractionTask_Implementation() {
}

void UGameplayAbilityDoor::OnLockpickingInteractionTaskEnded(UAbilityTaskGeneric* Task, EGenericTaskResult Result) {
}

void UGameplayAbilityDoor::NoLockEvent() {
}

void UGameplayAbilityDoor::NetMulticast_OnSetLockUnlocked_Implementation(FName ActorName) {
}

void UGameplayAbilityDoor::FailedLockEvent() {
}

void UGameplayAbilityDoor::EventPlayAction(FGameplayEventData Payload) {
}


