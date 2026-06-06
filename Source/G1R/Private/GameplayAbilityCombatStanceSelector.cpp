#include "GameplayAbilityCombatStanceSelector.h"

UGameplayAbilityCombatStanceSelector::UGameplayAbilityCombatStanceSelector() {
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->m_ActivateAbilityOnGranted = true;
    this->m_AttackTask = NULL;
}

void UGameplayAbilityCombatStanceSelector::OnValidData(const FGameplayAbilityTargetDataHandle& TargetData) {
}

void UGameplayAbilityCombatStanceSelector::OnAttackInput(FGameplayTag Direction) {
}


