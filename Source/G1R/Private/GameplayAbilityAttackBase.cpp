#include "GameplayAbilityAttackBase.h"

UGameplayAbilityAttackBase::UGameplayAbilityAttackBase() {
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::ServerInitiated;
    this->m_UpdateAttackMagnetTask = NULL;
    this->m_UpdateFlyingMagnetTask = NULL;
    this->m_UpdateRotationTaskMeleeMagnet = NULL;
    this->m_CurrentTempCombo = NULL;
    this->m_CurrentCombo = NULL;
    this->m_UpdateHitsTask_Damage = NULL;
    this->m_AttackAxisTask = NULL;
    this->m_PressAttackTask = NULL;
    this->m_TaskBlock = NULL;
    this->m_SuperArmorEffect = NULL;
    this->m_Character = NULL;
    this->m_MovementAction = EMovementAction::Attack;
    this->m_NotifyDeflect = NULL;
}

bool UGameplayAbilityAttackBase::ShouldUpdateTaskUseComponentRotation_Scriptable_Implementation() {
    return false;
}

bool UGameplayAbilityAttackBase::ShouldCheckMovementMode_Scriptable_Implementation() const {
    return false;
}

void UGameplayAbilityAttackBase::OnValidData(const FGameplayAbilityTargetDataHandle& TargetData) {
}

void UGameplayAbilityAttackBase::OnResetStates() {
}

void UGameplayAbilityAttackBase::OnPressRoll() {
}

void UGameplayAbilityAttackBase::OnPressDodge() {
}

void UGameplayAbilityAttackBase::OnOverlapExit(const AActor* Actor) {
}

void UGameplayAbilityAttackBase::OnOverlapEnterDeflect(UPrimitiveComponent* HitComp, const FHitResult Hit) {
}

void UGameplayAbilityAttackBase::OnOverlapEnterDamage(UPrimitiveComponent* HitComp, const FHitResult Hit) {
}

void UGameplayAbilityAttackBase::OnMovementModeChanged(TEnumAsByte<EMovementMode> NewMovementMode) {
}

void UGameplayAbilityAttackBase::OnMoveAfterResetState() {
}

void UGameplayAbilityAttackBase::OnEndAbility_Scriptable_Implementation(const FGameplayAbilityActorInfo& GAActorInfo, bool WasCancelled) {
}

void UGameplayAbilityAttackBase::OnBlockPressed() {
}

void UGameplayAbilityAttackBase::OnAttackInput(FGameplayTag Direction) {
}

void UGameplayAbilityAttackBase::OnAskedForMagnetTarget() {
}

void UGameplayAbilityAttackBase::OnActivateAbility_Scriptable_Implementation(const FGameplayAbilityActorInfo& GAActorInfo, const FGameplayEventData& TriggerEventData) {
}


