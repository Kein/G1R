#include "GothicFlyPathfollowingComponent.h"
#include "ENavigationType.h"

UGothicFlyPathfollowingComponent::UGothicFlyPathfollowingComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ZDivergeNavigationType = ENavigationType::Fly;
}


