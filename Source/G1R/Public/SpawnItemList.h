#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "SpawnItemList.generated.h"

class UItemDefinition;

USTRUCT(BlueprintType)
struct G1R_API FSpawnItemList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 m_NumElements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UItemDefinition> m_Item;
    
    FSpawnItemList();
};

