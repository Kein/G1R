#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GothicInputContextDataTemporal.generated.h"

class UInputMappingContext;

USTRUCT(BlueprintType)
struct FGothicInputContextDataTemporal {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FGameplayTagContainer m_GameplayTagContainer;
    
    UPROPERTY(EditDefaultsOnly)
    FGameplayTagContainer m_GameplayTagContainerBlock;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<UInputMappingContext*> m_ArrayMappingContext;
    
    G1R_API FGothicInputContextDataTemporal();
};

