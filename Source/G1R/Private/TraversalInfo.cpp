#include "TraversalInfo.h"

FTraversalInfo::FTraversalInfo() {
    this->m_HasLastHitPoint = false;
    this->m_ObstacleHeight = 0.00f;
    this->m_ObstacleWidth = 0.00f;
    this->m_MovementState = EMovementState::None;
    this->m_ClimbType = EClimbType::None;
    this->m_IsStuck = false;
    this->m_Speed = EWalkSpeed::Walking;
    this->m_Input = EWalkSpeed::Walking;
}

