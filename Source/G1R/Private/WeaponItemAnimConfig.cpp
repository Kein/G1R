#include "WeaponItemAnimConfig.h"

UWeaponItemAnimConfig::UWeaponItemAnimConfig() {
    this->m_RootMotionIncreaseRate = 0.55f;
    this->m_RotateSpeedMagnetPlayer = 200.00f;
    this->m_RotateSpeedMagnetAI = 200.00f;
    this->m_IntialRotateMagnetMaxAngle = 180.00f;
    this->m_RotateSpeedCharge = 100.00f;
    this->m_AttackRotateSpeedManualReorient = 5.00f;
    this->m_RotateSpeedReorient = 200.00f;
    this->m_TauntData = NULL;
    this->m_ExecutionData = NULL;
}

UTauntData* UWeaponItemAnimConfig::GetTauntData() const {
    return NULL;
}

float UWeaponItemAnimConfig::GetRotateSpeedReorient() const {
    return 0.0f;
}

float UWeaponItemAnimConfig::GetRotateSpeedMagnetPlayer() const {
    return 0.0f;
}

float UWeaponItemAnimConfig::GetRotateSpeedMagnetAI() const {
    return 0.0f;
}

float UWeaponItemAnimConfig::GetRotateSpeedCharge() const {
    return 0.0f;
}

float UWeaponItemAnimConfig::GetRootMotionIncreaseRate() const {
    return 0.0f;
}

float UWeaponItemAnimConfig::GetIntialRotateMagnetMaxAngle() const {
    return 0.0f;
}

float UWeaponItemAnimConfig::GetAttackRotateSpeedManualReorient() const {
    return 0.0f;
}


