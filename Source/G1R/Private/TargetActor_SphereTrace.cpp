#include "TargetActor_SphereTrace.h"
#include "Templates/SubclassOf.h"

ATargetActor_SphereTrace::ATargetActor_SphereTrace(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TraceSphereRadius = 100.00f;
}

void ATargetActor_SphereTrace::Configure(const FGameplayAbilityTargetingLocationInfo& InStartLocation, FCollisionProfileName InTraceProfile, FGameplayTargetDataFilterHandle InFilter, TSubclassOf<AGameplayAbilityWorldReticle> InReticleClass, const FWorldReticleParameters& InReticleParams, bool bInIgnoreBlockingHits, bool bInShouldProduceTargetDataOnServer, bool bInUsePersistentHitResults, bool bInDebug, bool bInTraceAffectsAimPitch, bool bInTraceFromPlayerViewPoint, float InMaxRange, float InTraceSphereRadius, int32 InMaxHitResultsPerTrace) {
}


