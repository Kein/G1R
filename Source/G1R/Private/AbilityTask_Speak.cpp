#include "AbilityTask_Speak.h"

UAbilityTask_Speak::UAbilityTask_Speak() {
    this->TargetCharacter = NULL;
    this->bUnskippable = false;
    this->Loudness = EPerceptionNoiseLoudness::Quiet;
}

UAbilityTask_Speak* UAbilityTask_Speak::TaskSpeakGenericVoicelineQueue(UGameplayAbility* OwningAbility, const TArray<FGameplayTag>& NewSoundTags, EPerceptionNoiseLoudness NewLoudness, AGothicCharacter* NewTargetCharacter, bool NewBUnskippable) {
    return NULL;
}

UAbilityTask_Speak* UAbilityTask_Speak::TaskSpeakGenericVoiceline(UGameplayAbility* OwningAbility, const FGameplayTag& SoundTag, EPerceptionNoiseLoudness NewLoudness, AGothicCharacter* NewTargetCharacter, bool NewBUnskippable) {
    return NULL;
}

UAbilityTask_Speak* UAbilityTask_Speak::TaskSpeak(UGameplayAbility* OwningAbility, FText NewText, FGameplayTag NewExpression, EPerceptionNoiseLoudness NewLoudness, AGothicCharacter* NewTargetCharacter, bool NewBUnskippable, FName NewForcedSubtitleLanguage) {
    return NULL;
}

bool UAbilityTask_Speak::CanSayGenericVoiceline(UGameplayAbility* OwningAbility, const FGameplayTag& SoundTag) {
    return false;
}


