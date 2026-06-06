#include "InventoryMain.h"

UInventoryMain::UInventoryMain() {
    this->bIsFocusable = true;
    this->TileView_Items = NULL;
    this->GenericFilter = NULL;
    this->ActivateStats = false;
    this->ActivateEquip = true;
    this->ActivateTooltip = false;
    this->m_FilterVisibility = EInventoryFilterVisibility::DisableEmpty;
    this->Health = 0.00f;
    this->Mana = 0.00f;
    this->Strength = 0.00f;
    this->Dexterity = 0.00f;
    this->Toughness = 0.00f;
    this->SkillPoints = 0.00f;
    this->MagicCircle = 0.00f;
    this->LastItemClicked = 0;
    this->ActivatedFilter = EInventoryFilterTypes::Melee;
    this->InventoryOwner = NULL;
    this->InventoryOpenedState = EInventoryOpenedStates::Default;
    this->m_CurrentInputType = ECommonInputType::MouseAndKeyboard;
    this->InventoryBase = NULL;
    this->InventoryBaseTrading = NULL;
    this->TargetActor = NULL;
    this->Instigator = NULL;
    this->m_ItemIdToEquip = 0;
    this->m_LastHoveredIndex = -1;
    this->m_GothicTraderPayload = NULL;
}

void UInventoryMain::UpdatePayload(const UGothicTraderPayload* GothicTraderPayload) {
}


void UInventoryMain::ToggleQuickSlotAction() {
}

void UInventoryMain::StopWearableEquipMode(int32 _ItemID, EInventoryTypes _InventoryType, bool _bEquip) {
}




void UInventoryMain::SelectFirstItem() {
}

void UInventoryMain::SelectFilterForItem(FGameplayTag _FilterTag, const UItemDefinition* _Item) {
}



void UInventoryMain::RefreshInventory(bool _PreserveScrollOffset) {
}


void UInventoryMain::OnReceivedItemClicked(int32 ItemPos, EInventoryTypes InventoryType) {
}

void UInventoryMain::OnItemRemoved() {
}



void UInventoryMain::OnItemAdded(const UItemDefinition* NewItem, int32 Count) {
}

void UInventoryMain::NativeOnInitialized() {
}

void UInventoryMain::NativeDestruct() {
}

int32 UInventoryMain::LastSelectedItemIndex() {
    return 0;
}

bool UInventoryMain::IsWearableEquipmentMode() const {
    return false;
}

void UInventoryMain::InputReceivedUse() {
}

void UInventoryMain::InputReceivedUnequip() {
}

void UInventoryMain::InputReceivedDrop(int32 Index) {
}





void UInventoryMain::HandleInputTypeChanged(ECommonInputType _InputType) {
}

int32 UInventoryMain::GetOreCount() {
    return 0;
}

EInventoryTypes UInventoryMain::GetItemInventoryTypeByPos(int32 Pos) {
    return EInventoryTypes::None;
}

AActor* UInventoryMain::GetInventoryOwner() const {
    return NULL;
}

EInventoryOpenedStates UInventoryMain::GetInventoryOpenedState() {
    return EInventoryOpenedStates::Default;
}

UInventoryBase* UInventoryMain::GetInventoryBase() {
    return NULL;
}

void UInventoryMain::ExecuteDropItem(int32 NumItemsDropped) {
}

void UInventoryMain::EnableList() {
}


void UInventoryMain::EnableInput() {
}

void UInventoryMain::DisableList() {
}


void UInventoryMain::DisableInput() {
}

void UInventoryMain::ClickCurrentItem() {
}

void UInventoryMain::ClearSelection() {
}

void UInventoryMain::ClearItemTooltip() {
}


