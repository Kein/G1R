#include "MinecrawlerIKAnimInstance.h"

UMinecrawlerIKAnimInstance::UMinecrawlerIKAnimInstance() {
    this->m_IKConfig_Minecrawler = NULL;
    this->m_EnableFootIkL_B = 1.00f;
    this->m_EnableFootIkL_M = 1.00f;
    this->m_EnableFootIkL_F = 1.00f;
    this->m_EnableFootIkR_B = 1.00f;
    this->m_EnableFootIkR_M = 1.00f;
    this->m_EnableFootIkR_F = 1.00f;
    this->m_LeftBackLockAlpha = 0.00f;
    this->m_RightBackLockAlpha = 0.00f;
    this->m_LeftMidLockAlpha = 0.00f;
    this->m_RightMidLockAlpha = 0.00f;
    this->m_LeftFrontLockAlpha = 0.00f;
    this->m_RightFrontLockAlpha = 0.00f;
    this->m_BackLeftFound = false;
    this->m_BackRightFound = false;
    this->m_MidLeftFound = false;
    this->m_MidRightFound = false;
    this->m_FrontLeftFound = false;
    this->m_FrontRightFound = false;
}


