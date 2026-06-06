#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameplayEffectTypes.h"
#include "GameplayEffectContext_HitResponse.h"
#include "GothicGameplayEffectContextHandleMixinLibrary.generated.h"

UCLASS()
class G1R_API UGothicGameplayEffectContextHandleMixinLibrary : public UObject {
    GENERATED_BODY()
public:
    UGothicGameplayEffectContextHandleMixinLibrary();

    UFUNCTION()
    static void SetHitContext(FGameplayEffectContextHandle& ContextHandle, FGameplayEffectContext_HitResponse HitData);
    
    UFUNCTION()
    static FGameplayEffectContext_HitResponse GetHitContext(const FGameplayEffectContextHandle& ContextHandle);
    
};

