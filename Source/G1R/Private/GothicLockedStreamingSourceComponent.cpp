#include "GothicLockedStreamingSourceComponent.h"

UGothicLockedStreamingSourceComponent::UGothicLockedStreamingSourceComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanEverAffectNavigation = false;
    this->Mobility = EComponentMobility::Static;
}


