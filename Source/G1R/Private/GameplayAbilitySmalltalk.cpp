#include "GameplayAbilitySmalltalk.h"

UGameplayAbilitySmalltalk::UGameplayAbilitySmalltalk() {
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::ServerOnly;
    this->AbilityTriggers.AddDefaulted(1);
    this->MinSecondsBetweenSentences = 5.00f;
    this->SecondsBetweenSentencesVariance = 5.00f;
    this->TalkLoudness = EPerceptionNoiseLoudness::Quiet;
    this->MaxSmalltalkPartnerDistance = 500.00f;
    this->CurrentTopicMultiplicator = 5.00f;
    this->CurrentSubtopicMultiplicator = 3.00f;
    this->SubTopicImportance = 0.50f;
    this->MonologLimit = 3;
    this->MaxTopicAge = 30.00f;
}

bool UGameplayAbilitySmalltalk::TrySaySentence(const FVoicelineAssignment& Voiceline) {
    return false;
}

bool UGameplayAbilitySmalltalk::SayRandomSentence() {
    return false;
}

bool UGameplayAbilitySmalltalk::IsSpeakingRightNow() const {
    return false;
}

bool UGameplayAbilitySmalltalk::IsHoldingMonolog() const {
    return false;
}

bool UGameplayAbilitySmalltalk::IsAnyoneSpeakingRightNow() const {
    return false;
}

bool UGameplayAbilitySmalltalk::HasAnyoneBeenSpeakingRecently(float Seconds) const {
    return false;
}

void UGameplayAbilitySmalltalk::HandleSomeoneWantsToSmalltalk(const FRememberedPerception& Perception, const FPerceptionShortTermMemory& Memory) {
}

void UGameplayAbilitySmalltalk::HandleSomeoneQuitSmalltalk(const FRememberedPerception& Perception, const FPerceptionShortTermMemory& Memory) {
}

AGothicCharacter* UGameplayAbilitySmalltalk::GetRandomOtherSmalltalkParticipant() const {
    return NULL;
}

TSet<AGothicCharacter*> UGameplayAbilitySmalltalk::GetOtherSmalltalkParticipants() const {
    return TSet<AGothicCharacter*>();
}

UGenericVoicelineComponent* UGameplayAbilitySmalltalk::GetAvatarVoicelines() const {
    return NULL;
}

AGothicCharacter* UGameplayAbilitySmalltalk::GetAvatarCharacter() const {
    return NULL;
}

TMap<FGameplayTag, float> UGameplayAbilitySmalltalk::GatherOngoingTopicsAndWeights() const {
    return TMap<FGameplayTag, float>();
}

FGameplayTag UGameplayAbilitySmalltalk::ChooseNextSmalltalkTopic() const {
    return FGameplayTag{};
}

bool UGameplayAbilitySmalltalk::CanSayAnySentenceNow() const {
    return false;
}


