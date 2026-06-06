#include "GothicDivePathfollowingComponent.h"
#include "ENavigationType.h"

UGothicDivePathfollowingComponent::UGothicDivePathfollowingComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ZDivergeNavigationType = ENavigationType::Swim;
}


