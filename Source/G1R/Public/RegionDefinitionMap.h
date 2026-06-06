#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "RegionDefinitionMap.generated.h"

USTRUCT(BlueprintType)
struct G1R_API FRegionDefinitionMap {
    GENERATED_BODY()
public:
    UPROPERTY()
    TMap<FGameplayTag, float> m_PricesModifiers;
    
    FRegionDefinitionMap();
};

