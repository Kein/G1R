#include "GameplayAbilityLever.h"

UGameplayAbilityLever::UGameplayAbilityLever() {
    this->ReplicationPolicy = EGameplayAbilityReplicationPolicy::ReplicateYes;
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->AbilityTriggers.AddDefaulted(1);
    this->m_ApplyCooldown = true;
    this->m_CharMontage = NULL;
    this->m_InteractiveObjectMontage = NULL;
    this->m_CharMontageTask = NULL;
    this->m_InteractiveObjectActor = NULL;
    this->m_TriggerExtraData = NULL;
    this->m_InteractDefinition = NULL;
    this->m_Character = NULL;
}

void UGameplayAbilityLever::Server_HandleLeaveInput_Implementation(bool forced) {
}

void UGameplayAbilityLever::Multicast_HandleLeaveInput_Implementation(bool forced) {
}

void UGameplayAbilityLever::HandleLeaveInputEvent() {
}

FName UGameplayAbilityLever::GetMontageName_Scriptable_Implementation() {
    return NAME_None;
}

void UGameplayAbilityLever::EventAnimIdleEnd(FGameplayEventData Payload) {
}

void UGameplayAbilityLever::EventAnimIdle(FGameplayEventData Payload) {
}

void UGameplayAbilityLever::EventAnimEnd(FGameplayEventData Payload) {
}

void UGameplayAbilityLever::DamageReceived(FGameplayEventData Payload) {
}


