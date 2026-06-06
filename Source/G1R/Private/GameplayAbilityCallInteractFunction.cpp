#include "GameplayAbilityCallInteractFunction.h"

UGameplayAbilityCallInteractFunction::UGameplayAbilityCallInteractFunction() {
    this->ReplicationPolicy = EGameplayAbilityReplicationPolicy::ReplicateYes;
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->AbilityTriggers.AddDefaulted(1);
    this->m_MoveToLocation = false;
    this->m_InteractiveObjectActor = NULL;
    this->m_CharMontage = NULL;
    this->m_InteractiveObjectMontage = NULL;
    this->m_InteractDefinition = NULL;
}

void UGameplayAbilityCallInteractFunction::OnItemConsumed(FGameplayEventData Payload) {
}

void UGameplayAbilityCallInteractFunction::HandleLeaveInput() {
}

FName UGameplayAbilityCallInteractFunction::GetMontageName_Scriptable_Implementation() {
    return NAME_None;
}


