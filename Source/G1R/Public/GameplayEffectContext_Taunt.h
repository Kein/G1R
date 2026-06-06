#pragma once
#include "CoreMinimal.h"
#include "GameplayEffectTypes.h"
#include "GameplayTagContainer.h"
#include "GameplayEffectContext_Taunt.generated.h"

USTRUCT(BlueprintType)
struct G1R_API FGameplayEffectContext_Taunt : public FGameplayEffectContext {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTagContainer AllTagsRequiredContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTagContainer OneTagRequiredContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTagContainer BlockedTags;
    
    FGameplayEffectContext_Taunt();
};

