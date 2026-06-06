#include "InventoryBase.h"

UInventoryBase::UInventoryBase() {
}

void UInventoryBase::StaticMoveItemBetweenInventoryTypes(AActor* Actor, int32 ItemPos, EInventoryTypes InventorySlot1, EInventoryTypes InventorySlot2) {
}

void UInventoryBase::MoveItemBetweenInventoryTypes(int32 ItemPos, EInventoryTypes InventorySlot1, EInventoryTypes InventorySlot2) {
}

int32 UInventoryBase::ItemsNum() {
    return 0;
}

bool UInventoryBase::IsItemValidByPos(int32 ItemPos) {
    return false;
}

bool UInventoryBase::GetItemWearableEquipped(int32 ItemPos) {
    return false;
}

int32 UInventoryBase::GetItemValueByPos(int32 ItemPos) {
    return 0;
}

FString UInventoryBase::GetItemType(UItemDefinition* Item) {
    return TEXT("");
}

FText UInventoryBase::GetItemNameByPos(int32 ItemPos) const {
    return FText::GetEmpty();
}

EInventoryTypes UInventoryBase::GetItemInventoryTypeByPos(int32 ItemPos) {
    return EInventoryTypes::None;
}

int32 UInventoryBase::GetItemIdByPos(int32 ItemPos) {
    return 0;
}

int32 UInventoryBase::GetItemHotkeyByActorAndPos(int32 ItemPos) {
    return 0;
}

FText UInventoryBase::GetItemDescriptionByPos(int32 ItemPos) const {
    return FText::GetEmpty();
}

int32 UInventoryBase::GetItemAmountByPos(int32 ItemPos) {
    return 0;
}

int32 UInventoryBase::GetInventoryOreCount() {
    return 0;
}

TSoftObjectPtr<UTexture2D> UInventoryBase::GetIconPathByPos(int32 ItemPos) {
    return NULL;
}

UItemDefinition* UInventoryBase::GetBaseConfigByPos(int32 ItemPos) const {
    return NULL;
}


