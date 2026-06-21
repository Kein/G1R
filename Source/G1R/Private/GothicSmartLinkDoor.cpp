#include "GothicSmartLinkDoor.h"
#include "ENavLinkState.h"

UGothicSmartLinkDoor::UGothicSmartLinkDoor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCreateBoxObstacle = true;
    this->bUseTraverseTask = true;
    this->bTraverseWalkingWhenIsOpenUponArrival = true;
    this->State = ENavLinkState::Closed;
}


