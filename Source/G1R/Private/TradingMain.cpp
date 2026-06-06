#include "TradingMain.h"

UTradingMain::UTradingMain() {
    this->W_Trading_Balance = NULL;
    this->W_TradingInventory_Buy = NULL;
    this->W_TradingInventory_Sell = NULL;
    this->m_CurrentInputType = ECommonInputType::MouseAndKeyboard;
}

void UTradingMain::UpdatePayload(const UGothicTraderPayload* GothicTraderPayload) {
}





void UTradingMain::RegisterInputActions() {
}


void UTradingMain::OnCloseButtonPressed() {
}


bool UTradingMain::Initialization(const AActor* NPCToTrade, const UGothicTraderPayload* GothicTraderPayload) {
    return false;
}


void UTradingMain::CleanUp() {
}



