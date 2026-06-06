#include "SimpleInventoryWidget.h"

USimpleInventoryWidget::USimpleInventoryWidget() {
    this->m_WidgetTabSelector = NULL;
    this->m_WidgetTabs = NULL;
    this->Button_Action = NULL;
    this->Button_Close = NULL;
    this->m_IsShown = false;
    this->m_ShowCloseButton = false;
    this->m_ShowActionButton = false;
    this->m_CurrentInputType = ECommonInputType::MouseAndKeyboard;
    this->m_FilterVisibility = EInventoryFilterVisibility::DisableEmpty;
}

void USimpleInventoryWidget::ShowWidget(bool _bShow) {
}

void USimpleInventoryWidget::Refresh() {
}


void USimpleInventoryWidget::OnCloseClicked() {
}

void USimpleInventoryWidget::OnActionbuttonClicked() {
}

bool USimpleInventoryWidget::IsShown() {
    return false;
}

void USimpleInventoryWidget::InventoryItemClicked(int32 ItemId, EInventoryTypes InventoryType, int32 ItemAmount, UInventoryMain* _Inventory) {
}

void USimpleInventoryWidget::InitializeTab(int32 _Index, UInventoryMain* _Inventory, AActor* _Owner, EInventoryOpenedStates _State, const UGothicTraderPayload* _Payload) {
}

UInventoryMain* USimpleInventoryWidget::GetCurrentInventory() {
    return NULL;
}

void USimpleInventoryWidget::EnableInput() {
}


void USimpleInventoryWidget::DisableInput() {
}

void USimpleInventoryWidget::CreateTabs() {
}

void USimpleInventoryWidget::ClickCurrentItem() {
}




