#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ClockTime.h"
#include "ClockTimeLibrary.generated.h"

UCLASS(BlueprintType)
class G1R_API UClockTimeLibrary : public UObject {
    GENERATED_BODY()
public:
    UClockTimeLibrary();

    UFUNCTION(BlueprintPure)
    static FString ToString(const FClockTime& ClockTime);
    
    UFUNCTION(BlueprintPure)
    static FString ToShortString(const FClockTime& ClockTime);
    
    UFUNCTION(BlueprintPure)
    static int32 GetTotalSeconds(const FClockTime& ClockTime);
    
    UFUNCTION(BlueprintPure)
    static double GetSecond(const FClockTime& ClockTime);
    
    UFUNCTION(BlueprintPure)
    static int32 GetMinute(const FClockTime& ClockTime);
    
    UFUNCTION(BlueprintPure)
    static int32 GetHour(const FClockTime& ClockTime);
    
};

