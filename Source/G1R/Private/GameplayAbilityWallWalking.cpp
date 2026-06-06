#include "GameplayAbilityWallWalking.h"

UGameplayAbilityWallWalking::UGameplayAbilityWallWalking() {
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::LocalOnly;
    this->AbilityTriggers.AddDefaulted(1);
    this->m_ActivateAbilityOnGranted = true;
    this->m_TickEnabled = true;
    this->m_bCanEverTick = true;
    this->m_CheckWallWalkingTask = NULL;
    this->m_JumpMontage = NULL;
}

void UGameplayAbilityWallWalking::OnWallWalkableNotFound() {
}

void UGameplayAbilityWallWalking::OnWallWalkableFound(FHitResult hitPoint, bool junp) {
}

void UGameplayAbilityWallWalking::OnJumpFinished() {
}

bool UGameplayAbilityWallWalking::IsWallWalking() const {
    return false;
}


