#include "LocomotionAnimInstance.h"

ULocomotionAnimInstance::ULocomotionAnimInstance() {
    this->m_FallingSurfaceType = EFallingSurfaceType::None;
    this->m_FallingSurfaceDistance = 0.00f;
    this->TriggerPivotSpeedLimit = 200.00f;
    this->m_AnimConfig = NULL;
    this->m_IsTired = false;
    this->m_AlcoholLevel = 0.00f;
    this->m_DrugsLevel = 0.00f;
    this->m_AllowDrunkTransition = true;
    this->bCheatFlying = false;
    this->m_TrajectoryGenerator = NULL;
    this->m_DistanceMatching = NULL;
    this->m_MarkerDistance = 0.00f;
    this->m_TriggerTransition = EDistanceMatchTrigger::None;
    this->m_DefaultNeckSpeed = 1.00f;
}

void ULocomotionAnimInstance::StopTransition() {
}

void ULocomotionAnimInstance::RotInPlaceCheck() {
}

void ULocomotionAnimInstance::ResetTired() {
}

void ULocomotionAnimInstance::ResetStates() {
}

void ULocomotionAnimInstance::ResetPivot() {
}

void ULocomotionAnimInstance::OnRestartRootMotion() {
}

void ULocomotionAnimInstance::OnCheckJump() const {
}

void ULocomotionAnimInstance::DoTurnInPlace(const UTurnOnSpotAssetConfig* TurnOnSpotAsset, float PlayRateScale, float ScaleTurnAngle, float StartTime) {
}

void ULocomotionAnimInstance::DoStop(const FDynamicMontage& Montage) {
}

void ULocomotionAnimInstance::DoPivot(const FDynamicMontage& Montage, EPivotTrigger PivotType, bool isPivot) {
}

void ULocomotionAnimInstance::CheckStopMoving() {
}

void ULocomotionAnimInstance::CheckStartMoving() {
}

void ULocomotionAnimInstance::ChangeStance(EStance stance) {
}

void ULocomotionAnimInstance::CalculateRotInPlaceRate() {
}


