#include "PreferredLocationComponent.h"

UPreferredLocationComponent::UPreferredLocationComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

bool UPreferredLocationComponent::TryGetRememberedLocationOriginalName(FName RememberedLocationName, FName& originalName) const {
    return false;
}

bool UPreferredLocationComponent::TryGetRememberedLocation(FName RememberedLocationName, FVector& Location) const {
    return false;
}

void UPreferredLocationComponent::RememberPositionAs(FName RememberAs, FVector position, float Radius) {
}

void UPreferredLocationComponent::RememberInteractionSpotAs(FName RememberAs, FInteractionSpotHandle InteractionSpot, float Radius) {
}

void UPreferredLocationComponent::PreferSpawnpoint(float Radius) {
}

void UPreferredLocationComponent::PreferPosition(FVector position, float Radius) {
}

bool UPreferredLocationComponent::PreferLocationKnownAs(FName RememberedLocationName, float Radius) {
    return false;
}

void UPreferredLocationComponent::PreferInteractionSpot(FInteractionSpotHandle Spot, float Radius) {
}

void UPreferredLocationComponent::PreferAnywhere() {
}

bool UPreferredLocationComponent::KnowsLocation(FName RememberedLocationName) const {
    return false;
}

bool UPreferredLocationComponent::IsRememberingThisLocationName(FName RememberedLocationName) const {
    return false;
}

bool UPreferredLocationComponent::IsPreferringAnyGivenWaypointByName(const TArray<FName>& WaypointNames, int32& OutIdx) const {
    return false;
}

bool UPreferredLocationComponent::IsPositionInside(const FVector& position) const {
    return false;
}

bool UPreferredLocationComponent::IsInside() const {
    return false;
}

bool UPreferredLocationComponent::HasPreferredLocation() const {
    return false;
}

FVector UPreferredLocationComponent::GetRandomPointWithin() const {
    return FVector{};
}

float UPreferredLocationComponent::GetRadiusFromCenter() const {
    return 0.0f;
}

float UPreferredLocationComponent::GetDistanceFromSelf() const {
    return 0.0f;
}

float UPreferredLocationComponent::GetDistanceFromPosition(const FVector& position) const {
    return 0.0f;
}

float UPreferredLocationComponent::GetDistanceFromActor(const AActor* Actor) const {
    return 0.0f;
}

FVector UPreferredLocationComponent::GetCenterPoint() const {
    return FVector{};
}

bool UPreferredLocationComponent::GetCenterAndRadius(FVector& OutCenter, float& OutRadius) const {
    return false;
}


