#include "AnimNotifyState_ModifyPlayRate.h"

UAnimNotifyState_ModifyPlayRate::UAnimNotifyState_ModifyPlayRate() {
    this->m_AnimMontage = NULL;
    this->m_SectionFrames = 0;
    this->m_OldPlayRate = 1.00f;
    this->m_IgnorePlayer = false;
    this->m_IgnoreAI = false;
}


