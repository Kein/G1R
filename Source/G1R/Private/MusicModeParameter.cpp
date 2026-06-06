#include "MusicModeParameter.h"

UMusicModeParameter::UMusicModeParameter() {
    this->Mode = EMusicMode::Game;
    this->Priority = 0.00f;
}

bool UMusicModeParameter::IsWidgetClassActive(TSoftClassPtr<UCommonActivatableWidget> SoftWidgetClass) const {
    return false;
}

bool UMusicModeParameter::IsMapActive(UWorld* Map) const {
    return false;
}

bool UMusicModeParameter::IntroIsPlaying() const {
    return false;
}

AGothicCharacterState* UMusicModeParameter::GetPlayerCharacterState() const {
    return NULL;
}

AGothicCharacter* UMusicModeParameter::GetPlayerCharacter() const {
    return NULL;
}

UGothicAudioSettings* UMusicModeParameter::GetMusicSettings() const {
    return NULL;
}



