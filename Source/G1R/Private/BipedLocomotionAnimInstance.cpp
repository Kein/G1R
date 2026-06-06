#include "BipedLocomotionAnimInstance.h"

UBipedLocomotionAnimInstance::UBipedLocomotionAnimInstance() {
    this->CurrentMidIdleTime = 0.00f;
    this->TimeInMidIdle = 3.00f;
    this->m_ApplySpineCorrection = 0.00f;
    this->WeaponHoldersOffsets = NULL;
    this->WeaponOffsets = NULL;
    this->IsSayingASentence = false;
    this->m_IsInDialog = false;
    this->m_RandomLoopIdx = 0;
    this->GTO = NULL;
    this->ReloadGTOData = false;
    this->UpperTeethOffset = 0.00f;
    this->m_DataModule_Combat = NULL;
}

bool UBipedLocomotionAnimInstance::ShouldApplySpineCorrection() {
    return false;
}

void UBipedLocomotionAnimInstance::OnAnimNotify_Swimming_Quick_Stop(UAnimSequenceBase* Animation) {
}

void UBipedLocomotionAnimInstance::OnAnimNotify_StopTransition() {
}

void UBipedLocomotionAnimInstance::OnAnimNotify_Roll_To_Idle(UAnimSequenceBase* Animation) {
}

void UBipedLocomotionAnimInstance::OnAnimNotify_Quick_Stop(UAnimSequenceBase* Animation) {
}

void UBipedLocomotionAnimInstance::OnAnimNotify_N_Stop_R(UAnimSequenceBase* Animation) {
}

void UBipedLocomotionAnimInstance::OnAnimNotify_N_Stop_L(UAnimSequenceBase* Animation) {
}

void UBipedLocomotionAnimInstance::OnAnimNotify_Land_To_Idle(UAnimSequenceBase* Animation) {
}

void UBipedLocomotionAnimInstance::OnAnimNotify_ClimbEnd(UAnimSequenceBase* Animation) {
}

void UBipedLocomotionAnimInstance::OnAnimNotify_CLF_Stop(UAnimSequenceBase* Animation) {
}

float UBipedLocomotionAnimInstance::GetSpineCorrectionTarget(bool ShowDebug) {
    return 0.0f;
}


