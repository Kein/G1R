#include "GameplayAbilityPivot.h"

UGameplayAbilityPivot::UGameplayAbilityPivot() {
    this->m_ActivateAbilityOnGranted = true;
    this->m_TickEnabled = true;
    this->m_bCanEverTick = true;
    this->m_RotateTask = NULL;
    this->m_KeepUpdatingRotation = false;
}

void UGameplayAbilityPivot::ResetValues() {
}


