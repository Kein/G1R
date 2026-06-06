#pragma once
#include "CoreMinimal.h"
#include "OwnershipSettings.h"
#include "PerceivedInteractiveObject.generated.h"

class AInteractiveObjectActor;
class UInteractiveObjectDefinition;
class UItemDefinition;

USTRUCT(BlueprintType)
struct G1R_API FPerceivedInteractiveObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Instanced)
    UItemDefinition* ItemDefinition;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UInteractiveObjectDefinition* InteractiveObjectDefinition;
    
    UPROPERTY()
    FOwnershipSettings ObjectOwnershipSettings;
    
    UPROPERTY(BlueprintReadWrite)
    TSoftObjectPtr<AInteractiveObjectActor> InteractiveObjectActor;
    
    FPerceivedInteractiveObject();
};

