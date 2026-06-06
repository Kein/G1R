#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TraderInventoryMap.generated.h"

class UItemDefinition;

USTRUCT(BlueprintType)
struct G1R_API FTraderInventoryMap {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TMap<TSubclassOf<UItemDefinition>, int32> m_Items;
    
    FTraderInventoryMap();
};

