#include "AbilityTask_TurnTo.h"

UAbilityTask_TurnTo::UAbilityTask_TurnTo() {
    this->RealtimeTaskStarted = 0.00f;
    this->TurnOnSpotAsset = NULL;
    this->TurnMontageTask = NULL;
    this->TurnDurationSeconds = 0.00f;
    this->MinAngleDifferenceForUsingAnimation = 0.00f;
    this->MinAngleDifferenceToSkipAnyTurn = 0.00f;
    this->EasingFunction = EEasingFunc::EaseInOut;
}

UAbilityTask_TurnTo* UAbilityTask_TurnTo::TaskTurnToPosition(UGameplayAbility* OwningAbility, const FVector& position, float NewMinAngleDifferenceForUsingAnimation, float NewMinAngleDifferenceToSkipAnyTurn) {
    return NULL;
}

UAbilityTask_TurnTo* UAbilityTask_TurnTo::TaskTurnToDirection(UGameplayAbility* OwningAbility, const FVector& NewDirection, float NewMinAngleDifferenceForUsingAnimation, float NewMinAngleDifferenceToSkipAnyTurn) {
    return NULL;
}

UAbilityTask_TurnTo* UAbilityTask_TurnTo::TaskTurnToActor(UGameplayAbility* OwningAbility, const AActor* Actor, float NewMinAngleDifferenceForUsingAnimation, float NewMinAngleDifferenceToSkipAnyTurn) {
    return NULL;
}

void UAbilityTask_TurnTo::SetTargetPosition(const FVector& NewPosition) {
}

void UAbilityTask_TurnTo::SetTargetDirection(const FVector& NewDirection) {
}

float UAbilityTask_TurnTo::GetTurnDoneRatio() const {
    return 0.0f;
}


