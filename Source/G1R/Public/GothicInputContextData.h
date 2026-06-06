#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GothicInputContextData.generated.h"

class UInputMappingContext;

USTRUCT(BlueprintType)
struct FGothicInputContextData {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FGameplayTagContainer m_GameplayTagContainer;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<UInputMappingContext*> m_ArrayMappingContext;
    
    G1R_API FGothicInputContextData();
};

