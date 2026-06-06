#include "LookAtBoneConfig.h"

FLookAtBoneConfig::FLookAtBoneConfig() {
    this->bConeAlongBoneUp = false;
    this->Swing1LimitDegrees = 0.00f;
    this->Swing2LimitDegrees = 0.00f;
    this->TwistLimitDegrees = 0.00f;
    this->MaxAngularSpeedDeg = 0.00f;
    this->LookAtBlendWeight = 0.00f;
    this->BlendDampingSpeed = 0.00f;
}

