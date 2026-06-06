#include "GothicUIManager.h"

UGothicUIManager::UGothicUIManager() : UUserWidget(FObjectInitializer::Get()) {
}

void UGothicUIManager::UpdateQuickWheel_Implementation() {
}

void UGothicUIManager::UpdateInventoryItemsByFilter_Implementation(const TArray<FName>& TagNames) {
}

void UGothicUIManager::StoreItem_Implementation(FItemVirtualData NewItemData) {
}

void UGothicUIManager::StartQuickAction(const EInventoryTypes invType, const int32 ID) const {
}

void UGothicUIManager::ItemRemoveNewByPos(int32 Pos) {
}

bool UGothicUIManager::ItemIsNewByPos(int32 Pos) {
    return false;
}

bool UGothicUIManager::IsRangedWeapon(int32 Pos) {
    return false;
}

bool UGothicUIManager::IsMeleeWeapon(int32 Pos) {
    return false;
}

float UGothicUIManager::GetStrDeltaEquippedVsInventoryByPos_Implementation(int32 Pos) {
    return 0.0f;
}

int32 UGothicUIManager::GetNumberOfDifferentItems_Implementation() {
    return 0;
}

FText UGothicUIManager::GetItemValueByPos_Implementation(int32 Pos) const {
    return FText::GetEmpty();
}

FGameplayTag UGothicUIManager::GetItemTypeByPos_Implementation(int32 Pos) const {
    return FGameplayTag{};
}

TMap<FString, int32> UGothicUIManager::GetItemStatsByPos_Implementation(int32 Pos) {
    return TMap<FString, int32>();
}

int32 UGothicUIManager::GetItemPosByGuid_Implementation(FGuid Guid) {
    return 0;
}

FText UGothicUIManager::GetItemNameByPos_Implementation(int32 Pos) const {
    return FText::GetEmpty();
}

FGuid UGothicUIManager::GetItemGuidByPos_Implementation(int32 Pos) {
    return FGuid{};
}

FText UGothicUIManager::GetItemDescriptionByPos_Implementation(int32 Pos) const {
    return FText::GetEmpty();
}

int32 UGothicUIManager::GetItemAmountByPos_Implementation(int32 Pos) {
    return 0;
}

EInventoryTypes UGothicUIManager::GetInventoryTypeByPos(int32& Pos) const {
    return EInventoryTypes::None;
}

int32 UGothicUIManager::GetInventorySize_Implementation(int32 Pos) {
    return 0;
}

int32 UGothicUIManager::GetIdByPos(int32 Pos) {
    return 0;
}

int32 UGothicUIManager::GetEquippedPosition(int32 Pos) {
    return 0;
}

bool UGothicUIManager::EquipItem_Implementation(int32 Pos, int32 DestinationEquipPos) {
    return false;
}

void UGothicUIManager::EnableDisableInput(bool Enable) {
}

void UGothicUIManager::DisableCrosshair() {
}


