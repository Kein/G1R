#include "ResourcesDifficultySettings.h"

UResourcesDifficultySettings::UResourcesDifficultySettings() {
    this->m_PlayerBuyModifier = 1.00f;
    this->m_PlayerSellModifier = 0.50f;
    this->m_RegenTime = 1.00f;
    this->m_SurPlusValueModifier = 0.50f;
    this->m_OreSpendingThreshold = 0.15f;
    this->m_MiniumPurchasePower = 10.00f;
    this->m_MaterialsGuaranteedRatio = 0.30f;
    this->m_ConsumablesGuaranteedRatio = 0.20f;
}

float UResourcesDifficultySettings::GetPlayerSellModifier() const {
    return 0.0f;
}

float UResourcesDifficultySettings::GetPlayerBuyModifier() const {
    return 0.0f;
}


