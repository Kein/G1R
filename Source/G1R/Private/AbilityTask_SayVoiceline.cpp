#include "AbilityTask_SayVoiceline.h"

UAbilityTask_SayVoiceline::UAbilityTask_SayVoiceline() {
    this->AudioComponent = NULL;
    this->DynamicFacialMontage = NULL;
    this->SoundAttenuation = NULL;
    this->FacialAnimSlotName = TEXT("DialogFacials");
    this->FacialAnimBlendInTime = 0.15f;
    this->FacialAnimBlendOutTime = 0.25f;
}

UAbilityTask_SayVoiceline* UAbilityTask_SayVoiceline::TaskSayVoiceline(UGameplayAbility* OwningAbility, FText Text, FGameplayTag NewSoundKind) {
    return NULL;
}

bool UAbilityTask_SayVoiceline::HasAudioFile() const {
    return false;
}

void UAbilityTask_SayVoiceline::HandleAudioFinishedOrInterrupted() {
}


