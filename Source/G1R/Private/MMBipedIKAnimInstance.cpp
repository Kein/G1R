#include "MMBipedIKAnimInstance.h"

UMMBipedIKAnimInstance::UMMBipedIKAnimInstance() {
    this->m_RightFootFound = false;
    this->m_LeftFootFound = false;
    this->m_LeftLockAlpha = 0.00f;
    this->m_RightLockAlpha = 0.00f;
    this->m_PelvisAlpha = 0.00f;
    this->m_EnableFootIkL = 1.00f;
    this->m_EnableFootIkR = 1.00f;
    this->m_SpeedRootIk = 5.00f;
    this->m_IKConfig_Biped = NULL;
}


