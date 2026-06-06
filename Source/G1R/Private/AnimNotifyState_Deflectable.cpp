#include "AnimNotifyState_Deflectable.h"

UAnimNotifyState_Deflectable::UAnimNotifyState_Deflectable() {
    this->m_SocketName = TEXT("weapon_r");
    this->m_MinHeightToDeflect = 100.00f;
    this->m_MinAngleToDeflect = 90.00f;
    this->m_MaxAngleToDeflect = 180.00f;
    this->m_DeflectMethod = EDeflectMethod::BladeDirection;
    this->bInverted = false;
}

void UAnimNotifyState_Deflectable::SetMinHeightToDeflect(float MinHeightToDeflect) const {
}

void UAnimNotifyState_Deflectable::SetMinAngleToDeflect(float MinAngleToDeflect) const {
}

void UAnimNotifyState_Deflectable::SetMaxAngleToDeflect(float MaxAngleToDeflect) const {
}

void UAnimNotifyState_Deflectable::SetInverted(bool Inverted) const {
}

void UAnimNotifyState_Deflectable::SetDeflectMethod(EDeflectMethod DeflectMethod) const {
}

void UAnimNotifyState_Deflectable::SetDebug(bool Debug) const {
}

FString UAnimNotifyState_Deflectable::GetSocketName() const {
    return TEXT("");
}

float UAnimNotifyState_Deflectable::GetMinHeightToDeflect() const {
    return 0.0f;
}

float UAnimNotifyState_Deflectable::GetMinAngleToDeflect() const {
    return 0.0f;
}

float UAnimNotifyState_Deflectable::GetMaxAngleToDeflect() const {
    return 0.0f;
}

bool UAnimNotifyState_Deflectable::GetInverted() const {
    return false;
}

FString UAnimNotifyState_Deflectable::GetHitCollisionName() const {
    return TEXT("");
}

EDeflectMethod UAnimNotifyState_Deflectable::GetDeflectMethod() const {
    return EDeflectMethod::WorldUp;
}

bool UAnimNotifyState_Deflectable::GetDebug() const {
    return false;
}


