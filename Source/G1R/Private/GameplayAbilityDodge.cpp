#include "GameplayAbilityDodge.h"

UGameplayAbilityDodge::UGameplayAbilityDodge() {
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->AbilityTriggers.AddDefaulted(1);
    this->m_RotateTask = NULL;
    this->m_PlayMontageTask = NULL;
    this->m_SuperArmorEffect = NULL;
}

void UGameplayAbilityDodge::OnValidData(const FGameplayAbilityTargetDataHandle& TargetData) {
}

void UGameplayAbilityDodge::OnResetStates() {
}

void UGameplayAbilityDodge::OnInterrupted() {
}

void UGameplayAbilityDodge::OnCancelled() {
}

bool UGameplayAbilityDodge::OnCanActivateAbility_Scriptable_Implementation(const FGameplayAbilityActorInfo& GameplayAbilityActorInfo) const {
    return false;
}

void UGameplayAbilityDodge::OnAttackInput(FGameplayTag Direction) {
}


