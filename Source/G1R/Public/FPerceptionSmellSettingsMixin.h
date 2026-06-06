#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PerceptionSmellSettings.h"
#include "FPerceptionSmellSettingsMixin.generated.h"

UCLASS(BlueprintType)
class UFPerceptionSmellSettingsMixin : public UObject {
    GENERATED_BODY()
public:
    UFPerceptionSmellSettingsMixin();

    UFUNCTION(BlueprintCallable)
    static void SetWeatherModifier(FPerceptionSmellSettings& SmellSettings, float RainLevel1, float RainLevel2, float RainLevel3, float Sunny, float Cloudy);
    
    UFUNCTION(BlueprintCallable)
    static void SetMidRangeModifier(FPerceptionSmellSettings& SmellSettings, float DistanceModifier);
    
    UFUNCTION(BlueprintCallable)
    static void SetMidRangeDistance(FPerceptionSmellSettings& SmellSettings, float Distance);
    
    UFUNCTION(BlueprintCallable)
    static void SetMidRange(FPerceptionSmellSettings& SmellSettings, float Distance, float DistanceModifier);
    
    UFUNCTION(BlueprintCallable)
    static void SetFarRangeModifier(FPerceptionSmellSettings& SmellSettings, float DistanceModifier);
    
    UFUNCTION(BlueprintCallable)
    static void SetFarRangeDistance(FPerceptionSmellSettings& SmellSettings, float Distance);
    
    UFUNCTION(BlueprintCallable)
    static void SetFarRange(FPerceptionSmellSettings& SmellSettings, float Distance, float DistanceModifier);
    
    UFUNCTION(BlueprintCallable)
    static void SetCloseRangeModifier(FPerceptionSmellSettings& SmellSettings, float DistanceModifier);
    
    UFUNCTION(BlueprintCallable)
    static void SetCloseRangeDistance(FPerceptionSmellSettings& SmellSettings, float Distance);
    
    UFUNCTION(BlueprintCallable)
    static void SetCloseRange(FPerceptionSmellSettings& SmellSettings, float Distance, float DistanceModifier);
    
};

