#include "BipedRangedCombatAnimInstance.h"

UBipedRangedCombatAnimInstance::UBipedRangedCombatAnimInstance() {
    this->m_HasAmmo = false;
    this->m_IsArrowLoaded = false;
    this->m_IsReloading = false;
    this->m_IsDrawing = false;
    this->m_IsQuickshoot = false;
    this->m_CanDoAiming = false;
    this->m_CurrentWeapon = NULL;
    this->m_DrawAnimationRate = 1.00f;
    this->m_NotchAnimationRate = 1.00f;
    this->m_DrawingStringAlpha = 0.00f;
    this->m_DrawingStringTime = 0.00f;
    this->m_StartDrawStringResistanceAtRatio = 0.30f;
    this->m_FinishDrawStringResistanceAtRatio = 0.80f;
}


