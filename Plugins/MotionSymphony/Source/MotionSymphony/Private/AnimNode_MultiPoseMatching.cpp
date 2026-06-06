#include "AnimNode_MultiPoseMatching.h"

FAnimNode_MultiPoseMatching::FAnimNode_MultiPoseMatching() {
    this->DistanceMatchingUseCase = EDistanceMatchingUseCase::None;
    this->DesiredDistance = 0.00f;
}

