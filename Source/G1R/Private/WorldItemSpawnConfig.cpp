#include "WorldItemSpawnConfig.h"
#include "Templates/SubclassOf.h"

UWorldItemSpawnConfig::UWorldItemSpawnConfig() {
}

void UWorldItemSpawnConfig::SetWorldPoint(const FName& Name) {
}

void UWorldItemSpawnConfig::SetRefill(int32 refillTime) {
}

void UWorldItemSpawnConfig::SetInheritOwnershipFromArea(bool inherit) {
}

void UWorldItemSpawnConfig::AddOwnerGuild(const FGameplayTag& ownerGuild) {
}

void UWorldItemSpawnConfig::AddOwnerCharacter(TSubclassOf<UCharacterDefinition> OwnerCharacter) {
}

void UWorldItemSpawnConfig::AddItemsEvent(FName Name) {
}

void UWorldItemSpawnConfig::AddItem(int32 Amount, TSubclassOf<UItemDefinition> ItemClass) {
}


