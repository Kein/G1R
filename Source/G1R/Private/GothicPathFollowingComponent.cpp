#include "GothicPathFollowingComponent.h"

UGothicPathFollowingComponent::UGothicPathFollowingComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->IdleNavObstacle = NULL;
    this->CurrentWalkedNavArea = NULL;
    this->DefaultNavigationType = ENavigationType::Walk;
    this->CurrentNavigationType = ENavigationType::Walk;
    this->BumpedIntoCharacter = NULL;
    this->JostlingAgent = NULL;
}


