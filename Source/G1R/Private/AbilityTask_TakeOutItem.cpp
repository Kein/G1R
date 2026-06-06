#include "AbilityTask_TakeOutItem.h"
#include "Templates/SubclassOf.h"

UAbilityTask_TakeOutItem::UAbilityTask_TakeOutItem() {
    this->bOnlyEndOnShouldEndNow = true;
    this->ItemDefinition = NULL;
    this->bAttachOnly = false;
}

UAbilityTask_TakeOutItem* UAbilityTask_TakeOutItem::TaskTakeOutItem(UGameplayAbility* OwningAbility, TSubclassOf<UItemDefinition> NewItemDefinition) {
    return NULL;
}

UAbilityTask_TakeOutItem* UAbilityTask_TakeOutItem::TaskAttachItem(UGameplayAbility* OwningAbility, TSubclassOf<UItemDefinition> NewItemDefinition) {
    return NULL;
}


