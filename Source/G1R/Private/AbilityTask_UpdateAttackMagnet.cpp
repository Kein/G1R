#include "AbilityTask_UpdateAttackMagnet.h"

UAbilityTask_UpdateAttackMagnet::UAbilityTask_UpdateAttackMagnet() {
    this->m_CombatConfig = NULL;
}

void UAbilityTask_UpdateAttackMagnet::UpdateRootMotion() {
}

UAbilityTask_UpdateAttackMagnet* UAbilityTask_UpdateAttackMagnet::UpdateAttackMagnet(UGameplayAbility* OwningAbility, FName TaskInstanceName, float Range, float DistanceAfterAttack, float RMScaleIncreaseRate, const UAnimNotifyState_MeleeMagnet* magnetNotify, USceneComponent* Target) {
    return NULL;
}

void UAbilityTask_UpdateAttackMagnet::AskForATarget() const {
}


