#include "GothicMovementComponent.h"
#include "Engine/EngineTypes.h"
#include "Net/UnrealNetwork.h"

UGothicMovementComponent::UGothicMovementComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bUseAccelerationForPaths = true;
    this->NetworkSmoothingMode = ENetworkSmoothingMode::Linear;
    this->StepSmoothStiffness = 500.00f;
    this->StepSmoothDamping = 28.00f;
    this->StepSmoothMinZDelta = 1.50f;
    this->m_wallSideEdge = false;
    this->m_wallVerticalEdge = false;
    this->m_WaterFrictionMultiplier = 1.00f;
    this->m_AnimInstance = NULL;
    this->m_Character = NULL;
    this->m_NewMaxSpeed = 0.00f;
    this->m_SpeedForCurve = 0.00f;
    this->m_MaxWaterfallForceSpeed = 450.00f;
    this->m_LocomotionCurveConfig = NULL;
    this->m_GroundConfig = NULL;
    this->m_ClimbingConfig = NULL;
    this->m_JumpConfig = NULL;
    this->m_SwimConfig = NULL;
    this->m_AbilitySystemComponent = NULL;
    this->m_TrajectoryGenerator = NULL;
    this->m_AnimationComponent = NULL;
    this->m_WalkSpeedModifierComponent = NULL;
    this->m_PreviousWaterEffect = NULL;
    this->m_MaxSecondsBeingStuck = 5.00f;
}

void UGothicMovementComponent::SetCheatFlying(bool Value) {
}

void UGothicMovementComponent::Server_SetWallSideEdge_Implementation(bool WallSideEdge) {
}

void UGothicMovementComponent::Server_SetVerticalEdge_Implementation(bool VerticalEdge) {
}

void UGothicMovementComponent::Server_SetCapsuleHalfHeight_Implementation(float HalfHeight) {
}

void UGothicMovementComponent::OnRepSpeedForCurve() {
}

void UGothicMovementComponent::OnRepNewMaxSpeed() {
}

void UGothicMovementComponent::Multicast_SetCapsuleHalfHeight_Implementation(float HalfHeight) {
}

bool UGothicMovementComponent::IsMovingOnSlope() const {
    return false;
}

float UGothicMovementComponent::GetWaterInDepth() const {
    return 0.0f;
}

float UGothicMovementComponent::GetWaterDepth() const {
    return 0.0f;
}

float UGothicMovementComponent::GetWalkToSwimHeight() {
    return 0.0f;
}

FVector UGothicMovementComponent::GetStartMovingDirection() const {
    return FVector{};
}

EWalkSpeed UGothicMovementComponent::GetRequestedWalkSpeed() const {
    return EWalkSpeed::Walking;
}

FVector UGothicMovementComponent::GetPivotCheckDirection() const {
    return FVector{};
}

float UGothicMovementComponent::GetMovingSlopeAngle() const {
    return 0.0f;
}

float UGothicMovementComponent::GetCurrentSpeed() {
    return 0.0f;
}

float UGothicMovementComponent::GetCurrentMaxSpeed() {
    return 0.0f;
}

FRotator UGothicMovementComponent::GetControllerRotation() {
    return FRotator{};
}

void UGothicMovementComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UGothicMovementComponent, m_wallSideEdge);
    DOREPLIFETIME(UGothicMovementComponent, m_wallVerticalEdge);
    DOREPLIFETIME(UGothicMovementComponent, m_WaterFrictionMultiplier);
    DOREPLIFETIME(UGothicMovementComponent, m_VelocityPreJump);
    DOREPLIFETIME(UGothicMovementComponent, m_NewMaxSpeed);
    DOREPLIFETIME(UGothicMovementComponent, m_SpeedForCurve);
    DOREPLIFETIME(UGothicMovementComponent, m_ControllerRotation);
}


