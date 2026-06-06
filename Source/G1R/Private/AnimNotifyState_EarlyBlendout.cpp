#include "AnimNotifyState_EarlyBlendout.h"

UAnimNotifyState_EarlyBlendout::UAnimNotifyState_EarlyBlendout() {
    this->m_BlendoutTime = 0.10f;
    this->m_CheckMovementState = false;
    this->m_MovementState = EMovementState::Grounded;
    this->m_UpdateMovementStance = false;
    this->m_NewMovementState = EMovementState::Grounded;
    this->m_CheckMovementInput = false;
    this->m_CheckNoInput = false;
    this->m_CheckStance = false;
    this->m_Stance = EStance::Standing;
    this->m_CheckRotationMode = false;
    this->m_RotationMode = ERotationMode::LookingDirection;
    this->m_ForceBlendOut = false;
    this->m_IgnorePlayer = false;
    this->m_IgnoreAI = false;
}


