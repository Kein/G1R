#pragma once
#include "CoreMinimal.h"
#include "EMSFootLockState.h"
#include "MSFootLockData.generated.h"

USTRUCT(BlueprintType)
struct MOTIONSYMPHONY_API FMSFootLockData {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    EMSFootLockState LockState;
    
    UPROPERTY(Transient)
    float RemainingLockTime;
    
    FMSFootLockData();
};

