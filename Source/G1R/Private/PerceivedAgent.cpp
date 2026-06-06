#include "PerceivedAgent.h"

FPerceivedAgent::FPerceivedAgent() {
    this->ViaSense = EPerceptionSense::None;
    this->Relationship = ERelationship::Unknown;
    this->Hostility = ERelationshipHostility::Unknown;
    this->RelativeRank = ERelationshipRelativeRank::Unknown;
    this->RepresentedCharacterState = NULL;
    this->Awareness = 0.00f;
}

