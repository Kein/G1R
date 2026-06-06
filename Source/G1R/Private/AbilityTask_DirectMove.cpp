#include "AbilityTask_DirectMove.h"

UAbilityTask_DirectMove::UAbilityTask_DirectMove() {
    this->ReachDistance = 0.00f;
    this->ProjectionRadius = 0.00f;
    this->bProjectTargetLocation = false;
}

UAbilityTask_DirectMove* UAbilityTask_DirectMove::TaskDirectMoveTowardsNavMeshLocation(UGameplayAbility* OwningAbility, const FVector& NewTargetLocation, float NewReachDistance, float NewProjectionRadius) {
    return NULL;
}

UAbilityTask_DirectMove* UAbilityTask_DirectMove::TaskDirectMoveTowardsLocation(UGameplayAbility* OwningAbility, const FVector& NewTargetLocation, float NewReachDistance) {
    return NULL;
}


