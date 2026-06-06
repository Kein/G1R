#include "GameplayAbilityMumble.h"

UGameplayAbilityMumble::UGameplayAbilityMumble() {
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::ServerOnly;
    this->AbilityTriggers.AddDefaulted(1);
    this->m_ActivateAbilityOnGranted = true;
    this->MinSecondsBetweenSentences = 5.00f;
    this->SecondsBetweenSentencesVariance = 5.00f;
}

bool UGameplayAbilityMumble::TrySaySentence(const FVoicelineAssignment& Voiceline) {
    return false;
}

bool UGameplayAbilityMumble::SayRandomSentence() {
    return false;
}

bool UGameplayAbilityMumble::IsSpeakingRightNow() const {
    return false;
}

UGenericVoicelineComponent* UGameplayAbilityMumble::GetAvatarVoicelines() const {
    return NULL;
}

AGothicCharacter* UGameplayAbilityMumble::GetAvatarCharacter() const {
    return NULL;
}

bool UGameplayAbilityMumble::CanSayAnySentenceNow() const {
    return false;
}


