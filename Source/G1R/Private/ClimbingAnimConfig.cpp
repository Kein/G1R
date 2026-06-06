#include "ClimbingAnimConfig.h"

UClimbingAnimConfig::UClimbingAnimConfig() {
    this->m_PlayRate = 1.00f;
    this->m_MinHeight = 0.00f;
    this->m_MaxHeight = 0.00f;
    this->m_WalkSpeed = EWalkSpeed::Walking;
    this->m_RelativeMovement = false;
    this->m_NextStepRequestWindowStart = 0.00f;
    this->m_NextStepRequestWindowSize = 0.00f;
    this->m_ClimbingType = EClimbType::None;
    this->m_MovementState = EMovementState::Traversing;
}

void UClimbingAnimConfig::AddMontage(FClimbingMontages Asset, EWalkSpeed Speed, bool Right) const {
}


