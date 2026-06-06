#include "RiderIKAnimInstance.h"

URiderIKAnimInstance::URiderIKAnimInstance() {
    this->m_LeftFootSocketName = TEXT("ik_riderFoot_target_l");
    this->m_RightFootSocketName = TEXT("ik_riderFoot_target_r");
    this->m_HandsSocketName = TEXT("ik_riderHands_target");
    this->m_EnableFootIK_Left = 0.00f;
    this->m_EnableFootIK_Right = 0.00f;
    this->m_EnableHandsIK = 1.00f;
}

void URiderIKAnimInstance::OnRidingStart(AGothicCharacter* mountCharacter) {
}

void URiderIKAnimInstance::OnPlayerStateSet(APlayerState* newPlayerState, APlayerState* oldPlayerState) {
}

void URiderIKAnimInstance::OnAbilityActivated(UGameplayAbility* GameplayAbility) {
}


