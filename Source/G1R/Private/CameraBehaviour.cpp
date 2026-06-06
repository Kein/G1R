#include "CameraBehaviour.h"

FCameraBehaviour::FCameraBehaviour() {
    this->m_ArmLength = 0.00f;
    this->m_Fov = 0.00f;
    this->m_LagSpeed = 0.00f;
    this->m_RotationLagSpeed = 0.00f;
    this->m_RotationLagSpeedPitch = 0.00f;
    this->m_LagMaxDistance = 0.00f;
    this->m_Condition = ECamConditions::None;
    this->m_IsActive = false;
    this->m_IsAim = false;
    this->m_SpellPitchLimit = 0.00f;
    this->m_SpellYawLimit = 0.00f;
    this->m_CameraPitchId = 0;
    this->m_PitchLimit = 0.00f;
    this->m_YawLimit = 0.00f;
}

