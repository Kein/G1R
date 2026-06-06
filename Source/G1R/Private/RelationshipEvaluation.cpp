#include "RelationshipEvaluation.h"

FRelationshipEvaluation::FRelationshipEvaluation() {
    this->Relationship = ERelationship::Unknown;
    this->FriendlinessWeight = 0.00f;
    this->Hostility = ERelationshipHostility::Unknown;
    this->HostilityWeight = 0.00f;
    this->Rank = ERelationshipRelativeRank::Unknown;
    this->RankWeight = 0.00f;
    this->AtTime = 0.00f;
}

