#include "Tag_DistanceMatch.h"

UTag_DistanceMatch::UTag_DistanceMatch() {
    this->DistanceMatchType = EDistanceMatchType::None;
    this->DistancematchBasis = EDistanceMatchBasis::Positional;
    this->Lead = 1.00f;
    this->Tail = 1.00f;
}


