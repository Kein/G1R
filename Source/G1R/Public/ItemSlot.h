#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ItemSlot.generated.h"

class UItemDefinition;

USTRUCT(BlueprintType)
struct G1R_API FItemSlot {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UItemDefinition> m_ItemDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 m_ItemCount;
    
    FItemSlot();
};

