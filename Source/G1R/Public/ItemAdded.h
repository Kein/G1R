#pragma once
#include "CoreMinimal.h"
#include "EInventoryFilterTypes.h"
#include "ItemAdded.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FItemAdded {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FText PickedItemName;
    
    UPROPERTY(BlueprintReadOnly)
    int32 PickedItemAmount;
    
    UPROPERTY(BlueprintReadOnly)
    EInventoryFilterTypes PickedItemCategory;
    
    UPROPERTY(BlueprintReadOnly)
    UTexture2D* Icon;
    
    G1R_API FItemAdded();
};

