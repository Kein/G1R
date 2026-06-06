#include "AnimNode_TransitionMatching.h"

FAnimNode_TransitionMatching::FAnimNode_TransitionMatching() {
    this->TransitionMatchingOrder = ETransitionMatchingOrder::TransitionPriority;
    this->StartDirectionWeight = 0.00f;
    this->EndDirectionWeight = 0.00f;
    this->DistanceMatchingUseCase = EDistanceMatchingUseCase::None;
    this->DesiredDistance = 0.00f;
}

