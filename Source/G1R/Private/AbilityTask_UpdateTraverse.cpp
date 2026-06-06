#include "AbilityTask_UpdateTraverse.h"

UAbilityTask_UpdateTraverse::UAbilityTask_UpdateTraverse() {
    this->m_Character = NULL;
    this->m_CharacterMovementComponent = NULL;
    this->m_Montage = NULL;
}

UAbilityTask_UpdateTraverse* UAbilityTask_UpdateTraverse::CreateUpdateTraverse(UGameplayAbility* OwningAbility, FName TaskInstanceName, bool UsingCustomTraversalInfo, FTraversalInfo& TraversalInfo, UAnimMontage* Montage, float PlayRate, FVector StartOffset, bool CalculateEdgeHeightFromFeetLocation) {
    return NULL;
}


