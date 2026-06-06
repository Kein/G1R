#include "InventoryPreset.h"
#include "Templates/SubclassOf.h"

UInventoryPreset::UInventoryPreset() {
    this->CleanInventory = false;
    this->ApplyArmor = false;
}

void UInventoryPreset::ApplyPreset(AActor* Actor) const {
}

void UInventoryPreset::AddToTypeToPreset(FGameplayTag ItemType) {
}

void UInventoryPreset::AddToInventoryPreset(TSubclassOf<UItemDefinition> Item, int32 Amount, EInventoryTypes InventoryType) {
}


