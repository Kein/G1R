#include "BipedIKAnimInstance.h"

UBipedIKAnimInstance::UBipedIKAnimInstance() {
    this->m_RightFootFound = false;
    this->m_LeftFootFound = false;
    this->m_LeftLockAlpha = 0.00f;
    this->m_RightLockAlpha = 0.00f;
    this->m_PelvisAlpha = 0.00f;
    this->m_EnableFootIkL = 1.00f;
    this->m_EnableFootIkR = 1.00f;
    this->m_EnableHandIkL = 0.00f;
    this->m_EnableHandIkR = 0.00f;
    this->m_CarryComponent = NULL;
    this->m_CurrentMeleeWeapon = NULL;
    this->m_IKConfig_Biped = NULL;
    this->m_CurrentLookAtState = ELookAtState::Idle;
    this->bImplementsLookAtSM = false;
}


