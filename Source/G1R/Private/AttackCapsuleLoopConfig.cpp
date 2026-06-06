#include "AttackCapsuleLoopConfig.h"

UAttackCapsuleLoopConfig::UAttackCapsuleLoopConfig() {
    this->m_CapsuleHalfHeight = 100.00f;
    this->m_CapsuleRadius = 22.00f;
    this->m_CapsuleLengthSpeed = 100.00f;
}

float UAttackCapsuleLoopConfig::GetCapsuleRadius() const {
    return 0.0f;
}

float UAttackCapsuleLoopConfig::GetCapsuleLengthSpeed() const {
    return 0.0f;
}

float UAttackCapsuleLoopConfig::GetCapsuleHalfHeight() const {
    return 0.0f;
}


