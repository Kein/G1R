#include "AttackConeLoopConfig.h"

UAttackConeLoopConfig::UAttackConeLoopConfig() {
    this->m_ConeLengthMeters = 100.00f;
    this->m_ConeAngleDegrees = 90.00f;
    this->m_ConeLengthSpeed = 100.00f;
    this->m_ConeSphereRadius = 100.00f;
}

float UAttackConeLoopConfig::GetConeSphereRadius() const {
    return 0.0f;
}

float UAttackConeLoopConfig::GetConeLengthSpeed() const {
    return 0.0f;
}

float UAttackConeLoopConfig::GetConeLength() const {
    return 0.0f;
}

float UAttackConeLoopConfig::GetConeAngle() const {
    return 0.0f;
}


