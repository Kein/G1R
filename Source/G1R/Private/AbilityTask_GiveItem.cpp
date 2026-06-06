#include "AbilityTask_GiveItem.h"
#include "Templates/SubclassOf.h"

UAbilityTask_GiveItem::UAbilityTask_GiveItem() {
    this->ItemToGive = NULL;
    this->Count = 1;
    this->ReceivingCharacterState = NULL;
}

UAbilityTask_GiveItem* UAbilityTask_GiveItem::TaskGiveItem(UGameplayAbility* OwningAbility, AGothicCharacterState* NewReceivingCharacterState, TSubclassOf<UItemDefinition> NewItemToGive, int32 NewCount) {
    return NULL;
}


