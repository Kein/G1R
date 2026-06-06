#include "SwampsharkAnimInstance.h"

USwampsharkAnimInstance::USwampsharkAnimInstance() {
    this->m_bodyOscillationTimelineCurve = NULL;
    this->m_bodyTurningTimelineCurve = NULL;
    this->m_smoothTurningTimelineCurve = NULL;
    this->m_currentBodyOscillation = 0.00f;
    this->m_currentBodyTurning = 0.00f;
    this->m_currentSmoothTurning = 0.00f;
    this->m_prevControllerYaw = 0.00f;
    this->m_prevDeltaYaw = 0.00f;
}

void USwampsharkAnimInstance::SlimeAction(USkeletalMeshComponent* MeshComp, ESlimeManagerActions NewSlimeAction, ESlimeName SlimeName) {
}

void USwampsharkAnimInstance::SetCurrentSmoothTurning(float currentSmoothTurning) {
}

void USwampsharkAnimInstance::SetCurrentBodyTurning(float currentBodyTurning) {
}

void USwampsharkAnimInstance::SetCurrentBodyOscillation(float currentBodyOscillation) {
}


