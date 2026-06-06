#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ClockTime.h"
#include "FClockTimeStatics.generated.h"

UCLASS(BlueprintType)
class UFClockTimeStatics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFClockTimeStatics();

    UFUNCTION(BlueprintCallable)
    static FClockTime Invalid();
    
    UFUNCTION(BlueprintCallable)
    static FClockTime FromSeconds(double TotalSeconds);
    
};

