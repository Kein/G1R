#include "GameplayAbilitySummon.h"

UGameplayAbilitySummon::UGameplayAbilitySummon() {
    this->ReplicationPolicy = EGameplayAbilityReplicationPolicy::ReplicateYes;
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::ServerOnly;
    this->m_ActivateAbilityOnGranted = true;
    this->m_SummonAnimationTask = NULL;
    this->m_ShouldRestoreTickOptimizer = false;
    this->m_EnableRandomDelayOnSummonAnim = false;
    this->m_MinRandomDelayOnSummonAnim = 0.10f;
    this->m_MaxRandomDelayOnSummonAnim = 1.00f;
    this->m_PlayRate = 1.00f;
}

void UGameplayAbilitySummon::PlayMontage() {
}

void UGameplayAbilitySummon::OnInterruptedMontage() {
}

void UGameplayAbilitySummon::OnEndAbility_Scriptable_Implementation(const FGameplayAbilityActorInfo& GameplayAbilityActorInfo, bool WasCancelled) {
}

void UGameplayAbilitySummon::OnCompletedMontage() {
}

void UGameplayAbilitySummon::OnCancelledMontage() {
}

void UGameplayAbilitySummon::OnBlendOutMontage() {
}

void UGameplayAbilitySummon::OnActivateAbility_Scriptable_Implementation(const FGameplayAbilityActorInfo& GAActorInfo, const FGameplayEventData& TriggerEventData) {
}

float UGameplayAbilitySummon::GetMontageDuration() {
    return 0.0f;
}

void UGameplayAbilitySummon::DoSummon_Scriptable_Implementation() {
}


