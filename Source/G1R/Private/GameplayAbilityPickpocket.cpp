#include "GameplayAbilityPickpocket.h"

UGameplayAbilityPickpocket::UGameplayAbilityPickpocket() {
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->AbilityTriggers.AddDefaulted(1);
    this->m_MoveToLocation = false;
    this->m_UnEquipBefore = false;
    this->m_DetectionRadius = 300.00f;
    this->m_DetectionAngleDegrees = 90.00f;
    this->m_targetActor = NULL;
}

void UGameplayAbilityPickpocket::OnItemPicked(FGameplayEventData Payload) {
}


