#include "GameplayAbilityBlockingInteraction.h"

UGameplayAbilityBlockingInteraction::UGameplayAbilityBlockingInteraction() {
    this->m_RotateTask = NULL;
    this->m_UpdateRotation = false;
    this->m_UseCameraTarget = true;
    this->m_UseCameraTeleport = false;
    this->m_MoveToLocation = true;
    this->m_StartBeforeRotation = false;
    this->m_ApplyCooldown = false;
    this->m_TaskMoveTo = NULL;
    this->m_InteractEntryDirection = EInteractionSpotEntryDirection::Front;
    this->m_UnEquip = NULL;
    this->m_UnEquipBefore = true;
    this->m_InstantUnEquip = false;
    this->m_UnEquipIgnoreDrop = false;
}

void UGameplayAbilityBlockingInteraction::SetUnEquipTask() {
}

void UGameplayAbilityBlockingInteraction::SetMoveToTask() {
}

void UGameplayAbilityBlockingInteraction::OnUnEquipEnded_Internal() {
}

void UGameplayAbilityBlockingInteraction::OnMoveToTaskFinishMove() {
}

void UGameplayAbilityBlockingInteraction::OnMoveToTaskEnded(UAbilityTaskGeneric* MoveToTask, EGenericTaskResult Result) {
}

void UGameplayAbilityBlockingInteraction::HandleOnResetState() {
}


