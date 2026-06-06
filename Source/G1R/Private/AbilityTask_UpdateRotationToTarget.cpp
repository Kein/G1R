#include "AbilityTask_UpdateRotationToTarget.h"

UAbilityTask_UpdateRotationToTarget::UAbilityTask_UpdateRotationToTarget() {
    this->m_MagnetTarget = NULL;
    this->m_MoveComp = NULL;
}

UAbilityTask_UpdateRotationToTarget* UAbilityTask_UpdateRotationToTarget::CreateUpdateRotationToTarget(UGameplayAbility* OwningAbility, FName TaskInstanceName, USceneComponent* TargetComp, float RotationSpeed) {
    return NULL;
}


