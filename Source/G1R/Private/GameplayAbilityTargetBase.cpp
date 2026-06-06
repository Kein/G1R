#include "GameplayAbilityTargetBase.h"

UGameplayAbilityTargetBase::UGameplayAbilityTargetBase() {
    this->ReplicationPolicy = EGameplayAbilityReplicationPolicy::ReplicateYes;
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->m_Target = NULL;
}

void UGameplayAbilityTargetBase::QueryPotentialTargetsAround(TArray<USceneComponent*>& Targets, float Radius) const {
}

void UGameplayAbilityTargetBase::OnTargetVisualLost() {
}

void UGameplayAbilityTargetBase::OnTargetFound(USceneComponent* Target) {
}

void UGameplayAbilityTargetBase::OnTargetData(const FGameplayAbilityTargetDataHandle& TargetData) {
}

void UGameplayAbilityTargetBase::OnSelectTargetMouseDirectionClient(const FInputActionInstance& Instance) {
}

void UGameplayAbilityTargetBase::OnSelectNextTargetClient(const FInputActionInstance& Instance) {
}

void UGameplayAbilityTargetBase::FindTarget() {
}


