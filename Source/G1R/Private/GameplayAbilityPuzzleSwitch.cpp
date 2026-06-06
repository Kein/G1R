#include "GameplayAbilityPuzzleSwitch.h"

UGameplayAbilityPuzzleSwitch::UGameplayAbilityPuzzleSwitch() {
    this->ReplicationPolicy = EGameplayAbilityReplicationPolicy::ReplicateYes;
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->AbilityTriggers.AddDefaulted(1);
    this->m_bCanEverTick = true;
    this->m_ApplyCooldown = true;
    this->m_CharMontageTask = NULL;
    this->m_NewTaskIdle = NULL;
    this->m_InteractiveObjectActor = NULL;
    this->m_TriggerExtraData = NULL;
    this->m_CanCancel = false;
}

void UGameplayAbilityPuzzleSwitch::Server_SetNextSection_Implementation(FName NextSectionName, int32 currentStep, FName puzzleName) {
}

void UGameplayAbilityPuzzleSwitch::HandleMoveInput(const FInputActionInstance& Instance) {
}

void UGameplayAbilityPuzzleSwitch::HandleMontageIdleEvent(FGameplayEventData Payload) {
}

void UGameplayAbilityPuzzleSwitch::HandleLeaveInput() {
}


