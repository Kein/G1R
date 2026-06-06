#include "LandingConfig.h"

ULandingConfig::ULandingConfig() {
    this->m_BrakingFrictionFactorStrong = 3.00f;
    this->m_BrakingFrictionFactorWeak = 0.50f;
    this->m_BrakingFrictionFactorResetTime = 0.50f;
    this->m_StopResetTimeWeak = 0.10f;
    this->m_StopResetTimeStrong = 0.30f;
    this->m_MaxFallingStrongStopHeight = 200.00f;
}


