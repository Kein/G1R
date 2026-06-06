#include "AnimNotifyState_Damage.h"

UAnimNotifyState_Damage::UAnimNotifyState_Damage() {
    this->m_DamageSocketName = TEXT("weapon_r");
    this->m_MeshComp = NULL;
}

void UAnimNotifyState_Damage::SetHitCollisionName(const FString& HitBoxName) const {
}

void UAnimNotifyState_Damage::SetDamageBone(FName SocketName) const {
}


