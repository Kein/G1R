#include "TransitionAnimData.h"

FTransitionAnimData::FTransitionAnimData() {
    this->AnimSequence = NULL;
    this->TransitionDirectionMethod = ETransitionDirectionMethod::Manual;
    this->CostMultiplier = 0.00f;
    this->bMirror = false;
    this->StartPose = 0;
    this->EndPose = 0;
}

