#pragma once
#include "CoreMinimal.h"
#include "SentryUser.generated.h"

USTRUCT()
struct FSentryUser {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString UserName;
    
    G1R_API FSentryUser();
};

