#include "AbilityTask_ConsumeItem.h"
#include "Templates/SubclassOf.h"

UAbilityTask_ConsumeItem::UAbilityTask_ConsumeItem() {
    this->KindOfItem = NULL;
}

UAbilityTask_ConsumeItem* UAbilityTask_ConsumeItem::TaskConsumeItem(UGameplayAbility* OwningAbility, TSubclassOf<UItemDefinition> NewKindOfItem) {
    return NULL;
}


