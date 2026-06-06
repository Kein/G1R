#include "GenericVoicelineComponent.h"

UGenericVoicelineComponent::UGenericVoicelineComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

bool UGenericVoicelineComponent::SayVoicelineWithContext(const FGameplayTag& VoicelineTag, const AGothicCharacterState* OptionalOther, const FGenericVoicelineRequestContext& Context, EPerceptionNoiseLoudness Loudness) {
    return false;
}

bool UGenericVoicelineComponent::SayVoiceline(const FGameplayTag& VoicelineTag, const AGothicCharacterState* OptionalOther, EPerceptionNoiseLoudness Loudness) {
    return false;
}

bool UGenericVoicelineComponent::SayMultipleVoicelinesWithContext(const TArray<FGameplayTag>& VoicelineTags, const AGothicCharacterState* OptionalOther, const FGenericVoicelineRequestContext& Context, EPerceptionNoiseLoudness Loudness) {
    return false;
}

bool UGenericVoicelineComponent::SayMultipleVoicelines(const TArray<FGameplayTag>& VoicelineTags, const AGothicCharacterState* OptionalOther, EPerceptionNoiseLoudness Loudness) {
    return false;
}

bool UGenericVoicelineComponent::HasVoiceType(const FGameplayTag& VoiceType) const {
    return false;
}

bool UGenericVoicelineComponent::HasVoicelineForWithContext(const FGameplayTag& VoicelineTag, const AGothicCharacterState* OptionalOther, const FGenericVoicelineRequestContext& Context) const {
    return false;
}

bool UGenericVoicelineComponent::HasVoicelineFor(const FGameplayTag& VoicelineTag, const AGothicCharacterState* OptionalOther) const {
    return false;
}


