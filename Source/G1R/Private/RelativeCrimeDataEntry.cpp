#include "RelativeCrimeDataEntry.h"

FRelativeCrimeDataEntry::FRelativeCrimeDataEntry() {
    this->ID = 0;
    this->BaseSeverity = 0.00f;
    this->bIsSuppressed = false;
    this->RelationshipTowardsCriminal = ERelationship::Unknown;
    this->RelativeRankTowardsCriminal = ERelationshipRelativeRank::Unknown;
    this->HostilityTowardsCriminal = ERelationshipHostility::Unknown;
    this->bInPartyWithCriminal = false;
    this->Directness = ECrimeDirectness::None;
    this->OriginSource = ERelativeCrimeOrigin::Witness;
}

