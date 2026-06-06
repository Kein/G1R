#pragma once
#include "CoreMinimal.h"
#include "SentryContextStack.generated.h"

class UObject;

USTRUCT()
struct FSentryContextStack {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<UObject*> UObjects;
    
    G1R_API FSentryContextStack();
};

