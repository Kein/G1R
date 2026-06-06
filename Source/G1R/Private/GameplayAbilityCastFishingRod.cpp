#include "GameplayAbilityCastFishingRod.h"

UGameplayAbilityCastFishingRod::UGameplayAbilityCastFishingRod() {
    this->ReplicationPolicy = EGameplayAbilityReplicationPolicy::ReplicateYes;
    this->AbilityTriggers.AddDefaulted(1);
    this->m_CarryComponent = NULL;
    this->m_CastTask = NULL;
}

void UGameplayAbilityCastFishingRod::Server_Fire_Implementation(const FTransform CameraTransform) {
}

void UGameplayAbilityCastFishingRod::OnShoot() {
}

void UGameplayAbilityCastFishingRod::OnReleaseAttack() {
}

void UGameplayAbilityCastFishingRod::OnPressAttack() {
}


