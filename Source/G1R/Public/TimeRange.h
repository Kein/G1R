#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TimeRange.generated.h"

UCLASS(Abstract)
class G1R_API UTimeRange : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool bAllTime;
    
    UPROPERTY()
    int32 HourStart;
    
    UPROPERTY()
    int32 MinuteStart;
    
    UPROPERTY()
    int32 HourEnd;
    
    UPROPERTY()
    int32 MinuteEnd;
    
    UTimeRange();

};

