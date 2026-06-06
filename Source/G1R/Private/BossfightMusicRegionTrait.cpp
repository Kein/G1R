#include "BossfightMusicRegionTrait.h"

UBossfightMusicRegionTrait::UBossfightMusicRegionTrait() {
    this->bRequireLocalPlayer = true;
    this->bHandleNonPlayerCharacters = false;
    this->DefaultContentID = TEXT("bossfightSleeper");
    this->Priority = 1.00f;
    this->HysteresisThreshold = 100.00f;
}

FName UBossfightMusicRegionTrait::GetContentID_Implementation() const {
    return NAME_None;
}


