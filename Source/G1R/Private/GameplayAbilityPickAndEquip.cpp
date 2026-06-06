#include "GameplayAbilityPickAndEquip.h"

UGameplayAbilityPickAndEquip::UGameplayAbilityPickAndEquip() {
    this->ReplicationPolicy = EGameplayAbilityReplicationPolicy::ReplicateYes;
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->AbilityTriggers.AddDefaulted(1);
    this->m_ToEquipItemDef = NULL;
    this->m_InteractiveActor = NULL;
    this->m_AutoPick = false;
}

void UGameplayAbilityPickAndEquip::OnItemPicked(FGameplayEventData Payload) {
}

void UGameplayAbilityPickAndEquip::OnAnimFinished() {
}


