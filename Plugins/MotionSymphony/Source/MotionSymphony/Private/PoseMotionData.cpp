#include "PoseMotionData.h"

FPoseMotionData::FPoseMotionData() {
    this->PoseId = 0;
    this->AnimType = EMotionAnimAssetType::None;
    this->AnimId = 0;
    this->CandidateSetId = 0;
    this->Time = 0.00f;
    this->NextPoseId = 0;
    this->LastPoseId = 0;
    this->bMirrored = false;
    this->bDoNotUse = false;
    this->RotationalVelocity = 0.00f;
    this->Favour = 0.00f;
}

