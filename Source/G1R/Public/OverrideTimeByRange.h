#pragma once
#include "CoreMinimal.h"
#include "ClockTime.h"
#include "OverrideTimeByRange.generated.h"

USTRUCT(BlueprintType)
struct G1R_API FOverrideTimeByRange {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FClockTime From;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FClockTime To;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FClockTime Time;
    
    FOverrideTimeByRange();
};

