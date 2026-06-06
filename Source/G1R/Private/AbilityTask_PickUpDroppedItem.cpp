#include "AbilityTask_PickUpDroppedItem.h"
#include "Templates/SubclassOf.h"

UAbilityTask_PickUpDroppedItem::UAbilityTask_PickUpDroppedItem() {
    this->bEndWhenEnteredState = true;
    this->ItemDefinition = NULL;
}

UAbilityTask_PickUpDroppedItem* UAbilityTask_PickUpDroppedItem::TaskFindAndPickUpDroppedItem(UGameplayAbility* OwningAbility, TSubclassOf<UItemDefinition> NewItemDefinition, const FVector& AtLocation, float ItemSearchRadius, float AllowedWalkRadius) {
    return NULL;
}


