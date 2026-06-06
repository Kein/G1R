#include "GameplayAbilityBreakArmorHit.h"

UGameplayAbilityBreakArmorHit::UGameplayAbilityBreakArmorHit() {
    this->ReplicationPolicy = EGameplayAbilityReplicationPolicy::ReplicateYes;
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::ServerInitiated;
    this->AbilityTriggers.AddDefaulted(3);
    this->m_TickEnabled = true;
    this->m_bCanEverTick = true;
    this->m_Montage = NULL;
    this->m_ResetEffect = NULL;
    this->m_ImmunityEffect = NULL;
    this->m_KnockbackDataClass = NULL;
    this->m_FiredTimer = false;
    this->m_StunnedRandomTime = 0.00f;
    this->m_OriginalRooMotionTranslationScale = 1.00f;
    this->m_WasRestoredOriginalRooMotionTranslationScale = false;
    this->m_KnockbackEffect = NULL;
}

void UGameplayAbilityBreakArmorHit::OnMontageInterrupted_Scriptable_Implementation() {
}

void UGameplayAbilityBreakArmorHit::OnMontageCompleted_Scriptable_Implementation() {
}

void UGameplayAbilityBreakArmorHit::OnMontageCancelled_Scriptable_Implementation() {
}

void UGameplayAbilityBreakArmorHit::OnMontageBlendOut_Scriptable_Implementation() {
}

void UGameplayAbilityBreakArmorHit::OnInterrupted() {
}

void UGameplayAbilityBreakArmorHit::OnCompleted() {
}

void UGameplayAbilityBreakArmorHit::OnCancelled() {
}

void UGameplayAbilityBreakArmorHit::OnBlendOut() {
}

void UGameplayAbilityBreakArmorHit::OnActivateAbility_Scriptable_Implementation(const FGameplayAbilityActorInfo& GAActorInfo, const FGameplayEventData& TriggerEventData) {
}

void UGameplayAbilityBreakArmorHit::JumpToEndSection_Implementation() {
}


