#include "GameplayAbilityThrow.h"

UGameplayAbilityThrow::UGameplayAbilityThrow() {
    this->ReplicationPolicy = EGameplayAbilityReplicationPolicy::ReplicateYes;
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::LocalPredicted;
    this->AbilityTriggers.AddDefaulted(1);
    this->m_TaskCharMontage = NULL;
    this->m_LaunchItemTask = NULL;
    this->m_AttachItemTask = NULL;
    this->m_UnAttachItemTask = NULL;
    this->m_CarryComponent = NULL;
    this->m_VisualAttachedItem = NULL;
}

void UGameplayAbilityThrow::ThrowInEndedTransition() {
}

AActor* UGameplayAbilityThrow::SpawnObject(UClass* Actor, FVector position, FRotator Rotation) {
    return NULL;
}

void UGameplayAbilityThrow::Server_SetNextSection_Implementation(FName Section) {
}

void UGameplayAbilityThrow::Server_OnGetItem_Implementation(EInventoryTypes invToUse, int32 slotIdToUse, bool SwapItem) {
}

void UGameplayAbilityThrow::Server_FirePressed_Implementation() {
}

void UGameplayAbilityThrow::RemoveThrowInEndedTransition() {
}

void UGameplayAbilityThrow::OnWaterLevelChanged(float WaterDepth) {
}

void UGameplayAbilityThrow::OnTargetingChanged(FGameplayTag InTag, int32 NewCount) {
}

void UGameplayAbilityThrow::OnItemUnAttach(const FGameplayEventData Payload) {
}


void UGameplayAbilityThrow::OnItemThrowed(AItemVisualWorld* Item) {
}

void UGameplayAbilityThrow::OnItemLaunched(const FGameplayEventData Payload) {
}

void UGameplayAbilityThrow::OnItemAttach(const FGameplayEventData Payload) {
}

void UGameplayAbilityThrow::NetMulticast_OnGetItem_Implementation(EInventoryTypes invToUse, int32 slotIdToUse, bool SwapItem) {
}

void UGameplayAbilityThrow::NetMulticast_FirePressed_Implementation() {
}

void UGameplayAbilityThrow::FirePressed() {
}

void UGameplayAbilityThrow::Client_SetNextSection_Implementation(FName Section) {
}


