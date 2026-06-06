#include "GroundConfig.h"

UGroundConfig::UGroundConfig() {
    this->m_UpdateRotationMinimumSpeed = 150.00f;
    this->m_TargetInterpSpeedInteractuablesRotation = 200.00f;
    this->m_TargetInterpSpeedVelocityDirection = 800.00f;
    this->m_TargetInterpSpeedLookingDirection = 500.00f;
    this->m_TargetInterpSpeedAiming = 1000.00f;
    this->m_ActorInterpSpeedFallingAiming = 15.00f;
    this->m_ActorInterpFalling = 5.00f;
    this->m_GroundedRotationRate_Aiming = 20.00f;
    this->m_GroundedRotationRate_Roll = 2.00f;
    this->m_GroundedRotationRate_Dodge = 2.00f;
    this->m_VelocityBlendInterpSpeed = 12.00f;
    this->m_GroundedLeanInterpSpeed = 4.00f;
    this->m_SmoothedAimingRotationInterpSpeed = 10.00f;
    this->m_InputYawOffsetInterpSpeed = 8.00f;
    this->m_MovementInputMinimumAmountToSprint = 0.90f;
    this->m_MovementInputMaximumYawToSprint = 50.00f;
    this->m_UpdateGaitSpeedOffset = 10.00f;
    this->m_LimitMovementOnEdge = false;
    this->m_MaxStepHeightNormal = 45.00f;
    this->m_MaxStepHeightStrafe = 45.00f;
    this->m_CrouchCapsuleHeight = 40.00f;
    this->m_EnterSlopeDegrees = 35.00f;
    this->m_ExitSlopeDegrees = 25.00f;
}


