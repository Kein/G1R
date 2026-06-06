#include "AnimNotifyState_ExecutionMagnet.h"

UAnimNotifyState_ExecutionMagnet::UAnimNotifyState_ExecutionMagnet() {
    this->m_TargetSocket = TEXT("spine_01");
    this->m_WeaponSocket = TEXT("weapon_r");
    this->m_HitboxName = TEXT("HitBoxCollision_Weapon");
}

void UAnimNotifyState_ExecutionMagnet::SetWeaponSocket(FName SocketName) const {
}

void UAnimNotifyState_ExecutionMagnet::SetTargetSocket(FName SocketName) const {
}

void UAnimNotifyState_ExecutionMagnet::SetHitBoxName(FName HitBoxName) const {
}


