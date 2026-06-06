#include "AbilityTask_CraftItems.h"
#include "Templates/SubclassOf.h"

UAbilityTask_CraftItems::UAbilityTask_CraftItems() {
    this->m_ContainerActor = NULL;
}

UAbilityTask_CraftItems* UAbilityTask_CraftItems::CraftItems(UGameplayAbility* OwningAbility, const AInteractiveObjectActor* Container, TSubclassOf<UItemRecipeDefinition> recipe, int32 quantity, const bool isMultiStageState) {
    return NULL;
}


