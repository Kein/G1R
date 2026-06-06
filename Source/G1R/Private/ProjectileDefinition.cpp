#include "ProjectileDefinition.h"

UProjectileDefinition::UProjectileDefinition() {
    this->m_Name = FText::FromString(TEXT("Projectile"));
    this->m_Radius = 1.00f;
    this->m_ArcParam = 0.45f;
    this->m_CurrentTarget = NULL;
}

void UProjectileDefinition::SetDrawDebugLines(bool Enabled) {
}

void UProjectileDefinition::SetAimingMinDistance(float Distance) {
}

void UProjectileDefinition::SetAimingMaxTurnAngle(float Angle) {
}

void UProjectileDefinition::SetAimingMaxDistance(float Distance) {
}

bool UProjectileDefinition::GetDrawDebugLines() {
    return false;
}

void UProjectileDefinition::EnableAimingAssistance(bool Enable) {
}


