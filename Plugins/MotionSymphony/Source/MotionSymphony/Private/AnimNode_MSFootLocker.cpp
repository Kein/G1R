#include "AnimNode_MSFootLocker.h"

FAnimNode_MSFootLocker::FAnimNode_MSFootLocker() {
    this->bLeftFootLock = false;
    this->bRightFootLock = false;
    this->LegHyperExtensionFixMethod = EMSHyperExtensionFixMethod::None;
    this->AllowLegExtensionRatio = 0.00f;
    this->LockReleaseSmoothTime = 0.00f;
}

