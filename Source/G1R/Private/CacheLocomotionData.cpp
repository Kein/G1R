#include "CacheLocomotionData.h"

FCacheLocomotionData::FCacheLocomotionData() {
    this->DiagonalScaleAmountCurve = NULL;
    this->StrideBlendNWalk = NULL;
    this->StrideBlendNRun = NULL;
    this->StrideBlendCWalk = NULL;
    this->StrideBlendSwimmingWalk = NULL;
    this->StrideBlendSwimmingRun = NULL;
    this->StrideBlendDiveWalk = NULL;
    this->LandPredictionCurve = NULL;
    this->LeanInAirCurve = NULL;
    this->YawOffsetFBCurve = NULL;
    this->YawOffsetLRCurve = NULL;
}

