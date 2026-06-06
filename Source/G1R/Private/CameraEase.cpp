#include "CameraEase.h"

FCameraEase::FCameraEase() {
    this->m_Time = 0.00f;
    this->m_Ease = EEasingFunc::Linear;
    this->m_Blend = 0.00f;
}

