#include "GothicLockPickActor.h"

AGothicLockPickActor::AGothicLockPickActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_LockPickAnimInstance = NULL;
}

void AGothicLockPickActor::OnStopTickingTimerFired() {
}


