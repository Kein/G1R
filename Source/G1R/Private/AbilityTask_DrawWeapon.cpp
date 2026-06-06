#include "AbilityTask_DrawWeapon.h"
#include "Templates/SubclassOf.h"

UAbilityTask_DrawWeapon::UAbilityTask_DrawWeapon() {
    this->bOnlyEndOnShouldEndNow = true;
    this->InventoryType = EInventoryTypes::None;
    this->SlotId = 0;
    this->ExpectedItemDefinition = NULL;
    this->CarryComponent = NULL;
}

UAbilityTask_DrawWeapon* UAbilityTask_DrawWeapon::TaskDrawWeapon(UGameplayAbility* OwningAbility, EInventoryTypes Type) {
    return NULL;
}

UAbilityTask_DrawWeapon* UAbilityTask_DrawWeapon::TaskDrawTorch(UGameplayAbility* OwningAbility) {
    return NULL;
}

UAbilityTask_DrawWeapon* UAbilityTask_DrawWeapon::TaskDrawRangedWeapon(UGameplayAbility* OwningAbility) {
    return NULL;
}

UAbilityTask_DrawWeapon* UAbilityTask_DrawWeapon::TaskDrawMeleeWeapon(UGameplayAbility* OwningAbility) {
    return NULL;
}

UAbilityTask_DrawWeapon* UAbilityTask_DrawWeapon::TaskDrawMagic(UGameplayAbility* OwningAbility, TSubclassOf<USpellContainer> SpellType) {
    return NULL;
}


