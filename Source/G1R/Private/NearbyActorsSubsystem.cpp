#include "NearbyActorsSubsystem.h"
#include "Templates/SubclassOf.h"

UNearbyActorsSubsystem::UNearbyActorsSubsystem() {
    this->DefaultTrackedActorClasses.AddDefaulted(5);
    this->DefaultTrackedComponentClasses.AddDefaulted(2);
}

void UNearbyActorsSubsystem::TrackDynamicallyCreatedComponent(USceneComponent* Component) {
}

void UNearbyActorsSubsystem::TrackComponentsOfClass(TSubclassOf<USceneComponent> Class) {
}

void UNearbyActorsSubsystem::TrackActorsOfClass(TSubclassOf<AActor> Class) {
}

void UNearbyActorsSubsystem::StopTrackingDynamicallyCreatedComponent(USceneComponent* Component) {
}

void UNearbyActorsSubsystem::StopTrackingComponentsOfClass(TSubclassOf<USceneComponent> Class) {
}

void UNearbyActorsSubsystem::StopTrackingActorsOfClass(TSubclassOf<AActor> Class) {
}

bool UNearbyActorsSubsystem::IsTrackingComponentClass(TSubclassOf<USceneComponent> Class) {
    return false;
}

bool UNearbyActorsSubsystem::IsTrackingActorClass(TSubclassOf<AActor> Class) {
    return false;
}

void UNearbyActorsSubsystem::HandleActorEndPlay(AActor* Actor, TEnumAsByte<EEndPlayReason::Type> Reason) {
}

TArray<USceneComponent*> UNearbyActorsSubsystem::FindComponentsOfClassInRadius(TSubclassOf<USceneComponent> Class, const FVector& Center, float Radius) const {
    return TArray<USceneComponent*>();
}

TArray<USceneComponent*> UNearbyActorsSubsystem::FindComponentsOfClassInBox(TSubclassOf<USceneComponent> Class, const FBox& Box) const {
    return TArray<USceneComponent*>();
}

TArray<AActor*> UNearbyActorsSubsystem::FindActorsOfClassInRadius2D(TSubclassOf<AActor> Class, const FVector& Center, float Radius) const {
    return TArray<AActor*>();
}

TArray<AActor*> UNearbyActorsSubsystem::FindActorsOfClassInRadius(TSubclassOf<AActor> Class, const FVector& Center, float Radius) const {
    return TArray<AActor*>();
}

TArray<AActor*> UNearbyActorsSubsystem::FindActorsOfClassInBox(TSubclassOf<AActor> Class, const FBox& Box) const {
    return TArray<AActor*>();
}


