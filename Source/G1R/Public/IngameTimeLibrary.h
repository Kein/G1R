#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ClockTime.h"
#include "InGameTime.h"
#include "IngameTimeLibrary.generated.h"

UCLASS(BlueprintType)
class G1R_API UIngameTimeLibrary : public UObject {
    GENERATED_BODY()
public:
    UIngameTimeLibrary();

    UFUNCTION(BlueprintPure)
    static FString ToString(const FInGameTime& InGameTime);
    
    UFUNCTION(BlueprintPure)
    static bool IsInfinite(const FInGameTime& InGameTime);
    
    UFUNCTION(BlueprintPure)
    static int32 GetDay(const FInGameTime& InGameTime);
    
    UFUNCTION(BlueprintPure)
    static FClockTime GetClockTime(const FInGameTime& InGameTime);
    
};

