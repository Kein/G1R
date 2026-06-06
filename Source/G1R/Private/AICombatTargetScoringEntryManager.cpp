#include "AICombatTargetScoringEntryManager.h"

UAICombatTargetScoringEntryManager::UAICombatTargetScoringEntryManager() {
}

void UAICombatTargetScoringEntryManager::UpdateAvailableTargets(const TArray<AGothicCharacter*>& AvailableTargets) {
}

AGothicCharacter* UAICombatTargetScoringEntryManager::GetHighestScoredTargetCharacter() const {
    return NULL;
}

TArray<FScoredCombatTarget> UAICombatTargetScoringEntryManager::GetAvailableScoredCombatTargets() const {
    return TArray<FScoredCombatTarget>();
}

void UAICombatTargetScoringEntryManager::CalculateScoreOfCombatTarget(FScoredCombatTarget& ScoredCombatTarget) const {
}

void UAICombatTargetScoringEntryManager::Add(UAICombatTargetScoringEntry* Entry) {
}


