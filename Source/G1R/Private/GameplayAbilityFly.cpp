#include "GameplayAbilityFly.h"

UGameplayAbilityFly::UGameplayAbilityFly() {
    this->ReplicationPolicy = EGameplayAbilityReplicationPolicy::ReplicateYes;
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::LocalPredicted;
    this->m_TickEnabled = true;
    this->m_bCanEverTick = true;
    this->m_flyConfig = NULL;
    this->m_CanLand = false;
}

void UGameplayAbilityFly::Server_Fall_Implementation() {
}

void UGameplayAbilityFly::OnLandedCallback(const FHitResult& Hit) {
}

void UGameplayAbilityFly::InputMoveDownUp(float AxisValue) {
}

void UGameplayAbilityFly::InputFlyUp(const FInputActionInstance& Instance) {
}

void UGameplayAbilityFly::InputFlyDown(const FInputActionInstance& Instance) {
}


