#include "KnockbackData.h"

UKnockbackData::UKnockbackData() {
    this->m_KnockbackFloorRange = 2.00f;
    this->m_KnockbackTopRange = 5.00f;
    this->m_MontageLoopSection = TEXT("Loop");
    this->m_MontageEndLoopSection = TEXT("LoopEnd");
    this->m_KnockbackEffect = NULL;
    this->m_RootMotionMultiplierBreakArmorHit = 1.00f;
    this->m_RootMotionMultiplierKnockback = 1.00f;
}

float UKnockbackData::GetStunnedRandomTime() const {
    return 0.0f;
}


