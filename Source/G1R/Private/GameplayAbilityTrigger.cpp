#include "GameplayAbilityTrigger.h"

UGameplayAbilityTrigger::UGameplayAbilityTrigger() {
    this->ReplicationPolicy = EGameplayAbilityReplicationPolicy::ReplicateYes;
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->AbilityTriggers.AddDefaulted(3);
    this->m_bCanEverTick = true;
    this->m_ApplyCooldown = true;
    this->m_CharMontageTask = NULL;
    this->m_InteractComp = NULL;
    this->m_CharMontage = NULL;
    this->m_InteractiveObjectMontage = NULL;
    this->m_TriggerExtraData = NULL;
    this->m_InteractiveObjectActor = NULL;
    this->m_WinchState = EWinchState::None;
    this->m_BufferedKey = EAbilityInputID::None;
    this->m_CanCancel = false;
    this->m_Character = NULL;
}

void UGameplayAbilityTrigger::Server_SetNextSection_Implementation(EWinchState NextSection, int32 NextSectionID) {
}

void UGameplayAbilityTrigger::HandleMontageTaskCompleted() {
}

void UGameplayAbilityTrigger::EventAnimWinchEnd(FGameplayEventData Payload) {
}

void UGameplayAbilityTrigger::EventAnimMoveStart(FGameplayEventData Payload) {
}

void UGameplayAbilityTrigger::DamageReceived(FGameplayEventData Payload) {
}

void UGameplayAbilityTrigger::Client_SetNextSection_Implementation(EWinchState NextSection, int32 NextSectionID) {
}


