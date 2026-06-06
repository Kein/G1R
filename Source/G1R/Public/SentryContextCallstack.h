#pragma once
#include "CoreMinimal.h"
#include "SentryContextCallstack.generated.h"

USTRUCT()
struct FSentryContextCallstack {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString Callstack;
    
    G1R_API FSentryContextCallstack();
};

