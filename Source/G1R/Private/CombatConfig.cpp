#include "CombatConfig.h"

UCombatConfig::UCombatConfig() {
    this->m_RootMotionMod_AttacksHits = 1.00f;
    this->m_RootMotionMod_DodgesHorizontal = 1.00f;
    this->m_RootMotionMod_DodgesVertical = 1.00f;
    this->m_Pity_Critical_Increase = 5.00f;
    this->m_ParryMode = EParryMode::ModeB;
    this->m_DrawDodge = false;
    this->m_DisableMagnetForAll = false;
    this->m_DrawMagnet = false;
    this->m_UseDebugMagnetAngle = false;
    this->m_DebugMagnetAngle = 0.00f;
    this->m_PrintMagnetData = false;
    this->m_PrintRootMotionMultiplier = false;
    this->m_ShowMagnetBack = false;
    this->m_DisableMultiplierSuperArmor = false;
    this->m_HideSuperArmorBars = true;
    this->m_ShowComboDebug = false;
    this->m_ShowLastKeyPressedDebug = false;
    this->m_GodMode = false;
    this->m_ParryCheatMode = false;
    this->m_AdditiveHits = true;
    this->m_DrawDamageSweeps = false;
    this->m_EnableFakeSloppyCombos = true;
}

bool UCombatConfig::IsGodModeOn() const {
    return false;
}

bool UCombatConfig::GetUseDebugMagnetAngle() const {
    return false;
}

bool UCombatConfig::GetShowMagnetBack() const {
    return false;
}

bool UCombatConfig::GetShowLastKeyPressedDebug() const {
    return false;
}

bool UCombatConfig::GetShowComboDebug() const {
    return false;
}

bool UCombatConfig::GetPrintRootMotionMultiplier() const {
    return false;
}

bool UCombatConfig::GetPrintMagnetData() const {
    return false;
}

float UCombatConfig::GetPityCriticalIncrease() const {
    return 0.0f;
}

EParryMode UCombatConfig::GetParryMode() const {
    return EParryMode::ModeA;
}

bool UCombatConfig::GetParryCheatMode() const {
    return false;
}

bool UCombatConfig::GetHideSuperArmorBars() const {
    return false;
}

bool UCombatConfig::GetDrawMagnet() const {
    return false;
}

bool UCombatConfig::GetDrawDodge() const {
    return false;
}

bool UCombatConfig::GetDrawDamageSweeps() const {
    return false;
}

bool UCombatConfig::GetDisableMultiplierSuperArmor() const {
    return false;
}

bool UCombatConfig::GetDisableMagnetForAll() const {
    return false;
}

float UCombatConfig::GetDebugMagnetAngle() const {
    return 0.0f;
}

bool UCombatConfig::AdditiveHits() const {
    return false;
}


