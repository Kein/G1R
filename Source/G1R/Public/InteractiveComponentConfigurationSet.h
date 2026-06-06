#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "InteractiveComponentConfigurationSet.generated.h"

class UInteractiveObjectDefinition;

USTRUCT(BlueprintType)
struct FInteractiveComponentConfigurationSet {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced)
    UInteractiveObjectDefinition* ItemDefinition;
    
    UPROPERTY()
    FName DefaultInteractionBaseName;
    
    UPROPERTY()
    FGameplayTagContainer AdditionalPossibleActions;
    
    G1R_API FInteractiveComponentConfigurationSet();
};

