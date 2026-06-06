#include "VFXCue.h"

AVFXCue::AVFXCue(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    //FIXME this->bNeverApplyTickOptimizations = true;
    this->m_removeTarget = NULL;
    this->m_Instigator = NULL;
}

bool AVFXCue::WhileActive_Implementation(AActor* MyTarget, const FGameplayCueParameters& Parameters) {
    return false;
}

bool AVFXCue::OnRemove_Implementation(const FGameplayCueParameters& Parameters) {
    return false;
}

bool AVFXCue::OnExecute_Implementation(AActor* MyTarget, const FGameplayCueParameters& Parameters) {
    return false;
}

void AVFXCue::OnCastSpellLevelChanged_Implementation(int32 spellLevel) {
}

void AVFXCue::OnCancel_Implementation(float totalCastingTime) {
}

bool AVFXCue::OnActive_Implementation(AActor* MyTarget, const FGameplayCueParameters& Parameters) {
    return false;
}

void AVFXCue::MarkAsAbleToRemove() {
}


