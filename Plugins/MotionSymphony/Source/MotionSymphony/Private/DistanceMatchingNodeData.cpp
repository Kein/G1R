#include "DistanceMatchingNodeData.h"

FDistanceMatchingNodeData::FDistanceMatchingNodeData() {
    this->bNegateDistanceCurve = false;
    this->MovementType = EDistanceMatchType::None;
    this->DistanceLimit = 0.00f;
    this->DestinationReachedThreshold = 0.00f;
    this->SmoothRate = 0.00f;
    this->SmoothTimeThreshold = 0.00f;
}

