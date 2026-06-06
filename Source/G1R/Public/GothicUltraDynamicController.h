#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EBiome.h"
#include "EWeather.h"
#include "GothicDynamicWeatherController.h"
#include "LightSourceData.h"
#include "UltraDynamicPostProcessSettings.h"
#include "UltraDynamicWindSettings.h"
#include "WeatherSaveGame.h"
#include "GothicUltraDynamicController.generated.h"

class UGothicWeatherSettings;

UCLASS()
class G1R_API AGothicUltraDynamicController : public AActor, public IGothicDynamicWeatherController {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    bool bOverrideSettings;
    
public:
    AGothicUltraDynamicController(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateWeatherSimulation(bool IsInstant, FWeatherSaveGame& SaveState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetWindSettings(FUltraDynamicWindSettings Settings);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetOverrideWeatherSettings(bool Override);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetCurrentWeatherImmediate(EWeather weatherId);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetCurrentWeather(EWeather weatherId);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetAllowWeatherTransition(bool Allow);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ResetLocalWeather(bool IsInstantChange);
    
    UFUNCTION(BlueprintImplementableEvent)
    void HandleWeather();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FUltraDynamicWindSettings GetWindSettings();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float GetRainIntensity();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FUltraDynamicPostProcessSettings GetPostProcessSettings();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    TArray<EWeather> GetDisabledPossibleWeathers();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    EWeather GetCurrentWeather();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UGothicWeatherSettings* GetCurrentSettings();
    
    UFUNCTION(BlueprintImplementableEvent)
    FLightSourceData GetCurrentLightSourceData();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    EBiome GetCurrentBiome();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool GetAllowWeatherTransition();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EnablePossibleWeathers(const TArray<EWeather>& WeathersToEnable);
    
    UFUNCTION(BlueprintImplementableEvent)
    void DrawProbabilityGUI();
    
    UFUNCTION()
    void DrawGUI_Implementation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DisablePossibleWeathers(const TArray<EWeather>& WeathersToDisable, EWeather desiredWeatherIfCurrentIsDisabled);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ChangeLocalWeather(bool IsInstantChange, bool HasDuration, int32 DurationLength, EWeather NextType);
    

    // Fix for true pure virtual functions not being implemented
};

