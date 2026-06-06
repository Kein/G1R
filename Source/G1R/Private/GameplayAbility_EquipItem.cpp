#include "GameplayAbility_EquipItem.h"

UGameplayAbility_EquipItem::UGameplayAbility_EquipItem() {
    this->ReplicationPolicy = EGameplayAbilityReplicationPolicy::ReplicateYes;
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->AbilityTriggers.AddDefaulted(2);
    this->m_NextItemDef = NULL;
    this->m_CarryComponent = NULL;
    this->m_EquippedItem = NULL;
    this->m_LastEquippedWeapon = NULL;
    this->m_LastEquippedMeleeWeapon = NULL;
    this->m_LastEquippedRangedWeapon = NULL;
    this->m_ItemToDrop = NULL;
    this->m_PlayMontageTask = NULL;
    this->m_WaitAxisTask = NULL;
    this->m_AnimInstance = NULL;
    this->m_InteractiveActor = NULL;
    this->m_NetSync = NULL;
}

void UGameplayAbility_EquipItem::Server_RequestEndAbility_Implementation(EInventoryTypes invNext, int32 slotNext, bool shouldPlayAnim, bool forced) {
}

void UGameplayAbility_EquipItem::Server_OnDropItemEvent_Implementation(const FGameplayEventData TriggerEventData) {
}

void UGameplayAbility_EquipItem::RequestEndAbilityFinish() {
}

void UGameplayAbility_EquipItem::RequestEndAbility(bool PlayAnim, bool forced, bool Preload) {
}

void UGameplayAbility_EquipItem::OnWaterLevelChanged(float WaterDepth) {
}

void UGameplayAbility_EquipItem::OnUnequipFinish() {
}

void UGameplayAbility_EquipItem::OnSyncFinishEquipEnd() {
}

void UGameplayAbility_EquipItem::OnSyncEnd() {
}

void UGameplayAbility_EquipItem::OnStartedRiding() {
}

void UGameplayAbility_EquipItem::OnResetStates() {
}

void UGameplayAbility_EquipItem::OnEquipEffectFullyRemoved(const FGameplayEffectRemovalInfo& removalInfo) {
}

UItemDefinition* UGameplayAbility_EquipItem::GetLastEquipedWeapon() const {
    return NULL;
}

UItemDefinition* UGameplayAbility_EquipItem::GetLastEquipedRangedWeapon() const {
    return NULL;
}

UItemDefinition* UGameplayAbility_EquipItem::GetLastEquipedMeleeWeapon() const {
    return NULL;
}

void UGameplayAbility_EquipItem::FinishEquip() {
}


