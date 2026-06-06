#include "AICombatTargetScoringEntry.h"

UAICombatTargetScoringEntry::UAICombatTargetScoringEntry() {
    this->Weight = 1.00f;
}

bool UAICombatTargetScoringEntry::VetoUsage_Implementation(const AGothicCharacter* Character) const {
    return false;
}

bool UAICombatTargetScoringEntry::DoesEntryApplyTo_Implementation(const AGothicCharacter* Character) const {
    return false;
}

float UAICombatTargetScoringEntry::CalculateScore_Implementation(const AGothicCharacter* Character) const {
    return 0.0f;
}


