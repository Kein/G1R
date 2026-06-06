#include "QuadrupedIKConfig.h"

UQuadrupedIKConfig::UQuadrupedIKConfig() {
    this->m_NeckCorrector = 0.00f;
    this->m_NeckMaxSlope = 0.00f;
    this->m_HipNTailRayLength = 0.00f;
    this->m_MaxYawRotation = 0.00f;
    this->m_IKBoneFrontL_Target = TEXT("VB foot_target_l");
    this->m_IKBoneFrontR_Target = TEXT("VB foot_target_r");
    this->m_MaxFootIKStandingTargetDistance = 8.50f;
}


