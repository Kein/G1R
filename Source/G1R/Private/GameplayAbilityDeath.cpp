#include "GameplayAbilityDeath.h"

UGameplayAbilityDeath::UGameplayAbilityDeath() {
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::ServerInitiated;
    this->AbilityTriggers.AddDefaulted(2);
    this->m_ReviveEffect = NULL;
    this->m_RestoreOxygenEffect = NULL;
    this->m_MutilatedSkeletalMeshActor = NULL;
    this->m_WeaponUsed = NULL;
    this->m_ItemSkill = EWeaponSkill::None;
    this->m_IsExecuted = false;
    this->m_DeathGE = NULL;
}

void UGameplayAbilityDeath::UpdateDeathEffectValue() {
}

void UGameplayAbilityDeath::StartRagdoll() {
}

void UGameplayAbilityDeath::StartDeathEffect() {
}

void UGameplayAbilityDeath::PlayDeathVoiceLine() const {
}

void UGameplayAbilityDeath::OnRevive() {
}




void UGameplayAbilityDeath::DoDeathEffect_Scriptable_Implementation() {
}

void UGameplayAbilityDeath::DoDeathEffect() {
}


