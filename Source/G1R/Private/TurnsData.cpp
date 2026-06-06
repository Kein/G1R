#include "TurnsData.h"

UTurnsData::UTurnsData() {
    this->m_CounterChance = 0.00f;
    this->m_TurnOnSpotConfig = NULL;
}

UAnimMontage* UTurnsData::GetStartMoving90R() const {
    return NULL;
}

UAnimMontage* UTurnsData::GetStartMoving90L() const {
    return NULL;
}

UAnimMontage* UTurnsData::GetStartMoving180R() const {
    return NULL;
}

UAnimMontage* UTurnsData::GetStartMoving180L() const {
    return NULL;
}

bool UTurnsData::GetStartDirection(EWalkSpeed Speed, EPivotTrigger Direction, FDynamicMontage& Anim, bool Standing) const {
    return false;
}

bool UTurnsData::GetQuickStops(EWalkSpeed Speed, bool isLeftFoot, FDynamicMontage& Montage, bool Standing) const {
    return false;
}

bool UTurnsData::GetPivotDirection(EWalkSpeed Speed, EPivotTrigger Direction, FDynamicMontage& Anim, bool Standing) const {
    return false;
}

FDynamicMontage UTurnsData::GetPivot180() const {
    return FDynamicMontage{};
}


