#include "GameplayAbilityInteractWallClimb.h"

UGameplayAbilityInteractWallClimb::UGameplayAbilityInteractWallClimb() {
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->AbilityTriggers.AddDefaulted(1);
    this->m_TaskMoveTo = NULL;
    this->m_TaskAlign = NULL;
    this->m_maxTime = 4.00f;
}

void UGameplayAbilityInteractWallClimb::StartClimbing() {
}

void UGameplayAbilityInteractWallClimb::OnWeaponUnequipped() {
}

void UGameplayAbilityInteractWallClimb::OnPositionReached(UAbilityTaskGeneric* Task, EGenericTaskResult Result) {
}

void UGameplayAbilityInteractWallClimb::OnClimb(const FTraversalInfo& climbingInfo) {
}


