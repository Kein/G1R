#include "ScoredCombatTarget.h"

FScoredCombatTarget::FScoredCombatTarget() {
    this->Score = 0.00f;
    this->SuspendUpdatesUntilWorldTime = 0.00f;
    this->Character = NULL;
}

