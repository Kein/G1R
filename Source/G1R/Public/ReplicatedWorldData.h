#pragma once
#include "CoreMinimal.h"
#include "ItemPayload.h"
#include "Templates/SubclassOf.h"
#include "ReplicatedWorldData.generated.h"

class UItemDefinition;

USTRUCT(BlueprintType)
struct FReplicatedWorldData {
    GENERATED_BODY()
public:
    UPROPERTY()
    TSubclassOf<UItemDefinition> m_WorldItemDefinition;
    
    UPROPERTY()
    int32 m_ItemCount;
    
    UPROPERTY()
    FItemPayload m_Payload;
    
    G1R_API FReplicatedWorldData();
};

