#include "BipedIKConfig.h"

UBipedIKConfig::UBipedIKConfig() {
    this->m_MaxFootIKStandingTargetDistance = 8.50f;
    this->m_MaxFootIKCrouchedTargetDistance = 15.00f;
    this->m_IKBoneL_Target = TEXT("VB foot_target_l");
    this->m_IKBoneR_Target = TEXT("VB foot_target_r");
}


