#include "GlossarySubcategory_ByRelationship.h"

UGlossarySubcategory_ByRelationship::UGlossarySubcategory_ByRelationship() {
    this->m_IgnoreDeadActors = true;
}

ERelationship UGlossarySubcategory_ByRelationship::GetCombinedRelationshipAS_Implementation(const AGothicCharacterState* _CharacterState, const AGothicPlayerState* _OwningPlayerState) const {
    return ERelationship::Unknown;
}


