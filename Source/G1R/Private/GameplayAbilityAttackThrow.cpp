#include "GameplayAbilityAttackThrow.h"

UGameplayAbilityAttackThrow::UGameplayAbilityAttackThrow() {
    this->ReplicationPolicy = EGameplayAbilityReplicationPolicy::ReplicateYes;
    this->m_PlayMontageTask = NULL;
    this->m_Projectile = NULL;
    this->m_OnExectuion = false;
}

void UGameplayAbilityAttackThrow::ServerFire_Implementation(const FTransform& AimTransform) {
}

void UGameplayAbilityAttackThrow::OnProjectileSpawned_Scriptable_Implementation(AProjectileVisual* ProjectileVisual) {
}

bool UGameplayAbilityAttackThrow::OnCanActivateAbility_Scriptable_Implementation(const FGameplayAbilityActorInfo& GameplayAbilityActorInfo) const {
    return false;
}

void UGameplayAbilityAttackThrow::OnActivateAbilityBeforeAssetPreload_Scriptable_Implementation(const FGameplayAbilityActorInfo& GAActorInfo, const FGameplayEventData& TriggerEventData) {
}

void UGameplayAbilityAttackThrow::InitializeProjectile_Scriptable_Implementation(AProjectileVisual* ProjectileVisual) {
}


