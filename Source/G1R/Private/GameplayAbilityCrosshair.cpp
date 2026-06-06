#include "GameplayAbilityCrosshair.h"

UGameplayAbilityCrosshair::UGameplayAbilityCrosshair() {
    this->ReplicationPolicy = EGameplayAbilityReplicationPolicy::ReplicateYes;
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::LocalOnly;
    this->m_ActivateAbilityOnGranted = true;
    this->m_ReachabilityRadius = 1.00f;
    this->m_ReachabilityRange = 200.00f;
    this->m_HUDCrosshairController = NULL;
    this->m_ReachableTargetIndicatorComponent = NULL;
}


