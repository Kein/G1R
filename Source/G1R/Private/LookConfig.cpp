#include "LookConfig.h"

ULookConfig::ULookConfig() {
    this->m_LookUpDownRate = 1.25f;
    this->m_LookRightLeftRate = 1.25f;
    this->m_LookRightLeftEase = EEasingFunc::Linear;
    this->m_LookRightLeftMaxRate = 0.00f;
    this->m_LookRightLeftTime = 0.00f;
}


