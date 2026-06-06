#pragma once
#include "CoreMinimal.h"
#include "ClockTime.generated.h"

USTRUCT(BlueprintType)
struct G1R_API FClockTime {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Hour;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Minute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    double Second;
    
    FClockTime();
};

