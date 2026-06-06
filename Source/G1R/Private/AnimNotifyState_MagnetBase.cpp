#include "AnimNotifyState_MagnetBase.h"

UAnimNotifyState_MagnetBase::UAnimNotifyState_MagnetBase() {
    this->m_DamageBone = TEXT("weapon_r");
    this->m_MagnetConfigType = EMagnetConfig::SetByFurthestDamagePoint;
    this->m_CoreBone = TEXT("Pelvis");
    this->m_DamageNotifyIndex = 0.00f;
    this->m_DebugConfigClass = NULL;
}

void UAnimNotifyState_MagnetBase::SetMagnetConfigType(EMagnetConfig NewMagnetConfigType) const {
}

void UAnimNotifyState_MagnetBase::SetDamageBone(FName DamageBone) const {
}

void UAnimNotifyState_MagnetBase::SetCoreBone(FName coreBone) const {
}

EMagnetConfig UAnimNotifyState_MagnetBase::GetMagnetConfigType() const {
    return EMagnetConfig::SetByBestAlignment;
}


