#include "CameraDefinition.h"

UCameraDefinition::UCameraDefinition() {
    this->m_ArmLength = 0.00f;
    this->m_Fov = 0.00f;
    this->m_LagSpeed = 0.00f;
    this->m_RotationLagSpeed = 0.00f;
    this->m_RotationLagSpeedPitch = 5.00f;
    this->m_LagMaxDistance = 0.00f;
    this->m_CombatDistance = 1500.00f;
    this->m_TargetViewPitchMin = -20.00f;
    this->m_TargetViewPitchMax = 20.00f;
    this->m_CameraFadeDist = 100.00f;
    this->m_WaterTransitionPitch = -25.00f;
    this->m_AimPitchLimit = 10.00f;
    this->m_AimWeaponPitchLimit = 10.00f;
    this->m_BottomPitchLimit = 89.90f;
    this->m_UpPitchLimit = -89.90f;
    this->m_PostProcessingDuration = 0.00f;
}

FCameraEase UCameraDefinition::Ease(float Time, TEnumAsByte<EEasingFunc::Type> NewEase, float BlendExp) {
    return FCameraEase{};
}


