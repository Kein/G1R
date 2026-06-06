#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "RegionNumItems.generated.h"

class UItemDefinition;

USTRUCT(BlueprintType)
struct FRegionNumItems {
    GENERATED_BODY()
public:
    UPROPERTY()
    TMap<TSubclassOf<UItemDefinition>, int32> m_Items;
    
    G1R_API FRegionNumItems();
};

