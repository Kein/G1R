#include "AnimNotifyState_ResetStates.h"

UAnimNotifyState_ResetStates::UAnimNotifyState_ResetStates() {
    this->m_ForceBlendOut = false;
    this->m_ForceContinuePlaying = false;
    this->m_BlendoutTime = 0.10f;
    this->m_BlockingBlendOutTime = 0.20f;
}

void UAnimNotifyState_ResetStates::SetForceContinuePlaying(bool forceContinuePlaying) const {
}

void UAnimNotifyState_ResetStates::SetForceBlendOut(bool BlendOut) const {
}

void UAnimNotifyState_ResetStates::SetBlockingBlendOutTime(float blockBlendOutTime) const {
}

void UAnimNotifyState_ResetStates::SetBlendOutTime(float BlendOutTime) const {
}


