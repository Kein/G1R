#include "FlyConfig.h"

UFlyConfig::UFlyConfig() {
    this->m_PlayStartFlyingAnimation = false;
    this->m_StartFlyingAnimationImpulse = 500.00f;
    this->m_LandHeight = 100.00f;
    this->m_MaximumHeight = 5000.00f;
    this->m_MinimunHeight = 0.00f;
    this->m_FallGravity = 0.50f;
    this->m_UpSpeedWhenMin = 0.00f;
    this->m_ReturnToHeightSpeed = 100.00f;
    this->m_UseOnlyControllerYaw = false;
    this->m_CanStrafe = false;
    this->m_FlyNotFall = false;
    this->m_FallFloating = false;
    this->m_LimitHeightFlying = false;
}


