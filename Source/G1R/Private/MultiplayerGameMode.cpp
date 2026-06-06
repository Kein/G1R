#include "MultiplayerGameMode.h"
#include "G1RGameState.h"

AMultiplayerGameMode::AMultiplayerGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GameStateClass = AG1RGameState::StaticClass();
    this->MaxNumPlayers = 4;
}

void AMultiplayerGameMode::StartGame() {
}

bool AMultiplayerGameMode::JoinSession(const FString& SessionId) {
    return false;
}

bool AMultiplayerGameMode::HasLobbyMap() const {
    return false;
}

bool AMultiplayerGameMode::HasCurrentSession() const {
    return false;
}

TSoftObjectPtr<UWorld> AMultiplayerGameMode::GetGameMapSoftPtr() const {
    return NULL;
}

uint8 AMultiplayerGameMode::GetFindSessionsStatus() const {
    return 0;
}

FString AMultiplayerGameMode::GetCurrentSessionIdStr() const {
    return TEXT("");
}

TArray<FOnlineSessionFindResult> AMultiplayerGameMode::GetAvailableSessions() const {
    return TArray<FOnlineSessionFindResult>();
}

void AMultiplayerGameMode::FindSessions() {
}

void AMultiplayerGameMode::EndSession() {
}

void AMultiplayerGameMode::DestroySessionAndLeaveGame() {
}

void AMultiplayerGameMode::CreateSession(bool isLAN) {
}


