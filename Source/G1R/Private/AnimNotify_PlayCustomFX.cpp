#include "AnimNotify_PlayCustomFX.h"
#include "GothicFXDefinition.h"
#include "Templates/SubclassOf.h"

UAnimNotify_PlayCustomFX::UAnimNotify_PlayCustomFX() {
    this->FXDefinitionTemplate = UGothicFXDefinition::StaticClass();
    this->PerceptionLoudness = EPerceptionNoiseLoudness::Moderate;
    this->PerceptionLength = EPerceptionSoundLengthType::Instant;
    this->bIsUnderWaterEffect = false;
    this->bIsLooping = false;
    this->bIsInstantEffect = true;
    this->FMODPreview = NULL;
    this->NiagaraPreview = NULL;
    this->FXComponent = NULL;
}

void UAnimNotify_PlayCustomFX::SetTemplateClass(const TSubclassOf<UGothicFXDefinition> Template) const {
}

void UAnimNotify_PlayCustomFX::SetPerceptionParameter(FGameplayTag SoundTag, EPerceptionNoiseLoudness Loudness) const {
}

void UAnimNotify_PlayCustomFX::SetFMODEvent(TSoftObjectPtr<UFMODEvent> Event) const {
}

FGameplayTag UAnimNotify_PlayCustomFX::GetPerceptionSoundTag() const {
    return FGameplayTag{};
}

TSoftObjectPtr<UFMODEvent> UAnimNotify_PlayCustomFX::GetFMODEvent() const {
    return NULL;
}


