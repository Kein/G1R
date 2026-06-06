#include "AnimNode_MSDistanceMatching.h"

FAnimNode_MSDistanceMatching::FAnimNode_MSDistanceMatching() {
    this->DesiredDistance = 0.00f;
    this->bNegateDistanceCurve = false;
    this->MovementType = EDistanceMatchType::None;
    this->DistanceLimit = 0.00f;
    this->DestinationReachedThreshold = 0.00f;
    this->SmoothRate = 0.00f;
    this->SmoothTimeThreshold = 0.00f;
    this->LastAnimSequenceUsed = NULL;
}

