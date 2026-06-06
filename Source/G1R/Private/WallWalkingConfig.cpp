#include "WallWalkingConfig.h"

UWallWalkingConfig::UWallWalkingConfig() {
    this->m_CustomGravityAttraction = 500000.00f;
    this->m_DistanceFactor = 100.00f;
    this->m_RotationInterpSpeed = 10.00f;
    this->m_WallContactLostRotInterpSpeed = 5.00f;
    this->m_SensorRange = 200.00f;
    this->m_MinimumNormalDistToImpulse = 0.05f;
    this->m_RotInWallsDegreesPerSecond = 360.00f;
    this->m_RotImpulseHelper = 60.00f;
}


