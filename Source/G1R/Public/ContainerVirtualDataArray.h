#pragma once
#include "CoreMinimal.h"
#include "Net/Serialization/FastArraySerializer.h"
#include "ContainerVirtualData.h"
#include "ContainerVirtualDataArray.generated.h"

USTRUCT(BlueprintType)
struct FContainerVirtualDataArray : public FFastArraySerializer {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FContainerVirtualData> Items;
    
    G1R_API FContainerVirtualDataArray();
};

