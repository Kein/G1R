#pragma once
#include "CoreMinimal.h"
#include "MemoryFilter.generated.h"

class ULongTermMemoryComponent;

USTRUCT(BlueprintType)
struct FMemoryFilter {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced)
    ULongTermMemoryComponent* Owner;
    
    G1R_API FMemoryFilter();
};

