#include "CrimeVictimPersonHandle.h"

FCrimeVictimPersonHandle::FCrimeVictimPersonHandle() {
    this->RelationshipTowardsPerson = ERelationship::Unknown;
    this->RelativeRankTowardsPerson = ERelationshipRelativeRank::Unknown;
    this->HostilityTowardsPerson = ERelationshipHostility::Unknown;
}

