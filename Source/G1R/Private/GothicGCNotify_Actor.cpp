#include "GothicGCNotify_Actor.h"

AGothicGCNotify_Actor::AGothicGCNotify_Actor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

bool AGothicGCNotify_Actor::HasExecutedOnRemove() {
    return false;
}

UCueVisualConfig* AGothicGCNotify_Actor::GetCueVisualConfig(AActor* MyTarget) const {
    return NULL;
}


