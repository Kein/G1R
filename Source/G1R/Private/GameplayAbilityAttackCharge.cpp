#include "GameplayAbilityAttackCharge.h"

UGameplayAbilityAttackCharge::UGameplayAbilityAttackCharge() {
    this->m_PlayMontageTask = NULL;
    this->m_UpdateChargeTask = NULL;
    this->m_UptdateHitsTask = NULL;
}

void UGameplayAbilityAttackCharge::OnOverlapEnterCharge(UPrimitiveComponent* HitComp, const FHitResult Hit) {
}

void UGameplayAbilityAttackCharge::OnHitWall() {
}

void UGameplayAbilityAttackCharge::OnHitCharacter(UPrimitiveComponent* HitComp, const FHitResult Hit) {
}

void UGameplayAbilityAttackCharge::OnChargeTargetLost() {
}

void UGameplayAbilityAttackCharge::OnChargeTargetAcquired(USceneComponent* NewTarget) {
}


