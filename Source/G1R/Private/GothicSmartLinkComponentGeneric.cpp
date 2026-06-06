#include "GothicSmartLinkComponentGeneric.h"

UGothicSmartLinkComponentGeneric::UGothicSmartLinkComponentGeneric(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bUseTraverseTask = false;
    this->CooldownWaitingAgents = 2.00f;
    this->bBlockPathfindingWhenLinkHasUser = false;
    this->SnapRadius = 100.00f;
    this->SnapHeight = 100.00f;
    this->bAddToWaynet = true;
    this->MoveOverLinkTask = NULL;
    this->FinishLinkMoveTask = NULL;
    this->CurrentPathFollowingComponent = NULL;
    this->bIsCharacterTraversingWithTask = false;
    this->requestedWalkSpeed = EWalkSpeed::Walking;
}

void UGothicSmartLinkComponentGeneric::HandleCurrentUserDespawns(AActor* Actor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason) {
}


