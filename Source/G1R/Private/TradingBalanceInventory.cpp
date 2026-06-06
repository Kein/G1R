#include "TradingBalanceInventory.h"
#include "InventoryBaseTrading.h"

UTradingBalanceInventory::UTradingBalanceInventory() {
    this->TileView_Items = NULL;
    this->m_InventoryBaseTrading = CreateDefaultSubobject<UInventoryBaseTrading>(TEXT("InventoryBase"));
    this->m_LinkedInventoryMain = NULL;
    this->m_InventoryOwner = NULL;
    this->m_GothicTraderPayload = NULL;
    this->m_InventoryOpenedState = EInventoryOpenedStates::Default;
}


TArray<UInventorySlotData*> UTradingBalanceInventory::UpdateInventory() {
    return TArray<UInventorySlotData*>();
}


void UTradingBalanceInventory::TradingInventoryClicked(int32 ItemId, EInventoryTypes InventoryType, int32 ItemAmount, UInventoryMain* InventoryMain) {
}

void UTradingBalanceInventory::RefreshInventory() {
}



void UTradingBalanceInventory::NativeOnInitialized() {
}


void UTradingBalanceInventory::HowManyItemsToTrade(int32 ItemId, EInventoryTypes eInventoryType, int32 ItemAmount, bool GettingItemsBack) {
}



FItemTooltipInfo UTradingBalanceInventory::GetSelectedItemTooltipInfo() const {
    return FItemTooltipInfo{};
}

int32 UTradingBalanceInventory::GetBalanceItemID(int32 ItemPos) {
    return 0;
}

void UTradingBalanceInventory::CleanUp() {
}

int32 UTradingBalanceInventory::CalculateSectionCost() {
    return 0;
}


