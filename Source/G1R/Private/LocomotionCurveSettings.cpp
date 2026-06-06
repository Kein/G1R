#include "LocomotionCurveSettings.h"

FLocomotionCurveSettings::FLocomotionCurveSettings() {
    this->m_BuoyancyCurve = NULL;
    this->m_GroundFrictionCurve = NULL;
    this->m_AirFrictionCurve = NULL;
    this->m_DecelerationCurve = NULL;
    this->m_AccelerationCurve = NULL;
    this->m_RotationRateCurve = NULL;
}

