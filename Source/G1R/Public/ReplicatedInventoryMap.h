#pragma once
#include "CoreMinimal.h"
#include "ContainerVirtualDataArray.h"
#include "EInventoryTypes.h"
#include "ReplicatedInventoryMap.generated.h"

USTRUCT(BlueprintType)
struct G1R_API FReplicatedInventoryMap {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    TArray<EInventoryTypes> m_Keys;
    
    UPROPERTY()
    FContainerVirtualDataArray m_Values;
    
public:
    FReplicatedInventoryMap();
};

