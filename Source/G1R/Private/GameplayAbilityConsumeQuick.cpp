#include "GameplayAbilityConsumeQuick.h"

UGameplayAbilityConsumeQuick::UGameplayAbilityConsumeQuick() {
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->AbilityTriggers.AddDefaulted(1);
    this->m_ShouldResetInteractiveLogic = false;
    this->m_CarryComponent = NULL;
    this->m_AnimTask = NULL;
    this->m_CurrentMontage = NULL;
}

void UGameplayAbilityConsumeQuick::OnItemSpawned(FGameplayEventData Payload) {
}

void UGameplayAbilityConsumeQuick::OnItemConsumed(FGameplayEventData Payload) {
}

void UGameplayAbilityConsumeQuick::OnAnimFinished() {
}


