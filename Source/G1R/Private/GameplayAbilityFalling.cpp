#include "GameplayAbilityFalling.h"

UGameplayAbilityFalling::UGameplayAbilityFalling() {
    this->ReplicationPolicy = EGameplayAbilityReplicationPolicy::ReplicateYes;
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::LocalPredicted;
    this->AbilityTriggers.AddDefaulted(1);
    this->m_TickEnabled = true;
    this->m_bCanEverTick = true;
    this->m_EnableDamageLimiter = false;
    this->m_DoOnce = false;
}

void UGameplayAbilityFalling::Server_CheckApplyDamage_Implementation(float FallingDistance) {
}

void UGameplayAbilityFalling::OnLanded(const FHitResult& Hit) {
}

void UGameplayAbilityFalling::OnEndAbility_Scriptable_Implementation(const FGameplayAbilityActorInfo& Info, bool WasCancelled) {
}

bool UGameplayAbilityFalling::OnCanActivateAbility_Scriptable_Implementation(const FGameplayAbilityActorInfo& GAActorInfo) const {
    return false;
}

void UGameplayAbilityFalling::OnActivateAbility_Scriptable_Implementation(const FGameplayAbilityActorInfo& GAActorInfo, const FGameplayEventData& TriggerEventData) {
}

float UGameplayAbilityFalling::GetStartFallingZPositionFromDatamodule() {
    return 0.0f;
}

float UGameplayAbilityFalling::GetMinFallDistance_Scriptable_Implementation() {
    return 0.0f;
}

float UGameplayAbilityFalling::GetFallingCancelAbilitiesDistance_Scriptable_Implementation() {
    return 0.0f;
}



