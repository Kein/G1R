#pragma once
#include "CoreMinimal.h"
#include "SentryContextStringStack.generated.h"

USTRUCT()
struct FSentryContextStringStack {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FString> Context;
    
    G1R_API FSentryContextStringStack();
};

