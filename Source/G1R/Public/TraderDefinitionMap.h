#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "TraderDefinitionMap.generated.h"

USTRUCT(BlueprintType)
struct G1R_API FTraderDefinitionMap {
    GENERATED_BODY()
public:
    UPROPERTY()
    TMap<FGameplayTag, float> m_PricesModifiers;
    
    FTraderDefinitionMap();
};

