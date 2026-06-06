#include "PersonalRelationshipModifier.h"

UPersonalRelationshipModifier::UPersonalRelationshipModifier() {
    this->Weight = 1.00f;
    this->bApplicableWhenOtherIsPlayer = true;
    this->bApplicableWhenOtherIsNPC = true;
}

ERelationshipRelativeRank UPersonalRelationshipModifier::WhatsOthersRankComparedToMe_Implementation(const AGothicCharacterState* Me, const AGothicCharacterState* Other) const {
    return ERelationshipRelativeRank::Unknown;
}

void UPersonalRelationshipModifier::SetRelativeRankTowardsOther(ERelationshipRelativeRank RelativeRank) {
}

void UPersonalRelationshipModifier::SetRelationshipTowardsOther(ERelationship Relationship) {
}

void UPersonalRelationshipModifier::SetHostilityTowardsOther(ERelationshipHostility Hostility) {
}

bool UPersonalRelationshipModifier::IsApplicableFor_Implementation(const AGothicCharacterState* Me, const AGothicCharacterState* Other) const {
    return false;
}

ERelationship UPersonalRelationshipModifier::HowMuchDoILike_Implementation(const AGothicCharacterState* Me, const AGothicCharacterState* Other) const {
    return ERelationship::Unknown;
}

ERelationshipHostility UPersonalRelationshipModifier::HowHostileAmIAgainst_Implementation(const AGothicCharacterState* Me, const AGothicCharacterState* Other) const {
    return ERelationshipHostility::Unknown;
}


