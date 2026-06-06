#include "AIWorldEventTimeBased.h"

UAIWorldEventTimeBased::UAIWorldEventTimeBased() {
    this->MinDaysBetween = 0;
}

bool UAIWorldEventTimeBased::BP_IsApplicableNow_Implementation() const {
    return false;
}


