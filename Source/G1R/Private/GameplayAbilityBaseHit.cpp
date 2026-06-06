#include "GameplayAbilityBaseHit.h"

UGameplayAbilityBaseHit::UGameplayAbilityBaseHit() {
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::ServerOnly;
    this->m_DefaultFeedback = NULL;
}

void UGameplayAbilityBaseHit::OnResetStates() {
}

void UGameplayAbilityBaseHit::OnPressDodge() {
}

void UGameplayAbilityBaseHit::OnAttackInput(FGameplayTag Direction) {
}


