#pragma once
#include "CoreMinimal.h"
#include "ECoumpoundInputHintLocation.h"
#include "RichCompoundInputHintRow_Entry.generated.h"

class UInputAction;
class UInputMappingContext;

USTRUCT()
struct FRichCompoundInputHintRow_Entry {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UInputAction* m_InputAction;
    
    UPROPERTY(EditAnywhere)
    TArray<UInputMappingContext*> m_InputMappingContexts;
    
    UPROPERTY(EditAnywhere)
    ECoumpoundInputHintLocation m_Location;
    
    G1R_API FRichCompoundInputHintRow_Entry();
};

