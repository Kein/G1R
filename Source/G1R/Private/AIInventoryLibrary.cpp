#include "AIInventoryLibrary.h"
#include "Templates/SubclassOf.h"

UDEPRECATED_AIInventoryLibrary::UDEPRECATED_AIInventoryLibrary() {
}

FGameplayAbilitySpecHandle UDEPRECATED_AIInventoryLibrary::UnEquipItem(AActor* Entity) {
    return FGameplayAbilitySpecHandle{};
}

void UDEPRECATED_AIInventoryLibrary::SetItemInSlot(AActor* Entity, EInventoryTypes Slot, const TSubclassOf<UItemDefinition> Item, int32 SlotId) {
}

int32 UDEPRECATED_AIInventoryLibrary::RemoveItem(const AActor* Entity, const TSubclassOf<UItemDefinition>& Item, int32 Count) {
    return 0;
}

bool UDEPRECATED_AIInventoryLibrary::IsItemEquipped(AActor* Entity) {
    return false;
}

TSubclassOf<UItemDefinition> UDEPRECATED_AIInventoryLibrary::GetItemInSlot(AActor* Entity, EInventoryTypes Slot) {
    return NULL;
}

TSubclassOf<UItemDefinition> UDEPRECATED_AIInventoryLibrary::GetEquippedItem(AActor* Entity) {
    return NULL;
}

int32 UDEPRECATED_AIInventoryLibrary::GetCountOfItem(AActor* Entity, TSubclassOf<UItemDefinition> Item) {
    return 0;
}

void UDEPRECATED_AIInventoryLibrary::AddItem(const AActor* Entity, const TSubclassOf<UItemDefinition>& Item, int32 Count) {
}


