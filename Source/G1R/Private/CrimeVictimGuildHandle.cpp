#include "CrimeVictimGuildHandle.h"

FCrimeVictimGuildHandle::FCrimeVictimGuildHandle() {
    this->RelationshipTowardsGuild = ERelationship::Unknown;
    this->RelativeRankTowardsGuild = ERelationshipRelativeRank::Unknown;
    this->HostilityTowardsGuild = ERelationshipHostility::Unknown;
}

