#include "GameplayAbilityMovementOverride.h"

UGameplayAbilityMovementOverride::UGameplayAbilityMovementOverride() {
    this->ReplicationPolicy = EGameplayAbilityReplicationPolicy::ReplicateYes;
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::ServerInitiated;
    this->AbilityTriggers.AddDefaulted(1);
    this->m_AllowedWalkSpeed = EWalkSpeed::Walking;
}


