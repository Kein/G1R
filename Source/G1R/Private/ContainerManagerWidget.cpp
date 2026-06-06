#include "ContainerManagerWidget.h"

UContainerManagerWidget::UContainerManagerWidget() : UUserWidget(FObjectInitializer::Get()) {
}

void UContainerManagerWidget::UpdateQuickWheel_Implementation() {
}

void UContainerManagerWidget::UpdateInventoryItemsInteractiveComponent_Implementation(FContainerVirtualData newItemMainContainer) {
}

void UContainerManagerWidget::StartQuickAction(const EInventoryTypes invType, const int32 ID) const {
}

void UContainerManagerWidget::ItemRemoveNewByPos(int32 Pos) {
}

bool UContainerManagerWidget::ItemIsNewByPos(int32 Pos) {
    return false;
}

bool UContainerManagerWidget::IsRangedWeapon(int32 Pos) {
    return false;
}

bool UContainerManagerWidget::IsMeleeWeapon(int32 Pos) {
    return false;
}

float UContainerManagerWidget::GetStrDeltaEquippedVsInventoryByPos_Implementation(int32 Pos) {
    return 0.0f;
}

int32 UContainerManagerWidget::GetNumberOfDifferentItems_Implementation() {
    return 0;
}

FItemVirtualData UContainerManagerWidget::GetItemVirtualDataByPos_Implementation(int32 Pos) {
    return FItemVirtualData{};
}

FText UContainerManagerWidget::GetItemValueByPos_Implementation(int32 Pos) const {
    return FText::GetEmpty();
}

FGameplayTag UContainerManagerWidget::GetItemTypeByPos_Implementation(int32 Pos) const {
    return FGameplayTag{};
}

TMap<FString, int32> UContainerManagerWidget::GetItemStatsByPos_Implementation(int32 Pos) {
    return TMap<FString, int32>();
}

int32 UContainerManagerWidget::GetItemPosByGuid_Implementation(FGuid Guid) {
    return 0;
}

FText UContainerManagerWidget::GetItemNameByPos_Implementation(int32 Pos) const {
    return FText::GetEmpty();
}

FGuid UContainerManagerWidget::GetItemGuidByPos_Implementation(int32 Pos) {
    return FGuid{};
}

FText UContainerManagerWidget::GetItemDescriptionByPos_Implementation(int32 Pos) const {
    return FText::GetEmpty();
}

int32 UContainerManagerWidget::GetItemAmountByPos_Implementation(int32 Pos) {
    return 0;
}

EInventoryTypes UContainerManagerWidget::GetInventoryTypeByPos(int32& Pos) const {
    return EInventoryTypes::None;
}

int32 UContainerManagerWidget::GetInventorySize_Implementation(int32 Pos) {
    return 0;
}

int32 UContainerManagerWidget::GetEquippedPosition(int32 Pos) {
    return 0;
}

bool UContainerManagerWidget::EquipItem_Implementation(int32 Pos, int32 DestinationEquipPos) {
    return false;
}

void UContainerManagerWidget::EnableDisableInput(bool Enable) {
}

void UContainerManagerWidget::DisableCrosshair() {
}


