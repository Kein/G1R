#pragma once
#include "CoreMinimal.h"
#include "SentryContextCallstack.h"
#include "SentryContexts.generated.h"

USTRUCT()
struct FSentryContexts {
    GENERATED_BODY()
public:
    UPROPERTY()
    FSentryContextCallstack AngelscriptCallstack;
    
    UPROPERTY()
    TMap<FString, FString> GameMisc;
    
    G1R_API FSentryContexts();
};

