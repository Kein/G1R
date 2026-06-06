#include "AbilityTask_Follow.h"

UAbilityTask_Follow::UAbilityTask_Follow() {
    this->TurnToTask = NULL;
    this->SpeakTask = NULL;
    this->MoveOutOfTheWayTask = NULL;
    this->bMatchTargetWalkSpeed = true;
    this->SprintWhenFurtherAwayThan = -1.00f;
    this->WalkSpeedChangeNoticeDelay = 0.30f;
    this->LastTimeWalkSpeedChanged = 0.00f;
}

UAbilityTask_Follow* UAbilityTask_Follow::TaskFollowWithWorldOffset(UGameplayAbility* OwningAbility, AActor* Actor, const FVector& WorldOffsetLocation, float ReachDistance, bool bCanStrafe, bool bShouldMoveOutOfTheWay) {
    return NULL;
}

UAbilityTask_Follow* UAbilityTask_Follow::TaskFollowWithRelativeOffset(UGameplayAbility* OwningAbility, AActor* Actor, const FVector& InBasedOffsetLocation, float ReachDistance, bool bCanStrafe, bool bShouldMoveOutOfTheWay) {
    return NULL;
}

UAbilityTask_Follow* UAbilityTask_Follow::TaskFollow(UGameplayAbility* OwningAbility, AActor* Actor, float ReachDistance, bool bCanStrafe, bool bShouldMoveOutOfTheWay) {
    return NULL;
}

void UAbilityTask_Follow::OnPossessedPawnChanged(APawn* OldPawn, APawn* NewPawn) {
}

bool UAbilityTask_Follow::IsFollowing(AActor* Actor) const {
    return false;
}

void UAbilityTask_Follow::HandleGoalActorSpawned(AGothicNPCState* GothicNPCState, AGothicCharacter* Character) {
}

void UAbilityTask_Follow::HandleGoalActorDespawned(AGothicNPCState* GothicNPCState) {
}

bool UAbilityTask_Follow::CanFollow(const AGothicCharacter* Character, AActor* Actor, float ReachDistance) {
    return false;
}


