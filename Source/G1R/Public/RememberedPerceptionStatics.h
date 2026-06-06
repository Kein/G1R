#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "RememberedPerception.h"
#include "RememberedPerceptionStatics.generated.h"

class UObject;

UCLASS(BlueprintType)
class URememberedPerceptionStatics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URememberedPerceptionStatics();

    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static float GetInitialTotalDurationOfEstimatedTimeOfImpact(const FRememberedPerception& This, const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static float GetEstimatedTimeLeftUntilImpact(const FRememberedPerception& This, const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static float GetAgeSeconds(const FRememberedPerception& This, const UObject* WorldContextObject);
    
};

