#include "QuadrupedMeleeCombatAnimInstance.h"

UQuadrupedMeleeCombatAnimInstance::UQuadrupedMeleeCombatAnimInstance() {
    this->m_CombatStance = ECombatStance::Idle;
    this->m_DesiredCombatStance = ECombatStance::Idle;
    this->m_TransitionHorizontal = 0.00f;
    this->m_TransitionVertical = 0.00f;
}

void UQuadrupedMeleeCombatAnimInstance::OnResetPose() const {
}


