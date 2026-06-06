#include "HUDTradingController.h"

UHUDTradingController::UHUDTradingController() {
    this->m_WidgetClass = NULL;
    this->m_GothicPlayerController = NULL;
    this->m_TradingMain = NULL;
    this->m_GothicTraderPayload = NULL;
}

bool UHUDTradingController::OpenTradingScreen(const AActor* NPCToTrade, const UGothicTraderPayload* GothicTraderPayload) {
    return false;
}

void UHUDTradingController::OnTradingScreenCloseButtonPressed() {
}

void UHUDTradingController::OnTradingAccepted() {
}

FString UHUDTradingController::GetBlueprintName() {
    return TEXT("");
}

void UHUDTradingController::DoPurchase(const UGothicTraderPayload* GothicTraderPayload) {
}

void UHUDTradingController::CloseTradingScreen() {
}


