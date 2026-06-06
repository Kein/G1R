#include "AnimNotifyState_FlyingMagnet.h"

UAnimNotifyState_FlyingMagnet::UAnimNotifyState_FlyingMagnet() {
    this->m_MagnetRangeXY = 10.00f;
    this->m_MagnetRangeZ = 10.00f;
    this->m_MagnetAngle = 180.00f;
    this->m_DistanceAfterAttack = 30.00f;
}

void UAnimNotifyState_FlyingMagnet::SetMagnetExtraRangeZ(float MagnetRangeZ) const {
}

void UAnimNotifyState_FlyingMagnet::SetMagnetExtraRangeXY(float MagnetRangeXY) const {
}

void UAnimNotifyState_FlyingMagnet::SetMagnetAngle(float MagnetAngle) const {
}

void UAnimNotifyState_FlyingMagnet::SetDistanceAfterAttack(float DistanceAfterAttack) const {
}


