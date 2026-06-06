#include "QuadrupedIKAnimInstance.h"

UQuadrupedIKAnimInstance::UQuadrupedIKAnimInstance() {
    this->m_LeftLockAlpha = 0.00f;
    this->m_RightLockAlpha = 0.00f;
    this->m_LeftBackLockAlpha = 0.00f;
    this->m_RightBackLockAlpha = 0.00f;
    this->m_FrontRightFound = false;
    this->m_FrontLeftFound = false;
    this->m_BackRightFound = false;
    this->m_BackLeftFound = false;
    this->m_IKConfig_Quadruped = NULL;
    this->m_EnableFootIkL = 1.00f;
    this->m_EnableFootIkR = 1.00f;
    this->m_EnableFootIk_F_L = 1.00f;
    this->m_EnableFootIk_F_R = 1.00f;
}


