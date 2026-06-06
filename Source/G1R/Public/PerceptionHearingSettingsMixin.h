#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PerceptionHearingSettings.h"
#include "PerceptionHearingSettingsMixin.generated.h"

UCLASS(BlueprintType)
class UPerceptionHearingSettingsMixin : public UObject {
    GENERATED_BODY()
public:
    UPerceptionHearingSettingsMixin();

    UFUNCTION(BlueprintCallable)
    static void SetWeatherModifier(FPerceptionHearingSettings& HearingSettings, float RainLevel1, float RainLevel2, float RainLevel3, float Sunny, float Cloudy);
    
    UFUNCTION(BlueprintCallable)
    static void SetMidRangeModifier(FPerceptionHearingSettings& HearingSettings, float DistanceModifier);
    
    UFUNCTION(BlueprintCallable)
    static void SetMidRangeDistance(FPerceptionHearingSettings& HearingSettings, float Distance);
    
    UFUNCTION(BlueprintCallable)
    static void SetMidRange(FPerceptionHearingSettings& HearingSettings, float Distance, float DistanceModifier);
    
    UFUNCTION(BlueprintCallable)
    static void SetLoudnessModifierMid(FPerceptionHearingSettings& HearingSettings, float Whisper, float Quiet, float Moderate, float Loud, float VeryLoud);
    
    UFUNCTION(BlueprintCallable)
    static void SetLoudnessModifierFar(FPerceptionHearingSettings& HearingSettings, float Whisper, float Quiet, float Moderate, float Loud, float VeryLoud);
    
    UFUNCTION(BlueprintCallable)
    static void SetLoudnessModifierClose(FPerceptionHearingSettings& HearingSettings, float Whisper, float Quiet, float Moderate, float Loud, float VeryLoud);
    
    UFUNCTION(BlueprintCallable)
    static void SetFarRangeModifier(FPerceptionHearingSettings& HearingSettings, float DistanceModifier);
    
    UFUNCTION(BlueprintCallable)
    static void SetFarRangeDistance(FPerceptionHearingSettings& HearingSettings, float Distance);
    
    UFUNCTION(BlueprintCallable)
    static void SetFarRange(FPerceptionHearingSettings& HearingSettings, float Distance, float DistanceModifier);
    
    UFUNCTION(BlueprintCallable)
    static void SetCloseRangeModifier(FPerceptionHearingSettings& HearingSettings, float DistanceModifier);
    
    UFUNCTION(BlueprintCallable)
    static void SetCloseRangeDistance(FPerceptionHearingSettings& HearingSettings, float Distance);
    
    UFUNCTION(BlueprintCallable)
    static void SetCloseRange(FPerceptionHearingSettings& HearingSettings, float Distance, float DistanceModifier);
    
};

