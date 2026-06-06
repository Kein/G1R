#include "GothicAnimInstance.h"

UGothicAnimInstance::UGothicAnimInstance() {
    this->m_RandomCyclesStartPosition = 0.00f;
    this->m_Stance = EStance::Standing;
    this->m_PrevStance = EStance::Standing;
    this->m_DesiredStance = EStance::Standing;
    this->m_MovementState = EMovementState::Grounded;
    this->m_PrevMovementState = EMovementState::Grounded;
    this->m_MovementStateTime = 0.00f;
    this->m_MovementAction = EMovementAction::None;
    this->m_DesiredMovementAction = EMovementAction::None;
    this->m_WalkSpeed = EWalkSpeed::Walking;
    this->m_DesiredWalkSpeed = EWalkSpeed::Walking;
    this->m_PrevDesiredWalkSpeed = EWalkSpeed::Walking;
    this->m_RotationMode = ERotationMode::VelocityDirection;
    this->m_MovementDirection = EMovementDirection::Forward;
    this->m_Speed = 0.00f;
    this->m_prevSpeed = 0.00f;
    this->m_bHasMovementInput = false;
    this->m_HasControllerInput = false;
    this->m_FacingAngle = 0.00f;
    this->m_Direction = 0.00f;
    this->m_LookPointsOfInterestPassively = false;
    this->m_IsPoiAvailable = false;
    this->ViewMode = EViewMode::VMThirdPerson;
    this->m_IsInFrontWall = false;
    this->TrackedHipsDirection = EHLSHipsDirection::F;
    this->bShouldMove = false;
    this->bStopped = true;
    this->bStopping = false;
    this->bBlockedState = false;
    this->bPrevBlockedState = false;
    this->bLockedMovement = false;
    this->bPrevLockedMovement = false;
    this->bRotateL = false;
    this->bRotateR = false;
    this->bPivot = false;
    this->PivotTrigger = EPivotTrigger::None;
    this->RotateRate = 1.00f;
    this->AnimationRotateRate = 1.00f;
    this->RotateScale = 0.00f;
    this->DiagonalScaleAmount = 0.00f;
    this->WalkRunBlend = 0.00f;
    this->StandingPlayRate = 1.00f;
    this->CrouchingPlayRate = 1.00f;
    this->StrideBlend = 0.00f;
    this->FYaw = 0.00f;
    this->BYaw = 0.00f;
    this->LYaw = 0.00f;
    this->RYaw = 0.00f;
    this->JumpPlayRate = 1.20f;
    this->FallSpeed = 0.00f;
    this->m_FallDistance = 0.00f;
    this->LandPrediction = 0.00f;
    this->m_IsInWater = false;
    this->m_InWaterDepth = 0.00f;
    this->m_JumpIntoWater = false;
    this->m_JumpIntoWaterDistance = 0.00f;
    this->m_SwimBlendPitchJumpingIntoWater = 0.80f;
    this->m_SwimTimeJumpingIntoWater = 1.00f;
    this->m_SwimBlendPitchSmoothTime = 0.50f;
    this->m_DesiredSwimType = ESwimType::Normal;
    this->m_SwimPlayRate = 0.00f;
    this->m_SwimSpeed = 0.00f;
    this->m_SwimBlendPitch = 0.00f;
    this->m_SwimBlendYaw = 0.00f;
    this->m_AimYawRate = 0.00f;
    this->AimSweepTime = 2.50f;
    this->InputYawOffsetTime = 0.00f;
    this->ForwardYawTime = 0.00f;
    this->LeftYawTime = 0.00f;
    this->RightYawTime = 0.00f;
    this->FlailRate = 0.00f;
    this->m_BasePose_N = 1.00f;
    this->m_BasePose_CLF = 0.00f;
    this->m_BasePose_Combat = 0.00f;
    this->m_IsTurning = false;
    this->m_LookAtAngle = 0.00f;
    this->m_IsFiring = false;
    this->m_IsAiming = false;
    this->m_IsStrafing = false;
    this->m_IsAlive = true;
    this->m_IsTargeting = false;
    this->m_ItemState = EItemState::Draw;
    this->m_IsAggressive = false;
    this->m_IsLinkedLayer = false;
    this->m_CutBoneInvert = false;
    this->m_WeaponSkill = EWeaponSkill::None;
    this->m_IsInCombat = false;
    this->m_IsUsingCrossBow = false;
    this->m_Enable_AimOffset = 1.00f;
    this->m_Enable_HandIK_L = 0.00f;
    this->m_Enable_HandIK_R = 0.00f;
    this->m_IsFootIKEnabled = true;
    this->m_SkipFacials = false;
    this->m_CarryComponent = NULL;
    this->m_ArcheryComponent = NULL;
    this->EnableLookAt = 0.00f;
    this->EnableMicroGestures = false;
    this->bIsThrowing = false;
    this->bHasItemInHand = false;
    this->bHasTorchInHand = false;
    this->bIsTransformed = false;
    this->bIsTransforming = false;
    this->bIsUnTransforming = false;
    this->bIsInConversation = false;
    this->bIsInCinematic = false;
    this->bIsOnLadder = false;
    this->bIsCrouching = false;
    this->m_LocomotionSequencesData = NULL;
    this->m_DataModule_Locomotion = NULL;
    this->m_DataModule_BaseStats = NULL;
    this->m_DataModule_LookAt = NULL;
    this->m_DataModule_Targeting = NULL;
    this->m_LocomotionConfig = NULL;
    this->m_GothicMovementComponent = NULL;
    this->m_GothicAnimationComponent = NULL;
    this->m_UseLinkedLayers = false;
    this->m_UseMotionMatching = false;
    this->m_MMRootDelta = 0.00f;
    this->m_CurrentAnimConfig = NULL;
}

float UGothicAnimInstance::SurfaceDistance() {
    return 0.0f;
}

bool UGothicAnimInstance::ShouldRecoverDive() {
    return false;
}

bool UGothicAnimInstance::ShouldDive() {
    return false;
}

void UGothicAnimInstance::ResetDynamicTransitionTimer() {
}

void UGothicAnimInstance::ResetBreaker() {
}

UAnimMontage* UGothicAnimInstance::PlayDynamicTransition(UAnimSequenceBase* Animation, FName SlotName, float BlendInTime, float BlendOutTime, float PlayRate, float StartTime, float reTriggerDelay) {
    return NULL;
}

bool UGothicAnimInstance::MoveSlopeDown() {
    return false;
}

bool UGothicAnimInstance::JumpingIntoWater() {
    return false;
}

float UGothicAnimInstance::JumpingAnimDelta() {
    return 0.0f;
}

bool UGothicAnimInstance::isAcrobatic() {
    return false;
}

bool UGothicAnimInstance::HasGameplayTag(FGameplayTag Tag, bool bExactMatch) const {
    return false;
}

float UGothicAnimInstance::GroundClearance() {
    return 0.0f;
}

FGameplayTag UGothicAnimInstance::GetWeaponTagTS() {
    return FGameplayTag{};
}

float UGothicAnimInstance::GetPredictedWaterDepth() {
    return 0.0f;
}

ULocomotionSequencesData* UGothicAnimInstance::GetLocomotionSequencesData() {
    return NULL;
}

float UGothicAnimInstance::GetInitialFallDistance() {
    return 0.0f;
}

UGothicMovementComponent* UGothicAnimInstance::GetGothicMovementComponent() const {
    return NULL;
}

TArray<FName> UGothicAnimInstance::GetFootStepSocketNames(float HeightDifferentTolerance, float ForwardDistanceTolerance) const {
    return TArray<FName>();
}

FName UGothicAnimInstance::GetFeetSocket() const {
    return NAME_None;
}

float UGothicAnimInstance::GetFeetPosition() const {
    return 0.0f;
}

void UGothicAnimInstance::CheckStates() {
}

FVector UGothicAnimInstance::AltVelocity() {
    return FVector{};
}

float UGothicAnimInstance::AltDirection() {
    return 0.0f;
}


