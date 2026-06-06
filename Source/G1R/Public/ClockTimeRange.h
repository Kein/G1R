#pragma once
#include "CoreMinimal.h"
#include "ClockTime.h"
#include "ClockTimeRange.generated.h"

USTRUCT(BlueprintType)
struct G1R_API FClockTimeRange {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FClockTime From;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FClockTime To;
    
    FClockTimeRange();
};

