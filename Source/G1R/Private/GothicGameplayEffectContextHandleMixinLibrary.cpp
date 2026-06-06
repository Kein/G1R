#include "GothicGameplayEffectContextHandleMixinLibrary.h"

UGothicGameplayEffectContextHandleMixinLibrary::UGothicGameplayEffectContextHandleMixinLibrary() {
}

void UGothicGameplayEffectContextHandleMixinLibrary::SetHitContext(FGameplayEffectContextHandle& ContextHandle, FGameplayEffectContext_HitResponse HitData) {
}

FGameplayEffectContext_HitResponse UGothicGameplayEffectContextHandleMixinLibrary::GetHitContext(const FGameplayEffectContextHandle& ContextHandle) {
    return FGameplayEffectContext_HitResponse{};
}


