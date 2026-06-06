#include "GothicAIController.h"

AGothicAIController::AGothicAIController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

FVector AGothicAIController::TryGetValidNavLocation() const {
    return FVector{};
}

bool AGothicAIController::IsPathfollowingPaused() const {
    return false;
}

bool AGothicAIController::IsPathfollowingComponentInitialized() {
    return false;
}

bool AGothicAIController::IsFullyOutSideNavMesh() const {
    return false;
}

TEnumAsByte<EPathFollowingStatus::Type> AGothicAIController::GetPathfollowingStatus() const {
    return EPathFollowingStatus::Idle;
}

FGothicPathfollowSettings AGothicAIController::GetMutableCurrentPathfollowSetting() {
    return FGothicPathfollowSettings{};
}

FGothicPathfollowSettings AGothicAIController::GetCurrentPathfollowSetting() const {
    return FGothicPathfollowSettings{};
}

UGameplayAbility_CharacterAI* AGothicAIController::GetAIAbility() const {
    return NULL;
}

void AGothicAIController::BP_ResumeMove() {
}

void AGothicAIController::BP_PauseMove() {
}

float AGothicAIController::BP_GetRequestedWorldSpaceZDivergeHeightTheoretically(EAdaptZDivergeMode ZDivergeMode, const FVector& AtLocation, float ZOffset) {
    return 0.0f;
}

float AGothicAIController::BP_GetRequestedWorldSpaceZDivergeHeight() {
    return 0.0f;
}

AGothicCharacterState* AGothicAIController::BP_GetCharacterState() const {
    return NULL;
}

float AGothicAIController::BP_GetActualPossibleWorldZDivergeHeight() const {
    return 0.0f;
}


