#include "AnimNotifyState_MeleeMagnet.h"

UAnimNotifyState_MeleeMagnet::UAnimNotifyState_MeleeMagnet() {
    this->m_MagnetRange = 10.00f;
    this->m_MagnetRangeAI = 10.00f;
    this->m_MagnetAngle = 180.00f;
    this->m_UseNewRelocationSystem = false;
    this->m_PivotDistanceTip = 0.00f;
    this->m_PivotDistanceHandle = 0.00f;
    this->m_DistanceAfterAttack = 30.00f;
    this->m_AllowNegativeRMScale = true;
    this->m_OverrideRootMotionScaleRate = false;
    this->m_CustomRootMotionScaleRate = 0.00f;
    this->m_OverrideRotationSpeed = false;
    this->m_CustomRotationSpeed = 0.00f;
}

void UAnimNotifyState_MeleeMagnet::SetPivotTipDistance(float PivotDistance) const {
}

void UAnimNotifyState_MeleeMagnet::SetPivotHandleDistance(float PivotDistance) const {
}

void UAnimNotifyState_MeleeMagnet::SetMagnetExtraRangePlayer(float MagnetRange) const {
}

void UAnimNotifyState_MeleeMagnet::SetMagnetExtraRangeAI(float MagnetRange) const {
}

void UAnimNotifyState_MeleeMagnet::SetMagnetAngle(float MagnetAngle) const {
}

void UAnimNotifyState_MeleeMagnet::SetDistanceAfterAttack(float DistanceAfterAttack) const {
}

void UAnimNotifyState_MeleeMagnet::SetAllowNegativeRMScale(bool Allow) const {
}


