#include "NPCTalkBalloonComponent.h"

UNPCTalkBalloonComponent::UNPCTalkBalloonComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanEverAffectNavigation = false;
    this->SecondsToWaitForNextVoiceline = 0.75f;
    this->m_IsPlayerCharacter = false;
}

void UNPCTalkBalloonComponent::HandleCharacterStartedSpeakingSentence_Implementation(const FText& Text, float Duration, AGothicCharacter* TargetCharacter) {
}

void UNPCTalkBalloonComponent::HandleCharacterFinishedSpeakingSentence_Implementation() {
}

UGothicTalkBalloonWidget* UNPCTalkBalloonComponent::GetTalkBalloonWidget() const {
    return NULL;
}


