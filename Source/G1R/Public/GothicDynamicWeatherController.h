#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "EBiome.h"
#include "EWeather.h"
#include "UltraDynamicPostProcessSettings.h"
#include "UltraDynamicWindSettings.h"
#include "WeatherSaveGame.h"
#include "GothicDynamicWeatherController.generated.h"

class UGothicWeatherSettings;

UINTERFACE(Blueprintable)
class UGothicDynamicWeatherController : public UInterface {
    GENERATED_BODY()
};

class IGothicDynamicWeatherController : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateWeatherSimulation(bool IsInstant, FWeatherSaveGame& SaveState);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetWindSettings(FUltraDynamicWindSettings Settings);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetCurrentWeatherImmediate(EWeather Weather);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetCurrentWeather(EWeather Weather);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetAllowWeatherTransition(bool Allow);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FUltraDynamicWindSettings GetWindSettings();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetRainIntensity();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FUltraDynamicPostProcessSettings GetPostProcessSettings();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<EWeather> GetDisabledPossibleWeathers();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    EWeather GetCurrentWeather();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UGothicWeatherSettings* GetCurrentSettings();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    EBiome GetCurrentBiome();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool GetAllowWeatherTransition();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void EnablePossibleWeathers(const TArray<EWeather>& WeathersToEnable);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DrawWeatherDebugGUI();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DrawProbabilityGUI();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DrawGUI();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DisablePossibleWeathers(const TArray<EWeather>& WeathersToDisable, EWeather desiredWeatherIfCurrentIsDisabled);
    
};

