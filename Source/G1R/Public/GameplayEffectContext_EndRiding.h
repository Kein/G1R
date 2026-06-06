#pragma once
#include "CoreMinimal.h"
#include "GameplayEffectTypes.h"
#include "GameplayEffectContext_EndRiding.generated.h"

USTRUCT()
struct G1R_API FGameplayEffectContext_EndRiding : public FGameplayEffectContext {
    GENERATED_BODY()
public:
    FGameplayEffectContext_EndRiding();
};

