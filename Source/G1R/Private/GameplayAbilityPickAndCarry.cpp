#include "GameplayAbilityPickAndCarry.h"
#include "Templates/SubclassOf.h"

UGameplayAbilityPickAndCarry::UGameplayAbilityPickAndCarry() {
    this->ReplicationPolicy = EGameplayAbilityReplicationPolicy::ReplicateYes;
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->AbilityTriggers.AddDefaulted(1);
    this->CarryItemClass = NULL;
    this->CarryItemDefinitionClass = NULL;
    this->CarryItem = NULL;
    this->ActiveMontage = NULL;
    this->MontageTask = NULL;
    this->ObjectMontageTask = NULL;
    this->AttachmentSocketName = TEXT("weapon_rSocket");
}

void UGameplayAbilityPickAndCarry::TakeOutItemOfType(TSubclassOf<UItemDefinition> ItemDefinition, bool bPlayPickUpAnimation) {
}

void UGameplayAbilityPickAndCarry::HandlePutDownCompleted() {
}

void UGameplayAbilityPickAndCarry::HandlePickupBlendingOut() {
}


