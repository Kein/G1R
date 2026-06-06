#include "AbilityTask_InteractionSpot.h"

UAbilityTask_InteractionSpot::UAbilityTask_InteractionSpot() {
    this->bForceCrowdIdleBehaviourToIgnoreMe = false;
    this->RequestedSubtaskTemplate = NULL;
    this->ParentTask = NULL;
    this->SecondsToSkipOnActivation = 0.00f;
    this->bPossibleAnywhere = false;
    this->bRequiresObjectToInteractWith = false;
    this->CurrentSubtask = NULL;
    this->bIsPartOfNavigation = false;
    this->bPutAwayItemInHandsBeforeInteraction = true;
    this->PreferredExitDirection = EInteractionSpotEntryDirection::None;
    this->EndInteractionBehavior = EInteractionEndBehavior::Normal;
    this->OtherInteractionEndBehaviorOnSwitch = EInteractionEndBehavior::Normal;
    this->bKeepCharacterZLocationForAlignment = false;
}

void UAbilityTask_InteractionSpot::TryUndrawItemThenFinishActivate() {
}

void UAbilityTask_InteractionSpot::RemoveOwnedTagsFromASC(const FGameplayTagContainer& Tags) {
}

void UAbilityTask_InteractionSpot::RemoveOwnedTagFromASC(const FGameplayTag& Tag) {
}

void UAbilityTask_InteractionSpot::PerformSubAction_Implementation(FGameplayTag ActionTag) {
}

FVector UAbilityTask_InteractionSpot::InverseTransformVectorLocalToUsedSpot(const FVector& WorldSpaceDirectionVector) const {
    return FVector{};
}

bool UAbilityTask_InteractionSpot::HasOwnedGameplayTag(const FGameplayTag& Tag) const {
    return false;
}

void UAbilityTask_InteractionSpot::HandleSubtaskEnded(UAbilityTaskGeneric* Task, EGenericTaskResult Result) {
}

void UAbilityTask_InteractionSpot::HandleMovementInput_Implementation(const FVector& LocalInputDirection) {
}

AActor* UAbilityTask_InteractionSpot::GetUsedActor() const {
    return NULL;
}

AGothicCharacter* UAbilityTask_InteractionSpot::GetSelf() const {
    return NULL;
}

void UAbilityTask_InteractionSpot::FinishActivate() {
}

bool UAbilityTask_InteractionSpot::CanSwitchToTaskNow_Implementation(UAbilityTask_InteractionSpot* Task) {
    return false;
}

bool UAbilityTask_InteractionSpot::CanHandleSubActionNow_Implementation(FGameplayTag ActionTag) {
    return false;
}


void UAbilityTask_InteractionSpot::AddOwnedTagToASC(const FGameplayTag& Tag) {
}


