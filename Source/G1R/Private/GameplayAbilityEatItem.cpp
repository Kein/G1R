#include "GameplayAbilityEatItem.h"

UGameplayAbilityEatItem::UGameplayAbilityEatItem() {
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->AbilityTriggers.AddDefaulted(1);
    this->m_MoveToLocation = false;
    this->m_UnEquipBefore = false;
    this->m_MontageTask = NULL;
}

void UGameplayAbilityEatItem::OnAnimFinished() {
}


