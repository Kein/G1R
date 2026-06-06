#include "DataModule_Locomotion.h"
#include "Net/UnrealNetwork.h"

UDataModule_Locomotion::UDataModule_Locomotion() {
    this->m_ClimbType = EClimbType::None;
    this->m_RequestedWalkSpeed = EWalkSpeed::Running;
    this->m_WalkSpeed = EWalkSpeed::Walking;
    this->m_RotationMode = ERotationMode::VelocityDirection;
    this->m_RequestedStance = EStance::Standing;
    this->m_Stance = EStance::Standing;
    this->m_MovementState = EMovementState::None;
    this->m_PrevMovementState = EMovementState::None;
    this->m_MovementAction = EMovementAction::None;
    this->m_RequestedMovementAction = EMovementAction::None;
    this->m_IsBuoyancyEnabled = true;
    this->m_MovementInputAmount = 0.00f;
    this->m_MaxSpeeds.AddDefaulted(3);
    this->m_RecoverDive = false;
    this->m_JumpSurfaceType = EFallingSurfaceType::None;
    this->m_FallingSurfaceType = EFallingSurfaceType::None;
    this->m_FallingSurfaceDistance = 0.00f;
    this->m_WaterDepthInJump = 0.00f;
    this->m_TimeToImpact = 0.00f;
    this->m_ImpactDelta = 0.00f;
    this->m_JumpPeakHeight = 0.00f;
    this->m_TotalFallDistance = 0.00f;
    this->m_OverrideLocoSpeedSettings = NULL;
    this->m_StartFallingZPosition = 0.00f;
    this->m_StartFallingZDistance = 0.00f;
    this->m_LocomotionConfig = NULL;
}

void UDataModule_Locomotion::SetRequestedMovementAction(EMovementAction RequestedMovementAction, bool replicate) {
}

void UDataModule_Locomotion::Server_SetTotalFallDistance_Implementation(float TotalDistance) {
}

void UDataModule_Locomotion::Server_SetStartFallingZPosition_Implementation(float StartFallingPosition) {
}

void UDataModule_Locomotion::Server_SetStartFallingZDistance_Implementation(float StartFallingZDistance) {
}

void UDataModule_Locomotion::Server_SetRotationMode_Implementation(ERotationMode RotationMode) {
}

void UDataModule_Locomotion::Server_SetRequestedWalkSpeed_Implementation(EWalkSpeed requestedWalkSpeed) {
}

void UDataModule_Locomotion::Server_SetRequestedMovementAction_Implementation(EMovementAction movementAction) {
}

void UDataModule_Locomotion::Server_SetRecoveringDive_Implementation(bool IsRecovering) {
}

void UDataModule_Locomotion::Server_SetPreFallingSurface_Implementation(EFallingSurfaceType surface, float Distance, float WaterDepth) {
}

void UDataModule_Locomotion::Server_SetMovementState_Implementation(EMovementState MovementState) {
}

void UDataModule_Locomotion::Server_SetMovementInputAmount_Implementation(float Input) {
}

void UDataModule_Locomotion::Server_SetLastMovementInputRotation_Implementation(FRotator LastMovementInputRotation) {
}

void UDataModule_Locomotion::Server_SetLastMovementInput_Implementation(FVector LastMovementInput) {
}

void UDataModule_Locomotion::Server_SetJumpPeakPosition_Implementation(const FVector& PeakPos) {
}

void UDataModule_Locomotion::Server_SetJumpPeakHeight_Implementation(float PeakHeight) {
}

void UDataModule_Locomotion::Server_SetIsBuoyancyEnabled_Implementation(bool IsEnabled) {
}

void UDataModule_Locomotion::Server_SetImpactTime_Implementation(float TimeToHit) {
}

void UDataModule_Locomotion::Server_SetImpactDelta_Implementation(float ImpactDelta) {
}

void UDataModule_Locomotion::Server_SetFallingSurface_Implementation(EFallingSurfaceType surface, float Distance, float WaterDepth) {
}

void UDataModule_Locomotion::Server_SetClimbType_Implementation(EClimbType ClimbType) {
}

void UDataModule_Locomotion::Server_SetClimbingInput_Implementation(FVector Input) {
}

void UDataModule_Locomotion::OnRep_Config() {
}

void UDataModule_Locomotion::OnChangeMovementAction(EMovementAction movementAction) {
}

bool UDataModule_Locomotion::IsFlying() const {
    return false;
}

EStance UDataModule_Locomotion::GetStance() const {
    return EStance::Standing;
}

ERotationMode UDataModule_Locomotion::GetRotationMode() {
    return ERotationMode::LookingDirection;
}

EStance UDataModule_Locomotion::GetRequestedStance() const {
    return EStance::Standing;
}

float UDataModule_Locomotion::GetInWaterDepth() {
    return 0.0f;
}

FHitResult UDataModule_Locomotion::GetHitFloor() const {
    return FHitResult{};
}

bool UDataModule_Locomotion::GetHasGroundPosition() const {
    return false;
}

FVector UDataModule_Locomotion::GetGroundPosition() const {
    return FVector{};
}

void UDataModule_Locomotion::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UDataModule_Locomotion, m_ClimbType);
    DOREPLIFETIME(UDataModule_Locomotion, m_RequestedWalkSpeed);
    DOREPLIFETIME(UDataModule_Locomotion, m_WalkSpeed);
    DOREPLIFETIME(UDataModule_Locomotion, m_RotationMode);
    DOREPLIFETIME(UDataModule_Locomotion, m_RequestedStance);
    DOREPLIFETIME(UDataModule_Locomotion, m_Stance);
    DOREPLIFETIME(UDataModule_Locomotion, m_MovementState);
    DOREPLIFETIME(UDataModule_Locomotion, m_PrevMovementState);
    DOREPLIFETIME(UDataModule_Locomotion, m_MovementAction);
    DOREPLIFETIME(UDataModule_Locomotion, m_RequestedMovementAction);
    DOREPLIFETIME(UDataModule_Locomotion, m_IsBuoyancyEnabled);
    DOREPLIFETIME(UDataModule_Locomotion, m_MovementInputAmount);
    DOREPLIFETIME(UDataModule_Locomotion, m_MaxSpeeds);
    DOREPLIFETIME(UDataModule_Locomotion, m_ClimbingInput);
    DOREPLIFETIME(UDataModule_Locomotion, m_RecoverDive);
    DOREPLIFETIME(UDataModule_Locomotion, m_JumpSurfaceType);
    DOREPLIFETIME(UDataModule_Locomotion, m_FallingSurfaceType);
    DOREPLIFETIME(UDataModule_Locomotion, m_FallingSurfaceDistance);
    DOREPLIFETIME(UDataModule_Locomotion, m_WaterDepthInJump);
    DOREPLIFETIME(UDataModule_Locomotion, m_TimeToImpact);
    DOREPLIFETIME(UDataModule_Locomotion, m_ImpactDelta);
    DOREPLIFETIME(UDataModule_Locomotion, m_JumpPeakHeight);
    DOREPLIFETIME(UDataModule_Locomotion, m_JumpPeakPosition);
    DOREPLIFETIME(UDataModule_Locomotion, m_TotalFallDistance);
    DOREPLIFETIME(UDataModule_Locomotion, m_LastMovementInputRotation);
    DOREPLIFETIME(UDataModule_Locomotion, m_LastMovementInput);
    DOREPLIFETIME(UDataModule_Locomotion, m_StartFallingZPosition);
    DOREPLIFETIME(UDataModule_Locomotion, m_StartFallingZDistance);
    DOREPLIFETIME(UDataModule_Locomotion, m_LocomotionConfig);
}


