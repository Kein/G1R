#include "AnimNotify_PlayLoopingFX.h"

UAnimNotify_PlayLoopingFX::UAnimNotify_PlayLoopingFX() {
    this->FMODPreviewInstance = NULL;
    this->NiagaraPreviewInstance = NULL;
}

void UAnimNotify_PlayLoopingFX::SetPreviewNiagara(TSoftObjectPtr<UNiagaraSystem> NiagaraSystem, FVector PositionOffset, FRotator PreviewRotationOffset) const {
}

void UAnimNotify_PlayLoopingFX::SetEffectTag(FGameplayTag Tag) const {
}

void UAnimNotify_PlayLoopingFX::SetAttachPoint(FName bone) const {
}


