#include "InventoryDefinition.h"
#include "Templates/SubclassOf.h"

UInventoryDefinition::UInventoryDefinition() {
}

void UInventoryDefinition::CreateInventory(EInventoryTypes InventoryType, const FGameplayTagContainer& ItemCategories, int32 Capacity, bool IsInfinite) {
}

void UInventoryDefinition::AddToInventoryWithPayload(TSubclassOf<UItemDefinition> Item, FItemPayload Payload, int32 Amount, EInventoryTypes InventoryType) {
}

void UInventoryDefinition::AddToInventory(TSubclassOf<UItemDefinition> Item, int32 Amount, EInventoryTypes InventoryType) {
}


