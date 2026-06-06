#include "EffectComponentActivatedByTag.h"

UEffectComponentActivatedByTag::UEffectComponentActivatedByTag(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_PreviousTagCount = 0;
}

void UEffectComponentActivatedByTag::RestartEffect() {
}

void UEffectComponentActivatedByTag::OnTagRemoved(const FGameplayTag CallbackTag, int32 NewCount) {
}

void UEffectComponentActivatedByTag::OnTagAdded(const FGameplayTag CallbackTag, int32 NewCount) {
}

void UEffectComponentActivatedByTag::OnNewOrRemovedTag(const FGameplayTag CallbackTag, int32 NewCount) {
}

void UEffectComponentActivatedByTag::OnGameplayEffectRemovedExtended(const FGameplayEffectRemovalInfo& GameplayEffectRemovalInfo) {
}

FGameplayTag UEffectComponentActivatedByTag::GetGameplayTag() {
    return FGameplayTag{};
}

TArray<FActiveGameplayEffectHandle> UEffectComponentActivatedByTag::GetActiveGameplayEffectsWithTag_Scriptable_Implementation(UGothicAbilitySystemComponent* abComp) {
    return TArray<FActiveGameplayEffectHandle>();
}


