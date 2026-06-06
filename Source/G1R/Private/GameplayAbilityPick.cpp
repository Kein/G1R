#include "GameplayAbilityPick.h"
#include "Templates/SubclassOf.h"

UGameplayAbilityPick::UGameplayAbilityPick() {
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->AbilityTriggers.AddDefaulted(1);
    this->m_MoveToLocation = false;
    this->m_UnEquipBefore = false;
    this->m_AnimationPlayRate = 1.00f;
    this->m_Montage_Task = NULL;
    this->m_RequiredToPick = NULL;
    this->m_TaskWait = NULL;
    this->m_CarryComponent = NULL;
}

void UGameplayAbilityPick::StartPicking() {
}

void UGameplayAbilityPick::OnItemPicked(FGameplayEventData Payload) {
}

void UGameplayAbilityPick::OnHidePickup(FGameplayEventData Payload) {
}

void UGameplayAbilityPick::OnAnimFinished() {
}

UAnimMontage* UGameplayAbilityPick::K2_GetPickSpecialMontage_Implementation(TSubclassOf<UItemDefinition>& ItemDefinition) {
    return NULL;
}



