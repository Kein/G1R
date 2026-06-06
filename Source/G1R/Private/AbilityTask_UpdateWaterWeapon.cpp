#include "AbilityTask_UpdateWaterWeapon.h"

UAbilityTask_UpdateWaterWeapon::UAbilityTask_UpdateWaterWeapon() {
    this->m_Character = NULL;
    this->m_CarryComponent = NULL;
}

UAbilityTask_UpdateWaterWeapon* UAbilityTask_UpdateWaterWeapon::UpdateWaterWeapon(UGameplayAbility* OwningAbility, FName TaskInstanceName) {
    return NULL;
}

void UAbilityTask_UpdateWaterWeapon::OnGroundWeaponUnequipped() {
}

void UAbilityTask_UpdateWaterWeapon::EquipWaterWalkingWeapon() {
}

void UAbilityTask_UpdateWaterWeapon::EquipSwimmingWeapon() {
}

void UAbilityTask_UpdateWaterWeapon::CheckWaterWeapons() {
}


