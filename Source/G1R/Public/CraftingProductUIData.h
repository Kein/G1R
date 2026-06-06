#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "CraftingProductUIData.generated.h"

class UItemDefinition;

USTRUCT(BlueprintType)
struct FCraftingProductUIData {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    TSubclassOf<UItemDefinition> m_ItemDefinitionClass;
    
    UPROPERTY(BlueprintReadOnly)
    int32 m_AmountGranted;
    
    G1R_API FCraftingProductUIData();
};

