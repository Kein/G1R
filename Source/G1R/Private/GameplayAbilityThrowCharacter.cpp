#include "GameplayAbilityThrowCharacter.h"

UGameplayAbilityThrowCharacter::UGameplayAbilityThrowCharacter() {
    this->ReplicationPolicy = EGameplayAbilityReplicationPolicy::ReplicateYes;
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::LocalPredicted;
    this->m_ActivateAbilityOnGranted = true;
}


