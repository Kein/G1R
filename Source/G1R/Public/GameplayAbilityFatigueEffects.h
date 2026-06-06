#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameplayAbilityFatigueEffects.generated.h"

class UScriptGameplayEffect;

USTRUCT(BlueprintType)
struct FGameplayAbilityFatigueEffects {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    TArray<TSubclassOf<UScriptGameplayEffect>> m_GameplayEffects;
    
    G1R_API FGameplayAbilityFatigueEffects();
};

