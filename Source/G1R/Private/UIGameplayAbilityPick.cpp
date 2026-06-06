#include "UIGameplayAbilityPick.h"

UUIGameplayAbilityPick::UUIGameplayAbilityPick() {
    this->StandardNotificationList = NULL;
    this->StandardNotificationBPClass = NULL;
    this->PickedItemAmount = 0;
    this->PickedItemCategory = EInventoryFilterTypes::Melee;
}

void UUIGameplayAbilityPick::ItemPicked(const FItemVirtualData& ItemToAdd) {
}


