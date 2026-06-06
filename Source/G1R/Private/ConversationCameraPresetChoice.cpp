#include "ConversationCameraPresetChoice.h"

AConversationCameraPresetChoice::AConversationCameraPresetChoice(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->NextSpeaker = NULL;
    this->NextListener = NULL;
    this->bNewPresetOnSameSpeaker = false;
    this->MinSpeakTime = 2.00f;
    this->NumFramesToBufferEvents = 2;
    this->FirstEventFrame = 0;
    this->RapidSkipSecondsTimeWindow = 0.50f;
}

bool AConversationCameraPresetChoice::DetermineNewSpeakerListener(const FGameplayEventData& EventData) {
    return false;
}

void AConversationCameraPresetChoice::BindPresetTagSubscriptionDelegateForPlayer(UAbilitySystemComponent* ASC) {
}

void AConversationCameraPresetChoice::BindPresetTagSubscriptionDelegateForParticipant(UAbilitySystemComponent* ASC) {
}

void AConversationCameraPresetChoice::AddParticipantsAbilitySystemComponent(UAbilitySystemComponent* ASC) {
}


