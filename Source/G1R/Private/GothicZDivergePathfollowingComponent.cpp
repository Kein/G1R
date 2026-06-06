#include "GothicZDivergePathfollowingComponent.h"

UGothicZDivergePathfollowingComponent::UGothicZDivergePathfollowingComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ZDivergeNavigationType = ENavigationType::Walk;
    this->ZDivergeState = EDivergeState::DefaultMove;
}


