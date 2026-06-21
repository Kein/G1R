#include "2DAudioSubsystem.h"

U2DAudioSubsystem::U2DAudioSubsystem() {
    this->FMODCutsceneEvent = NULL;
    this->FMODUIEvent = NULL;
    this->CinematicFMODEvent = NULL;
    this->SequencePlayer = NULL;
}

void U2DAudioSubsystem::PlayOneShot(TSoftObjectPtr<UFMODEvent> SoftEvent) {
}

void U2DAudioSubsystem::PlayCutsceneAudioTrack(const FString& MovieClip) {
}

void U2DAudioSubsystem::PlayChapterJingle(int32 Chapter) {
}

void U2DAudioSubsystem::Play2DAudioFromTextID(FText TextID, UFMODEvent* FMODEvent) {
}

void U2DAudioSubsystem::Play2DAudioFromCutscene(const FString& MovieClip, ULevelSequenceDirector* Sequence) {
}

void U2DAudioSubsystem::HandleSequenceStopped() {
}


