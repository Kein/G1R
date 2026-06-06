#include "AnimNotify_PlayCustomFXByActorTag.h"
#include "GothicFXDefinition.h"

UAnimNotify_PlayCustomFXByActorTag::UAnimNotify_PlayCustomFXByActorTag() {
    this->PerceptionLoudness = EPerceptionNoiseLoudness::Moderate;
    this->PerceptionLength = EPerceptionSoundLengthType::Instant;
    this->bIsUnderWaterEffect = false;
    this->bIsLooping = false;
    this->bIsInstantEffect = true;
    this->FMODPreview = NULL;
    this->NiagaraPreview = NULL;
    this->FXDefinitionTemplate = UGothicFXDefinition::StaticClass();
    this->FXDefinition = NULL;
}

void UAnimNotify_PlayCustomFXByActorTag::SetPerceptionParameter(FGameplayTag SoundTag, EPerceptionNoiseLoudness Loudness) const {
}

FGameplayTag UAnimNotify_PlayCustomFXByActorTag::GetPerceptionSoundTag() const {
    return FGameplayTag{};
}


