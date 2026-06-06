#include "AbilityTask_UpdateClimb.h"

UAbilityTask_UpdateClimb::UAbilityTask_UpdateClimb() {
    this->m_ClimbingAnimConfig = NULL;
    this->m_ClimbingObject = NULL;
    this->m_ClimbingConfig = NULL;
}

UAbilityTask_UpdateClimb* UAbilityTask_UpdateClimb::CreateUpdateClimb(UGameplayAbility* OwningAbility, FName TaskInstanceName, FTransform EdgeTransform, UPrimitiveComponent* ClimbingObject, float ClimbAnimStartPos, EClimbType ClimbingType, FTransform ClimbingEdgeAnimStartOffset, FTransform ClimbingEdgeStartOffset, bool CalculateEdgeHeightFromFeetLocation) {
    return NULL;
}


