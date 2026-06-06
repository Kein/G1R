#include "DistanceMatchSection.h"

FDistanceMatchSection::FDistanceMatchSection() {
    this->TargetTime = 0.00f;
    this->StartTime = 0.00f;
    this->EndTime = 0.00f;
    this->MatchType = EDistanceMatchType::None;
    this->MatchBasis = EDistanceMatchBasis::Positional;
    this->AnimId = 0;
    this->AnimType = EMotionAnimAssetType::None;
    this->StartPoseId = 0;
    this->EndPoseId = 0;
    this->MaxDistance = 0.00f;
}

