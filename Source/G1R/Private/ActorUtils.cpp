#include "ActorUtils.h"

UActorUtils::UActorUtils() {
}

void UActorUtils::SetComponentAffectsNavigation(UPrimitiveComponent* TargetComponent, bool ActivateNavigation) {
}

void UActorUtils::SetCanEverAffectNavigationForActor(const AActor* Actor, bool DoesAffectNavigation) {
}

bool UActorUtils::LineTraceToActor(const AActor* Actor, const FVector Start, const FVector End, TEnumAsByte<ECollisionChannel> TraceChannel, const UObject* WorldContextObject, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, bool bIgnoreSelf, FHitResult& OutHit) {
    return false;
}


