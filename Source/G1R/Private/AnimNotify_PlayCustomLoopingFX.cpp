#include "AnimNotify_PlayCustomLoopingFX.h"
#include "GothicFXDefinition.h"
#include "Templates/SubclassOf.h"

UAnimNotify_PlayCustomLoopingFX::UAnimNotify_PlayCustomLoopingFX() {
    this->PerceptionLoudness = EPerceptionNoiseLoudness::Moderate;
    this->PerceptionLength = EPerceptionSoundLengthType::Duration;
    this->bIsUnderWaterEffect = false;
    this->FXDefinition = NULL;
    this->FMODPreview = NULL;
    this->NiagaraPreview = NULL;
    this->FXDefinitionTemplate = UGothicFXDefinition::StaticClass();
}

void UAnimNotify_PlayCustomLoopingFX::SetTemplateClass(const TSubclassOf<UGothicFXDefinition> Template) const {
}


