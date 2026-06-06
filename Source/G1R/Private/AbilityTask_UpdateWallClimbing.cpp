#include "AbilityTask_UpdateWallClimbing.h"

UAbilityTask_UpdateWallClimbing::UAbilityTask_UpdateWallClimbing() {
    this->m_CharacterMovementComponent = NULL;
    this->m_verticalPelvisOffset = 0.00f;
    this->m_ClimbableWall = NULL;
}

UAbilityTask_UpdateWallClimbing* UAbilityTask_UpdateWallClimbing::CreateUpdateWallClimbing(UGameplayAbility* OwningAbility, FName TaskInstanceName, AClimbableWall* ClimbableWall, FTraversalInfo& TraversalInfo, float PlayRate, FVector StartOffset, bool CalculateEdgeHeightFromFeetLocation) {
    return NULL;
}

void UAbilityTask_UpdateWallClimbing::CheckWallLimits() {
}


