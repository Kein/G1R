#include "AnimNotify_PlayFX.h"

UAnimNotify_PlayFX::UAnimNotify_PlayFX() {
    this->FMODPreviewInstance = NULL;
    this->NiagaraPreviewInstance = NULL;
}

void UAnimNotify_PlayFX::SetPreviewNiagara(TSoftObjectPtr<UNiagaraSystem> NiagaraSystem, FVector PositionOffset, FRotator PreviewRotationOffset) const {
}

void UAnimNotify_PlayFX::SetEffectTag(FGameplayTag Tag) const {
}

void UAnimNotify_PlayFX::SetAttachPoint(FName bone) const {
}


