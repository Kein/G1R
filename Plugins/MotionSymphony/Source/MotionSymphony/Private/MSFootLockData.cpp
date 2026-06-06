#include "MSFootLockData.h"

FMSFootLockData::FMSFootLockData() {
    this->LockState = EMSFootLockState::Unlocked;
    this->RemainingLockTime = 0.00f;
}

