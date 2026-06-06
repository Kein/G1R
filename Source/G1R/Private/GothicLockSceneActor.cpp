#include "GothicLockSceneActor.h"

AGothicLockSceneActor::AGothicLockSceneActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_LockPieceInterpolationSpeed = 10.00f;
    this->m_UseConstantInterpolationSpeed = true;
    this->m_LockBarDownOffset = -5.00f;
    this->m_LockBarUpOffset = 5.00f;
    this->m_BarDistanceThresholdForInterpolation = 2.00f;
    this->m_LockPieceTranslationStep = 5.00f;
    this->m_LatchCurve = NULL;
    this->m_CameraHelper = NULL;
    this->m_LockPickActor = NULL;
    this->m_ShakeSpeed = 40.00f;
    this->m_ShakeDuration = 0.50f;
    this->m_ShakeAmplitude = 0.50f;
}




