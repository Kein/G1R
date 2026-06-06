#pragma once
#include "CoreMinimal.h"
#include "IslandGroupWrapper.generated.h"

USTRUCT(BlueprintType)
struct FIslandGroupWrapper {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<uint64> NodeIDs;
    
    UPROPERTY()
    bool bOrdered;
    
    G1R_API FIslandGroupWrapper();
};

