#include "BowAnimInstance.h"

UBowAnimInstance::UBowAnimInstance() {
    this->Enable_BowString_Correction = 0.00f;
    this->m_Completion = 0.00f;
    this->m_IsAiming = false;
    this->m_IsEquipped = false;
    this->m_IsReloaded = false;
    this->m_IsReloading = false;
    this->m_Character = NULL;
    this->m_AbilitySystemComponent = NULL;
    this->m_ArcheryComponent = NULL;
    this->m_Weapon = NULL;
}


