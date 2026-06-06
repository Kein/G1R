#include "AN_PA_LookAt.h"

FAN_PA_LookAt::FAN_PA_LookAt() {
    this->EnableLookAt = 0.00f;
    this->bResetStateOnNextUpdate = false;
    this->MaxLookAtAngleDegrees = 0.00f;
    this->FadeAngleDegrees = 0.00f;
    this->LookAtTargetSmoothSpeed = 0.00f;
    this->bUseChainRootAngleBlend = false;
    this->bUseDeviationInfluence = false;
    this->DeviationInfluenceExponent = 0.00f;
    this->bSmoothInComponentSpace = false;
    this->bUseSphericalInterpolation = false;
    this->bUseEyeOffset = false;
}

