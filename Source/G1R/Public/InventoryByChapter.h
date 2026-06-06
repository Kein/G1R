#pragma once
#include "CoreMinimal.h"
#include "TraderInventoryMap.h"
#include "InventoryByChapter.generated.h"

USTRUCT(BlueprintType)
struct FInventoryByChapter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TMap<FString, FTraderInventoryMap> m_ItemsByChapter;
    
    G1R_API FInventoryByChapter();
};

