#include "GameplayAbilityTraceTarget.h"

UGameplayAbilityTraceTarget::UGameplayAbilityTraceTarget() {
    this->ReplicationPolicy = EGameplayAbilityReplicationPolicy::ReplicateYes;
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::ServerInitiated;
    this->AbilityTriggers.AddDefaulted(1);
    this->m_ActivateAbilityOnGranted = true;
    this->m_TraceRange = 0.00f;
    this->m_TraceRadius = 0.00f;
    this->m_TraceRate = 0.25f;
    this->m_SpellConfig = NULL;
    this->m_CollisionChannel = ECC_WorldStatic;
    this->m_DrawDebugType = EDrawDebugTrace::None;
    this->m_AbComp = NULL;
    this->m_ExecutionValidator = NULL;
}

void UGameplayAbilityTraceTarget::SetTarget(AActor* Target) {
}

void UGameplayAbilityTraceTarget::RemoveTag(const FGameplayTag& NewTag) {
}








AActor* UGameplayAbilityTraceTarget::GetTarget() {
    return NULL;
}

bool UGameplayAbilityTraceTarget::DoTraceToTarget(FHitResult& OutHit, AActor* TracedActor) {
    return false;
}

void UGameplayAbilityTraceTarget::AddTag(const FGameplayTag& NewTag) {
}


