#pragma once
#include "CoreMinimal.h"
#include "GothicActionContext.generated.h"

class UInputMappingContext;

USTRUCT(BlueprintType)
struct FGothicActionContext {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<UInputMappingContext*> InputMappingContexts;
    
    G1R_API FGothicActionContext();
};

