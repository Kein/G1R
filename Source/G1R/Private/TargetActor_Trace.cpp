#include "TargetActor_Trace.h"

ATargetActor_Trace::ATargetActor_Trace(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bDestroyOnConfirmation = false;
    this->MaxRange = 999999.00f;
    this->bTraceAffectsAimPitch = true;
    this->MaxHitResultsPerTrace = 1;
    this->bIgnoreBlockingHits = false;
    this->bTraceFromPlayerViewPoint = false;
    this->bUsePersistentHitResults = false;
}

void ATargetActor_Trace::SetStartLocation(const FGameplayAbilityTargetingLocationInfo& InStartLocation) {
}

void ATargetActor_Trace::SetShouldProduceTargetDataOnServer(bool bInShouldProduceTargetDataOnServer) {
}

void ATargetActor_Trace::SetDestroyOnConfirmation(bool bInDestroyOnConfirmation) {
}


