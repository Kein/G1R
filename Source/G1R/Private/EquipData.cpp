#include "EquipData.h"

UEquipData::UEquipData() {
}

UAnimMontage* UEquipData::GetUnequipMontage(EStance stance, EHoldsterLocation HoldsterLocation) const {
    return NULL;
}

FName UEquipData::GetSocketDraw(EHoldsterLocation HoldsterLocation) const {
    return NAME_None;
}

FName UEquipData::GetSocket() const {
    return NAME_None;
}

UAnimMontage* UEquipData::GetPickAndEquipMontage(FName Height, EStance stance, EHoldsterLocation HoldsterLocation) const {
    return NULL;
}

UAnimMontage* UEquipData::GetEquipMontage(EStance stance, EHoldsterLocation HoldsterLocation) const {
    return NULL;
}

UAnimMontage* UEquipData::GetDropMontage(EStance stance, EHoldsterLocation HoldsterLocation, bool DropBackwards) const {
    return NULL;
}

UAnimMontage* UEquipData::GetDropAndEquipMontage(EStance stance, EHoldsterLocation HoldsterLocation) const {
    return NULL;
}


