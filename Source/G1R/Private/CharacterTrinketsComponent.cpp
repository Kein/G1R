#include "CharacterTrinketsComponent.h"
#include "Templates/SubclassOf.h"

UCharacterTrinketsComponent::UCharacterTrinketsComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UCharacterTrinketsComponent::ServerNotifyTrinketUnEquip_Implementation(EInventoryTypes InventoryType) {
}

void UCharacterTrinketsComponent::ServerNotifyTrinketChanged_Implementation(EInventoryTypes InventoryType, TSubclassOf<UItemDefinition> itemDef) {
}


