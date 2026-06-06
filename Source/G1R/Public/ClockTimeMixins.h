#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ClockTime.h"
#include "ClockTimeMixins.generated.h"

UCLASS(BlueprintType)
class UClockTimeMixins : public UObject {
    GENERATED_BODY()
public:
    UClockTimeMixins();

    UFUNCTION(BlueprintPure)
    static bool IsBetween(const FClockTime& This, const FClockTime& A, const FClockTime& B);
    
    UFUNCTION(BlueprintPure)
    static bool IsBefore(const FClockTime& This, const FClockTime& Time);
    
    UFUNCTION(BlueprintPure)
    static bool IsAfter(const FClockTime& This, const FClockTime& Time);
    
    UFUNCTION(BlueprintPure)
    static float GetSecondsSinceMidnight(const FClockTime& This);
    
    UFUNCTION(BlueprintCallable)
    static void AddSeconds(FClockTime& This, float SecondsToAdd);
    
};

