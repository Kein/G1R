#include "AbilityTask_StateBasedAction.h"

UAbilityTask_StateBasedAction::UAbilityTask_StateBasedAction() {
    this->Stage = EStateBasedActionStage::None;
    this->bEndWhenEnteredState = false;
    this->bOnlyEndOnShouldEndNow = false;
    this->bCanEndEarly = true;
    this->bBlockStateMachineWhileBlocked = false;
}

void UAbilityTask_StateBasedAction::OnStateTagCountChanged(const FGameplayTag InTag, int32 NewCount) {
}

void UAbilityTask_StateBasedAction::OnActionCompletedCallback() {
}


