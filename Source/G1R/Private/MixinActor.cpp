#include "MixinActor.h"

UMixinActor::UMixinActor() {
}

float UMixinActor::GetSimpleCollisionRadius(const AActor* This) {
    return 0.0f;
}

float UMixinActor::GetSimpleCollisionHalfHeight(const AActor* This) {
    return 0.0f;
}

FVector UMixinActor::GetSimpleCollisionCylinderExtent(const AActor* This) {
    return FVector{};
}

void UMixinActor::GetSimpleCollisionCylinder(const AActor* This, float& CollisionRadius, float& CollisionHalfHeight) {
}

void UMixinActor::GetComponentsBoundingCylinder(const AActor* This, float& CollisionRadius, float& CollisionHalfHeight, bool bNonColliding, bool bIncludeFromChildActors) {
}


