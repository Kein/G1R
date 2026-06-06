#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PerceptionSightSettings.h"
#include "FPerceptionSightSettingsMixin.generated.h"

UCLASS(BlueprintType)
class UFPerceptionSightSettingsMixin : public UObject {
    GENERATED_BODY()
public:
    UFPerceptionSightSettingsMixin();

    UFUNCTION(BlueprintCallable)
    static void SetWeatherModifier(FPerceptionSightSettings& SightSettings, float RainLevel1, float RainLevel2, float RainLevel3, float Sunny, float Cloudy);
    
    UFUNCTION(BlueprintCallable)
    static void SetMidRangeFractionModifier(FPerceptionSightSettings& SightSettings, float Modifier);
    
    UFUNCTION(BlueprintCallable)
    static void SetMidRangeFractionDistance(FPerceptionSightSettings& SightSettings, float Distance);
    
    UFUNCTION(BlueprintCallable)
    static void SetMidRangeFraction(FPerceptionSightSettings& SightSettings, float Distance, float DistanceModifier);
    
    UFUNCTION(BlueprintCallable)
    static void SetFarRangeFractionModifier(FPerceptionSightSettings& SightSettings, float Modifier);
    
    UFUNCTION(BlueprintCallable)
    static void SetFarRangeFractionDistance(FPerceptionSightSettings& SightSettings, float Distance);
    
    UFUNCTION(BlueprintCallable)
    static void SetFarRangeFraction(FPerceptionSightSettings& SightSettings, float Distance, float DistanceModifier);
    
    UFUNCTION(BlueprintCallable)
    static void SetCloseRangeFractionModifier(FPerceptionSightSettings& SightSettings, float Modifier);
    
    UFUNCTION(BlueprintCallable)
    static void SetCloseRangeFractionDistance(FPerceptionSightSettings& SightSettings, float Distance);
    
    UFUNCTION(BlueprintCallable)
    static void SetCloseRangeFraction(FPerceptionSightSettings& SightSettings, float Distance, float DistanceModifier);
    
};

