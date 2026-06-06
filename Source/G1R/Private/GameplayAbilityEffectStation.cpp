#include "GameplayAbilityEffectStation.h"

UGameplayAbilityEffectStation::UGameplayAbilityEffectStation() {
    this->ReplicationPolicy = EGameplayAbilityReplicationPolicy::ReplicateYes;
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->AbilityTriggers.AddDefaulted(1);
    this->m_CharMontageTask = NULL;
    this->m_InteractionAnim = NULL;
    this->m_InteractiveObjectActor = NULL;
}

void UGameplayAbilityEffectStation::EventApplyEffect(FGameplayEventData Payload) {
}


