#include "IKAnimInstanceBase.h"

UIKAnimInstanceBase::UIKAnimInstanceBase() {
    this->SwitchLegIk = false;
    this->SwitchLookAt = false;
    this->m_IKConfig = NULL;
    this->m_AnimInstanceDirector = NULL;
    this->m_DataModule_Locomotion = NULL;
    this->m_DataModule_Targeting = NULL;
    this->m_DataModule_LookAt = NULL;
    this->m_VelocityThreshold = 50.00f;
    this->m_IKForcePercentage = 0.05f;
    this->m_EnableHeadIK = 0.00f;
    this->m_EnableFootIK = 0.00f;
    this->m_EnableTargeting = 0.00f;
}


