#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GothicInputAction.generated.h"

class UInputAction;

USTRUCT(BlueprintType)
struct FGothicInputAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UInputAction* InputAction;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FGameplayTag InputTag;
    
    G1R_API FGothicInputAction();
};

