#include "DistanceMatchPayload.h"

FDistanceMatchPayload::FDistanceMatchPayload() {
    this->bTrigger = false;
    this->MatchType = EDistanceMatchType::None;
    this->MatchBasis = EDistanceMatchBasis::Positional;
    this->MarkerDistance = 0.00f;
}

