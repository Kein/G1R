#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "NameForInputAction.generated.h"

class UInputAction;
class UInputMappingContext;

USTRUCT()
struct FNameForInputAction : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UInputAction* InputAction;
    
    UPROPERTY(EditAnywhere)
    TArray<UInputMappingContext*> InputMappingContexts;
    
    G1R_API FNameForInputAction();
};

