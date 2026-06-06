#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "PersonalItemOwnershipSettings.generated.h"

class UItemDefinition;

USTRUCT(BlueprintType)
struct FPersonalItemOwnershipSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSet<TSubclassOf<UItemDefinition>> OwnedItems;
    
    G1R_API FPersonalItemOwnershipSettings();
};

