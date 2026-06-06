#include "GameplayAbilityExecution.h"

UGameplayAbilityExecution::UGameplayAbilityExecution() {
    this->AbilityTriggers.AddDefaulted(1);
    this->m_UseCameraTarget = false;
    this->m_MoveToLocation = false;
    this->m_UnEquipBefore = false;
    this->m_PlayMontageTask = NULL;
    this->m_AlignTask = NULL;
    this->m_ItemSkill = EWeaponSkill::None;
}

void UGameplayAbilityExecution::ReachingPositionTimeOut() {
}

void UGameplayAbilityExecution::EventAnimHit(FGameplayEventData Payload) {
}


