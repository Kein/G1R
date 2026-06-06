#include "AbilityTask_PickUpItem.h"
#include "Templates/SubclassOf.h"

UAbilityTask_PickUpItem::UAbilityTask_PickUpItem() {
    this->bEndWhenEnteredState = true;
}

UAbilityTask_PickUpItem* UAbilityTask_PickUpItem::TaskPickUpSpecificItem(UGameplayAbility* OwningAbility, AItemVisualWorld* Item) {
    return NULL;
}

UAbilityTask_PickUpItem* UAbilityTask_PickUpItem::TaskFindAndPickUpItem(UGameplayAbility* OwningAbility, TSubclassOf<UItemDefinition> ItemDefinition, const FVector& AtLocation, float ItemSearchRadius, float AllowedWalkRadius) {
    return NULL;
}


