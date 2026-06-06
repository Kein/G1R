#include "MusicManager.h"

UMusicManager::UMusicManager() {
    this->CurrentMusicModeClass = NULL;
}

void UMusicManager::PlayMusic() {
}

bool UMusicManager::PlayerIsInBossFightMusicRegion() const {
    return false;
}

void UMusicManager::HandleLoadingScreenChanged(ELoadingScreenType LoadingScreenType) {
}

UMusicManager* UMusicManager::Get(const UObject* WorldContextObject) {
    return NULL;
}


