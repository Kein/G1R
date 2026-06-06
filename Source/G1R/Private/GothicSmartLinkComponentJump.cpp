#include "GothicSmartLinkComponentJump.h"

UGothicSmartLinkComponentJump::UGothicSmartLinkComponentJump(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MaxAngleDiffGoalToStartToMoveAnchor = 30.00f;
    this->JumpDownArrowLocationMode = EJumpDownArrowLocationMode::Dynamic;
    this->TargetJumpDownToComponent = NULL;
}

void UGothicSmartLinkComponentJump::InitLink() {
}


