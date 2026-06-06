#include "GothicSmartLinkComponentInteractionSpot.h"

UGothicSmartLinkComponentInteractionSpot::UGothicSmartLinkComponentInteractionSpot(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bUseInteractionAnchors = true;
    this->bUseTaskForOpen = false;
    this->bUseTaskForClose = false;
    this->bTraverseWalkingWhenIsOpenUponArrival = false;
    this->State = ENavLinkState::Open;
    this->InteractionSpotRadius = 5.00f;
    this->OffsetLinkFromAnchor = 0.00f;
}


