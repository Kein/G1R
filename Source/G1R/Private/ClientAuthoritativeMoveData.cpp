#include "ClientAuthoritativeMoveData.h"

FClientAuthoritativeMoveData::FClientAuthoritativeMoveData() {
    this->MovementMode = 0;
    this->BasedMovementBase = NULL;
    this->bBasedHasRelativeRotation = false;
    this->bHasOverrideRootMotion = false;
    this->bCrouching = false;
    this->bHasTimestamp = false;
    this->Timestamp = 0.00f;
    this->SpeedForCurve = 0.00f;
    this->NewMaxSpeed = 0.00f;
}

