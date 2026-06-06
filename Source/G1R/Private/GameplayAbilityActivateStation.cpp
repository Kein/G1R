#include "GameplayAbilityActivateStation.h"

UGameplayAbilityActivateStation::UGameplayAbilityActivateStation() {
    this->ReplicationPolicy = EGameplayAbilityReplicationPolicy::ReplicateYes;
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->AbilityTriggers.AddDefaulted(1);
    this->m_CharMontage = NULL;
    this->m_InteractiveObjectMontage = NULL;
    this->m_CharMontageTask = NULL;
    this->m_InteractiveObjectActor = NULL;
    this->m_Character = NULL;
}

void UGameplayAbilityActivateStation::DamageReceived(FGameplayEventData Payload) {
}


