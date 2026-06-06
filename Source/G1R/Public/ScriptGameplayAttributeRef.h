#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ScriptGameplayAttributeRef.generated.h"

class UAttributeSet;

USTRUCT(BlueprintType)
struct FScriptGameplayAttributeRef {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    TSubclassOf<UAttributeSet> AttributeSetClass;
    
    UPROPERTY(BlueprintReadWrite)
    FName Name;
    
    G1R_API FScriptGameplayAttributeRef();
};

