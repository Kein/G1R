#include "LockPickSubsystem.h"

ULockPickSubsystem::ULockPickSubsystem() {
    this->m_LockSceneActor = NULL;
    this->m_PendingLockPickActor = NULL;
    this->m_PendingCameraHelper = NULL;
}


