#include "GameplayAbilityLoot.h"
#include "Templates/SubclassOf.h"

UGameplayAbilityLoot::UGameplayAbilityLoot() {
    this->ReplicationPolicy = EGameplayAbilityReplicationPolicy::ReplicateYes;
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->AbilityTriggers.AddDefaulted(1);
    this->m_MoveToLocation = false;
    this->m_UnEquipBefore = false;
    this->m_TaskLootContainer = NULL;
    this->m_CharMontageTask = NULL;
    this->m_CharMontage = NULL;
    this->HUDLootController = NULL;
    this->m_InteractComp = NULL;
}

bool UGameplayAbilityLoot::TryTakeItemWithDefinitionFromTarget(AActor* Target, TSubclassOf<UItemDefinition> Definition, int32 Amount, EInventoryTypes targetInventorySlot) {
    return false;
}

bool UGameplayAbilityLoot::TryTakeItemOfTypeFromTarget(AActor* Target, FGameplayTag ItemType, int32 Amount) {
    return false;
}

void UGameplayAbilityLoot::TaskFinished() {
}

void UGameplayAbilityLoot::Server_OnCloseRequested_Implementation() {
}

void UGameplayAbilityLoot::HandleNPCLooting_Implementation() {
}

void UGameplayAbilityLoot::EventStartHud(FGameplayEventData Payload) {
}

void UGameplayAbilityLoot::CloseLootContainer() {
}


