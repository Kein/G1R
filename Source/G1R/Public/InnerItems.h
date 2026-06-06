#pragma once
#include "CoreMinimal.h"
#include "ItemSlot.h"
#include "InnerItems.generated.h"

USTRUCT(BlueprintType)
struct G1R_API FInnerItems {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    TArray<FName> m_Keys;
    
    UPROPERTY()
    TArray<FItemSlot> m_Values;
    
public:
    FInnerItems();
};

