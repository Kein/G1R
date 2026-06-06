#include "AbilityTask_TriggerWallClimb.h"

UAbilityTask_TriggerWallClimb::UAbilityTask_TriggerWallClimb() {
    this->ClimbableWall = NULL;
}

UAbilityTask_TriggerWallClimb* UAbilityTask_TriggerWallClimb::TaskWallClimb(UGameplayAbility* OwningAbility, AClimbableWall* NewClimbableWall, FGameplayTag Tag) {
    return NULL;
}

void UAbilityTask_TriggerWallClimb::OnWallClimbTagChanged(const FGameplayTag InTag, int32 NewCount) {
}


