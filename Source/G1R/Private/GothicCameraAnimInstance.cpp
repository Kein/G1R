#include "GothicCameraAnimInstance.h"

UGothicCameraAnimInstance::UGothicCameraAnimInstance() {
    this->m_Character = NULL;
    this->m_AbilitySystemComponent = NULL;
    this->m_GeneralConfigCamera = NULL;
    this->m_RightShoulder = false;
    this->m_MovementState = EMovementState::None;
    this->m_MovementAction = EMovementAction::None;
    this->m_RotationMode = ERotationMode::LookingDirection;
    this->m_WalkSpeed = EWalkSpeed::Walking;
    this->m_Stance = EStance::Standing;
    this->m_InCombat = false;
    this->m_EnemiesGroundAround = 0;
    this->m_EnemiesFlyAround = 0;
}

float UGothicCameraAnimInstance::GetRotationModeBlendTime(ERotationMode RotationMode) const {
    return 0.0f;
}


