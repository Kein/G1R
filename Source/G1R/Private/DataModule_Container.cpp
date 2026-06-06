#include "DataModule_Container.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

UDataModule_Container::UDataModule_Container() {
}

void UDataModule_Container::Server_RefreshInventory_Implementation() {
}

void UDataModule_Container::Server_ReattachIfNeeded_Implementation() {
}

void UDataModule_Container::Server_PickWorldItem_Implementation(AActor* interactiveActor, bool destroy, UNiagaraSystem* Niagara, bool hasWater, float waterZ, bool canQuick) {
}

void UDataModule_Container::Server_MoveItemTo_Implementation(int32 FromItemId, EInventoryTypes InventoryFrom, int32 ToItemId, EInventoryTypes InventoryTo) {
}

void UDataModule_Container::Server_MoveItemFromActorToOtherActor_Implementation(const AActor* Actor, const AActor* OtherActor, int32 ItemPos, EInventoryTypes InventorySlot, int32 Amount, EInventoryTypes targetInventorySlot) {
}

void UDataModule_Container::Server_GetItemsFromContainerInv_Implementation(UDataModule_Container* ContainerToGetItems, const TArray<int32>& itemsNumListKeys, const TArray<int32>& itemsNumListValues, EInventoryTypes InventoryType, EInventoryTypes inventoryEnd) {
}

void UDataModule_Container::Server_Debug_EmptyInventory_Implementation() {
}

void UDataModule_Container::Server_ConsumeItemOfType_Implementation(EInventoryTypes InventoryType, TSubclassOf<UItemDefinition> ItemDefinition, int32 ItemAmount) {
}

void UDataModule_Container::Server_ConsumeItem_Implementation(EInventoryTypes InventoryType, uint32 ID, int32 ItemAmount) {
}

void UDataModule_Container::Server_AddNewItem_Implementation(EInventoryTypes InventoryType, TSubclassOf<UItemDefinition> ItemDefinition, int32 ItemAmount, FItemPayload Payload) {
}

void UDataModule_Container::Server_AddAllItemsFromContainer_Implementation(UDataModule_Container* ContainerToGetItems, FGameplayTagContainer TagFilter, FGameplayTagContainer tagAdd) {
}

void UDataModule_Container::Multicast_RefreshInventory_Implementation(FReplicatedInventoryMap Inventory) {
}

void UDataModule_Container::Multicast_PickWorldItem_Implementation(AActor* interactiveActor, bool destroy, UNiagaraSystem* Niagara, bool hasWater, float waterZ, bool canQuick) {
}

void UDataModule_Container::Multicast_MoveItemTo_Implementation(int32 FromItemId, EInventoryTypes InventoryFrom, int32 ToItemId, EInventoryTypes InventoryTo, bool LocalPredicted) {
}

void UDataModule_Container::Multicast_GetItemsFromContainerInv_Implementation(UDataModule_Container* ContainerToGetItems, const TArray<int32>& itemsNumListKeys, const TArray<int32>& itemsNumListValues, EInventoryTypes InventoryType, EInventoryTypes inventoryEnd, bool LocalPredicted) {
}

void UDataModule_Container::Multicast_Debug_EmptyInventory_Implementation() {
}

void UDataModule_Container::Multicast_ConsumeItemOfType_Implementation(EInventoryTypes InventoryType, TSubclassOf<UItemDefinition> ItemDefinition, int32 ItemAmount, bool LocalPredicted) {
}

void UDataModule_Container::Multicast_ConsumeItem_Implementation(EInventoryTypes InventoryType, uint32 ID, int32 ItemAmount, bool LocalPredicted) {
}

void UDataModule_Container::Multicast_AddNewItem_Implementation(EInventoryTypes InventoryType, TSubclassOf<UItemDefinition> ItemDefinition, int32 ItemAmount, FItemPayload Payload, bool LocalPredicted) {
}

void UDataModule_Container::Multicast_AddAllItemsFromContainer_Implementation(UDataModule_Container* ContainerToGetItems, FGameplayTagContainer TagFilter, FGameplayTagContainer tagAdd, bool LocalPredicted) {
}

bool UDataModule_Container::HasItemWithUniqueName(const FName& UniqueName) const {
    return false;
}

EInventoryTypes UDataModule_Container::HasItemOnAnyQuickInventory(const TSubclassOf<UItemDefinition>& ItemDefinition) const {
    return EInventoryTypes::None;
}

bool UDataModule_Container::HasItemOnAnyInventory(const TSubclassOf<UItemDefinition>& ItemDefinition) const {
    return false;
}

bool UDataModule_Container::HasItemMain(const TSubclassOf<UItemDefinition>& ItemDefinition, int32 itemCount, int32& hasItemCount) const {
    return false;
}

TArray<FItemVirtualData> UDataModule_Container::GetItemsInConst(EInventoryTypes InventoryType) {
    return TArray<FItemVirtualData>();
}

TArray<FItemVirtualData> UDataModule_Container::GetItemsIn(EInventoryTypes InventoryType) {
    return TArray<FItemVirtualData>();
}

bool UDataModule_Container::GetFirstItemWithUniqueName(TSubclassOf<UItemDefinition>& ItemDefinition, const FName& UniqueName) const {
    return false;
}

bool UDataModule_Container::GetFirstItemWithType(FGameplayTag ItemType, TSubclassOf<UItemDefinition>& ItemDefinition, EInventoryTypes& InventoryType, int32& SlotId) const {
    return false;
}

void UDataModule_Container::ConsumeItemOfType(TSubclassOf<UItemDefinition> ItemDefinition, int32 itemCount, EInventoryTypes Inventory) {
}

void UDataModule_Container::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UDataModule_Container, m_Inventory);
}


