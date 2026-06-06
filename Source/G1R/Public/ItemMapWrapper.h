#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ItemMapWrapper.generated.h"

class UItemDefinition;

USTRUCT(BlueprintType)
struct FItemMapWrapper {
    GENERATED_BODY()
public:
    UPROPERTY()
    TMap<int32, TSubclassOf<UItemDefinition>> ItemsList;
    
    G1R_API FItemMapWrapper();
};

