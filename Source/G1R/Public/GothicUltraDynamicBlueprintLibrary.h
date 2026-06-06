#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GothicUltraDynamicBlueprintLibrary.generated.h"

class UGothicWeatherFogPostProcessSettings;

UCLASS(BlueprintType)
class G1R_API UGothicUltraDynamicBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGothicUltraDynamicBlueprintLibrary();

    UFUNCTION(BlueprintCallable)
    static void Lerp(UGothicWeatherFogPostProcessSettings* From, UGothicWeatherFogPostProcessSettings* To, UGothicWeatherFogPostProcessSettings* Target, float Value);
    
};

