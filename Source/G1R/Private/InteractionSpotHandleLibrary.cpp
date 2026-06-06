#include "InteractionSpotHandleLibrary.h"

UInteractionSpotHandleLibrary::UInteractionSpotHandleLibrary() {
}

void UInteractionSpotHandleLibrary::UNSET(FInteractionSpotHandle& Handle) {
}

void UInteractionSpotHandleLibrary::SetTransform(const FInteractionSpotHandle& Handle, const FTransform& NewTransform, const UObject* WorldContextObject) {
}

FGameplayTag UInteractionSpotHandleLibrary::SelectMatchingMoreSpecificAction(const FInteractionSpotHandle& Handle, FGameplayTag Action, const UObject* WorldContextObject) {
    return FGameplayTag{};
}

bool UInteractionSpotHandleLibrary::IsValid(const FInteractionSpotHandle& Handle, const UObject* WorldContextObject) {
    return false;
}

bool UInteractionSpotHandleLibrary::IsUsedBy(const FInteractionSpotHandle& Handle, AGothicCharacterState* PotentialUser) {
    return false;
}

bool UInteractionSpotHandleLibrary::IsUnclaimed(const FInteractionSpotHandle& Handle, const UObject* WorldContextObject) {
    return false;
}

bool UInteractionSpotHandleLibrary::IsSet(const FInteractionSpotHandle& Handle) {
    return false;
}

bool UInteractionSpotHandleLibrary::IsLocationWithinRange2D(const FInteractionSpotHandle& Handle, const FVector2D& Location, float Radius, const UObject* WorldContextObject) {
    return false;
}

bool UInteractionSpotHandleLibrary::IsLocationWithinRange(const FInteractionSpotHandle& Handle, const FVector& Location, float Radius, const UObject* WorldContextObject) {
    return false;
}

bool UInteractionSpotHandleLibrary::IsInCooldown(const FInteractionSpotHandle& Handle, const UObject* WorldContextObject) {
    return false;
}

bool UInteractionSpotHandleLibrary::IsCustomUseConditionFulfilled(const FInteractionSpotHandle& Handle, AGothicCharacterState* PotentialUser, FGameplayTag Action) {
    return false;
}

bool UInteractionSpotHandleLibrary::IsClaimedBy(const FInteractionSpotHandle& Handle, AGothicCharacterState* PotentialUser) {
    return false;
}

bool UInteractionSpotHandleLibrary::IsAnyOfActionsPossibleHere(const FInteractionSpotHandle& Handle, const FGameplayTagContainer& Actions, const UObject* WorldContextObject) {
    return false;
}

bool UInteractionSpotHandleLibrary::IsAllowingAnyOrientationWhenUsing(const FInteractionSpotHandle& Handle, const UObject* WorldContextObject) {
    return false;
}

bool UInteractionSpotHandleLibrary::IsActionPossibleHere(const FInteractionSpotHandle& Handle, FGameplayTag Action, const UObject* WorldContextObject) {
    return false;
}

void UInteractionSpotHandleLibrary::Invalidate(FInteractionSpotHandle& Handle) {
}

FTransform UInteractionSpotHandleLibrary::GetTransform(const FInteractionSpotHandle& Handle, const UObject* WorldContextObject) {
    return FTransform{};
}

float UInteractionSpotHandleLibrary::GetPathCostFrom(const FInteractionSpotHandle& Handle, const AGothicCharacterState* PotentialUser) {
    return 0.0f;
}

FVector UInteractionSpotHandleLibrary::GetLocation(const FInteractionSpotHandle& Handle, const UObject* WorldContextObject) {
    return FVector{};
}

FVector UInteractionSpotHandleLibrary::GetForwardDirection(const FInteractionSpotHandle& Handle, const UObject* WorldContextObject) {
    return FVector{};
}

float UInteractionSpotHandleLibrary::GetDistanceToActor(const FInteractionSpotHandle& Handle, AActor* Actor) {
    return 0.0f;
}

float UInteractionSpotHandleLibrary::GetAreaRadius(const FInteractionSpotHandle& Handle, const UObject* WorldContextObject) {
    return 0.0f;
}

UAreaTagRegionTrait* UInteractionSpotHandleLibrary::GetAreaFromSpotHandle(const FInteractionSpotHandle& Handle, const UObject* WorldContextObject) {
    return NULL;
}

bool UInteractionSpotHandleLibrary::GetAllowsChainingActions(const FInteractionSpotHandle& Handle, const UObject* WorldContextObject) {
    return false;
}

FGameplayTagContainer UInteractionSpotHandleLibrary::GetAllAreasFromSpotHandle(const FInteractionSpotHandle& Handle, const UObject* WorldContextObject) {
    return FGameplayTagContainer{};
}

AActor* UInteractionSpotHandleLibrary::GetActorToInteractWith(const FInteractionSpotHandle& Handle, const UObject* WorldContextObject) {
    return NULL;
}

FInteractionSpotClaimToken UInteractionSpotHandleLibrary::Claim(FInteractionSpotHandle& Handle, AGothicCharacterState* User, FGameplayTag Action) {
    return FInteractionSpotClaimToken{};
}

bool UInteractionSpotHandleLibrary::CanBeUsedBy_TryMultipleActions(const FInteractionSpotHandle& Handle, AGothicCharacterState* PotentialUser, FGameplayTagContainer Actions) {
    return false;
}

bool UInteractionSpotHandleLibrary::CanBeUsedBy(const FInteractionSpotHandle& Handle, AGothicCharacterState* PotentialUser, FGameplayTag Action) {
    return false;
}

bool UInteractionSpotHandleLibrary::CanBeClaimedBy_TryMultipleActions(const FInteractionSpotHandle& Handle, AGothicCharacterState* PotentialUser, FGameplayTagContainer Actions) {
    return false;
}

bool UInteractionSpotHandleLibrary::CanBeClaimedBy(const FInteractionSpotHandle& Handle, AGothicCharacterState* PotentialUser, FGameplayTag Action) {
    return false;
}

FBox2D UInteractionSpotHandleLibrary::BoundingBox2D(const FInteractionSpotHandle& Handle, const UObject* WorldContextObject) {
    return FBox2D{};
}


