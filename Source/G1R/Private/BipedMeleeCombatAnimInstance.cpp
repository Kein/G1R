#include "BipedMeleeCombatAnimInstance.h"

UBipedMeleeCombatAnimInstance::UBipedMeleeCombatAnimInstance() {
    this->m_CombatStance = ECombatStance::Idle;
    this->m_DesiredCombatStance = ECombatStance::Idle;
    this->m_TransitionHorizontal = 0.00f;
    this->m_TransitionVertical = 0.00f;
}

void UBipedMeleeCombatAnimInstance::OnResetPose() const {
}


