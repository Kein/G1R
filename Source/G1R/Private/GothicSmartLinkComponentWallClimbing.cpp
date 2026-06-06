#include "GothicSmartLinkComponentWallClimbing.h"

UGothicSmartLinkComponentWallClimbing::UGothicSmartLinkComponentWallClimbing(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bUseTraverseTask = true;
    this->WallClimbStatus = EWallClimbLinkStatus::NormalClimb;
    this->ClimbableWallBottom = NULL;
    this->ClimbableWallTop = NULL;
}

void UGothicSmartLinkComponentWallClimbing::InitLink() {
}


