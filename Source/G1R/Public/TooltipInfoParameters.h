#pragma once
#include "CoreMinimal.h"
#include "EInventoryOpenedStates.h"
#include "TooltipInfoParameters.generated.h"

class AActor;
class UItemDefinition;

USTRUCT(BlueprintType)
struct FTooltipInfoParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    AActor* Actor;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UItemDefinition* Item;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UItemDefinition* CompareItem;
    
    UPROPERTY(BlueprintReadOnly)
    int32 ItemHotkey;
    
    UPROPERTY(BlueprintReadOnly)
    bool bCanBeEquipped;
    
    UPROPERTY(BlueprintReadOnly)
    bool bIsEquipped;
    
    UPROPERTY(BlueprintReadOnly)
    bool bCanBePurchased;
    
    UPROPERTY(BlueprintReadOnly)
    bool bCanAfford;
    
    UPROPERTY(BlueprintReadOnly)
    EInventoryOpenedStates OpenedState;
    
    UPROPERTY(BlueprintReadOnly)
    int32 SlotId;
    
    G1R_API FTooltipInfoParameters();
};

