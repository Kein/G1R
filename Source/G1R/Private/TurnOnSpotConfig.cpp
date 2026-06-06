#include "TurnOnSpotConfig.h"

UTurnOnSpotConfig::UTurnOnSpotConfig() {
    this->m_TurnCheckMinAngle = 45.00f;
    this->m_ExplicitTurnInPlaceAngleTolerance = 1.00f;
    this->m_Turn180Threshold = 130.00f;
    this->m_AimYawRateLimit = 50.00f;
    this->m_MinAngleDelay = 0.75f;
    this->m_MaxAngleDelay = 0.00f;
    this->m_TIPL30 = NULL;
    this->m_TIPR30 = NULL;
    this->m_TIPL90 = NULL;
    this->m_TIPR90 = NULL;
    this->m_TIPL180 = NULL;
    this->m_TIPR180 = NULL;
    this->m_TIPCL30 = NULL;
    this->m_TIPCR30 = NULL;
    this->m_TIPCL90 = NULL;
    this->m_TIPCR90 = NULL;
    this->m_TIPCL180 = NULL;
    this->m_TIPCR180 = NULL;
    this->m_RotateMinThreshold = -50.00f;
    this->m_RotateMaxThreshold = 50.00f;
    this->m_AimYawRateMinRange = 90.00f;
    this->m_AimYawRateMaxRange = 270.00f;
    this->m_MinPlayRate = 1.15f;
    this->m_MaxPlayRate = 3.00f;
}


