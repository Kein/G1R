#include "InventoryLootContainer.h"
#include "UInventoryBaseLoot.h"

UInventoryLootContainer::UInventoryLootContainer() {
    this->TileView_Items = NULL;
    this->InventoryWidget = NULL;
    this->bCanStoreItems = false;
    this->ContainerActor = NULL;
    this->InventoryWorkContainer = CreateDefaultSubobject<UUInventoryBaseLoot>(TEXT("InventoryBaseLoot"));
    this->m_CurrentInputType = ECommonInputType::MouseAndKeyboard;
}

void UInventoryLootContainer::TransferItems(float _Amount) {
}

bool UInventoryLootContainer::ToggleInventory() {
    return false;
}

void UInventoryLootContainer::TakeAllItems() {
}

void UInventoryLootContainer::SwitchFocusToLootContainer() {
}

void UInventoryLootContainer::SwitchFocusToInventory() {
}



bool UInventoryLootContainer::RefreshInventory() {
    return false;
}

void UInventoryLootContainer::OnSelectionChanged(int32 OldIndex, UObject* OldItem, int32 NewIndex, UObject* NewItem) {
}



void UInventoryLootContainer::OnItemIsHoveredChanged(int32 Index, UObject* Item, bool bIsHovered) {
}

void UInventoryLootContainer::OnItemClickedOnInventoryWidget(int32 _ItemID, EInventoryTypes _InventoryType, UInventoryMain* _Inventory) {
}

void UInventoryLootContainer::OnItemClicked(EAlkMouseButton _MouseButton, int32 Index, UObject* ItemClicked) {
}



void UInventoryLootContainer::NativeOnInitialized() {
}


FText UInventoryLootContainer::GetActorName() {
    return FText::GetEmpty();
}


