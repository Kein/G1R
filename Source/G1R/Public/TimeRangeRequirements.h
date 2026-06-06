#pragma once
#include "CoreMinimal.h"
#include "ClockTimeRange.h"
#include "InteractionSpotRequirements.h"
#include "TimeRangeRequirements.generated.h"

USTRUCT(BlueprintType)
struct G1R_API FTimeRangeRequirements : public FInteractionSpotRequirements {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FClockTimeRange> AvailableInRange;
    
    FTimeRangeRequirements();
};

