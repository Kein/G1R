#include "MotionAnimMetaDataWrapper.h"

UMotionAnimMetaDataWrapper::UMotionAnimMetaDataWrapper() {
    this->bLoop = false;
    this->PlayRate = 1.00f;
    this->bEnableMirroring = false;
    this->bFlattenTrajectory = true;
    this->PastTrajectory = ETrajectoryPreProcessMethod::IgnoreEdges;
    this->PrecedingMotion = NULL;
    this->FutureTrajectory = ETrajectoryPreProcessMethod::IgnoreEdges;
    this->FollowingMotion = NULL;
    this->CostMultiplier = 1.00f;
}


