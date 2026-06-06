#include "GameplayAbilityRide.h"

UGameplayAbilityRide::UGameplayAbilityRide() {
    this->ReplicationPolicy = EGameplayAbilityReplicationPolicy::ReplicateYes;
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->AbilityTriggers.AddDefaulted(2);
    this->m_MountClass = NULL;
    this->m_PlayMontageTask = NULL;
    this->m_UpdateTraverseTask = NULL;
    this->m_SmoothPositionToSaddleTask = NULL;
    this->m_SmoothPitchToZeroTask = NULL;
}

void UGameplayAbilityRide::UnFixCharacterFromSaddle() {
}

void UGameplayAbilityRide::StartUnmounting(ERiderLocation UnmountLocation) {
}

void UGameplayAbilityRide::PlayMountingMontage() {
}

void UGameplayAbilityRide::OnMountPawnSet(APlayerState* PlayerState, APawn* NewPawn, APawn* OldPawn) {
}

void UGameplayAbilityRide::OnMountInterrumped() {
}

void UGameplayAbilityRide::OnMountingCompleted() {
}

void UGameplayAbilityRide::OnMountBreakArmorMontagePlayed(UAnimMontage* Montage) {
}

void UGameplayAbilityRide::OnDismountInterrumped() {
}

void UGameplayAbilityRide::OnDismountFinished() {
}

void UGameplayAbilityRide::OnBreakSuperArmor() {
}


