#include "AIItemActionScoringEntry.h"

UAIItemActionScoringEntry::UAIItemActionScoringEntry() {
    this->bIsMultiplier = false;
}

bool UAIItemActionScoringEntry::VetoActionUsage_Implementation(const FItemActionHandler& ItemActionHandler) const {
    return false;
}

bool UAIItemActionScoringEntry::IsEntryRelevantToItemAction_Implementation(const FItemActionHandler& ItemActionHandler) const {
    return false;
}

bool UAIItemActionScoringEntry::DoesEntryApplyToCurrentSituation_Implementation() const {
    return false;
}

float UAIItemActionScoringEntry::CalculateScore_Implementation(const FItemActionHandler& ItemActionHandler) const {
    return 0.0f;
}


