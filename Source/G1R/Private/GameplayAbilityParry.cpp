#include "GameplayAbilityParry.h"

UGameplayAbilityParry::UGameplayAbilityParry() {
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->AbilityTriggers.AddDefaulted(1);
    this->m_ParryData = NULL;
    this->m_SuperArmorEffect = NULL;
}

void UGameplayAbilityParry::OnWaitDoRiposte() {
}

void UGameplayAbilityParry::OnValidData(const FGameplayAbilityTargetDataHandle& TargetData) {
}

void UGameplayAbilityParry::OnResetStates() {
}

void UGameplayAbilityParry::OnPressDodge() {
}

void UGameplayAbilityParry::OnAttackInput(FGameplayTag Direction) {
}


