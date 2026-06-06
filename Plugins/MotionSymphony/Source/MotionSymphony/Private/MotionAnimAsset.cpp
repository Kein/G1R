#include "MotionAnimAsset.h"

FMotionAnimAsset::FMotionAnimAsset() {
    this->AnimId = 0;
    this->MotionAnimAssetType = EMotionAnimAssetType::None;
    this->bLoop = false;
    this->PlayRate = 0.00f;
    this->bEnableMirroring = false;
    this->bFlattenTrajectory = false;
    this->PastTrajectory = ETrajectoryPreProcessMethod::None;
    this->FutureTrajectory = ETrajectoryPreProcessMethod::None;
    this->AnimAsset = NULL;
    this->PrecedingMotion = NULL;
    this->FollowingMotion = NULL;
    this->CostMultiplier = 0.00f;
    this->ParentMotionDataAsset = NULL;
}

