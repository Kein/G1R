#include "GameplayAbilityDefeated.h"

UGameplayAbilityDefeated::UGameplayAbilityDefeated() {
    this->ReplicationPolicy = EGameplayAbilityReplicationPolicy::ReplicateYes;
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::ServerInitiated;
    this->AbilityTriggers.AddDefaulted(3);
    this->m_StandUpEffect = NULL;
    this->m_TimeToStandUp = 5.00f;
    this->m_StandUpTask = NULL;
    this->m_PlayMontageTaskHit = NULL;
    this->m_PlayMontageTaskLoop = NULL;
    this->m_PlayMontageTaskStandUp = NULL;
    this->m_DefeatedGE = NULL;
    this->DynamicNavObstacle = NULL;
}

void UGameplayAbilityDefeated::Server_ApplyGameplayEffect_Implementation() {
}

void UGameplayAbilityDefeated::OnStandUpTaskFinished() {
}

void UGameplayAbilityDefeated::OnStandUpCompleted() {
}

void UGameplayAbilityDefeated::OnHitCompleted() {
}



void UGameplayAbilityDefeated::CreateStandupTask() {
}


