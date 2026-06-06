#include "MusicRegionTrait.h"

UMusicRegionTrait::UMusicRegionTrait() {
    this->bRequireLocalPlayer = true;
    this->bHandleNonPlayerCharacters = false;
    this->MusicLocation = TEXT("World");
    this->Priority = 1.00f;
    this->HysteresisThreshold = 100.00f;
    this->DefaultCustomValue = 0.00f;
}

AGothicCharacter* UMusicRegionTrait::GetPlayerCharacter() const {
    return NULL;
}

float UMusicRegionTrait::GetCustomValue_Implementation() const {
    return 0.0f;
}


