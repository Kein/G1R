#include "AbilityTask_MoveIntoPositionForInteraction.h"

UAbilityTask_MoveIntoPositionForInteraction::UAbilityTask_MoveIntoPositionForInteraction() {
    this->MoveTask = NULL;
    this->TurnTask = NULL;
    this->AlignTask = NULL;
    this->bIsReadyToStartAnimation = false;
    this->MaxAlignDuringAnimationSecondsEstimate = 0.25f;
    this->MaxTotalAlignmentDurationSeconds = 0.25f;
    this->AngleDegreeDifferenceThatNeedsExplicitTurn = 45.00f;
    this->bTryPutOntoFloor = false;
    this->TurningSpeed = 90.00f;
    this->StartStrafingWhenWithinDistance = 100.00f;
}

void UAbilityTask_MoveIntoPositionForInteraction::HandleAlignmentFinished(UAbilityTaskGeneric* Task, EGenericTaskResult GenericTaskResult) {
}

UAbilityTask_MoveIntoPositionForInteraction* UAbilityTask_MoveIntoPositionForInteraction::BP_TaskMoveIntoPositionForInteraction(UGameplayAbility* OwningAbility, const FVector& InCharacterDestinationLocation, const FRotator& InDestinationRotation) {
    return NULL;
}


