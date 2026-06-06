#include "AbilityTask_SwapWeaponFromInventoryToAnother.h"

UAbilityTask_SwapWeaponFromInventoryToAnother::UAbilityTask_SwapWeaponFromInventoryToAnother() {
    this->InventoryType = EInventoryTypes::None;
    this->SlotId = 0;
    this->ExpectedItemDefinition = NULL;
    this->CarryComponent = NULL;
    this->DataModule_Container = NULL;
    this->InventoryComponent = NULL;
}

UAbilityTask_SwapWeaponFromInventoryToAnother* UAbilityTask_SwapWeaponFromInventoryToAnother::TaskEquipItem(UGameplayAbility* OwningAbility, FGameplayTag ItemType) {
    return NULL;
}


