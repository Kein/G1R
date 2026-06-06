#include "AnimChannelState.h"

FAnimChannelState::FAnimChannelState() {
    this->Weight = 0.00f;
    this->HighestWeight = 0.00f;
    this->AnimId = 0;
    this->AnimType = EMotionAnimAssetType::None;
    this->StartPoseId = 0;
    this->StartTime = 0.00f;
    this->Age = 0.00f;
    this->DecayAge = 0.00f;
    this->AnimTime = 0.00f;
    this->BlendStatus = EBlendStatus::Inactive;
    this->bLoop = false;
    this->PlayRate = 0.00f;
    this->bMirrored = false;
    this->AnimLength = 0.00f;
    this->CachedTriangulationIndex = 0;
}

