#include "AbilityTask_JumpToWallClimbing.h"

UAbilityTask_JumpToWallClimbing::UAbilityTask_JumpToWallClimbing() {
    this->ClimbableWall = NULL;
    this->JumpTask = NULL;
    this->TriggerWallClimbTask = NULL;
}

void UAbilityTask_JumpToWallClimbing::OnWallClimbTaskEnded(UAbilityTaskGeneric* Task, EGenericTaskResult Result) {
}

void UAbilityTask_JumpToWallClimbing::OnJumpTaskEnded(UAbilityTaskGeneric* Task, EGenericTaskResult Result) {
}


