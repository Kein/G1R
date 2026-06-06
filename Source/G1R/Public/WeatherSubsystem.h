#pragma once
#include "CoreMinimal.h"
#include "TickableGameStateSubsystem.h"
#include "EBiome.h"
#include "EWeather.h"
#include "EWeatherEvent.h"
#include "InGameTime.h"
#include "WeatherChangedDelegateDelegate.h"
#include "WeatherTransitionDelegateDelegate.h"
#include "WeatherSubsystem.generated.h"

class AWeatherLightingMagnet;
class IGothicDynamicWeatherController;
class UGothicDynamicWeatherController;
class UGothicWeatherSettings;
class UObject;
class UWeatherLightingMagnetController;
class UWeatherSubsystem;
class UWeatherSubsystemConfig;

UCLASS(BlueprintType)
class G1R_API UWeatherSubsystem : public UTickableGameStateSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FWeatherChangedDelegate OnWeatherChanged;
    
    UPROPERTY(BlueprintAssignable)
    FWeatherTransitionDelegate OnWeatherTransition;
    
    UPROPERTY()
    TScriptInterface<IGothicDynamicWeatherController> WeatherController;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UWeatherSubsystemConfig* WeatherConfig;
    
protected:
    UPROPERTY()
    UWeatherLightingMagnetController* LightingMagnetsController;
    
public:
    UWeatherSubsystem();

    UFUNCTION(BlueprintCallable)
    void UpdateWeatherSimulation(bool IsInstant);
    
    UFUNCTION(BlueprintCallable)
    void Unregister(AWeatherLightingMagnet* LightingMagnet);
    
    UFUNCTION(BlueprintCallable)
    void UnfreezeSkyTime();
    
    UFUNCTION(BlueprintCallable)
    void SetPlayerWeatherImmediate(const EWeather NewWeather);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayerWeather(const EWeather NewWeather);
    
    UFUNCTION(BlueprintCallable)
    void SetLuminosity(int32 NewLuminosity);
    
    UFUNCTION(BlueprintCallable)
    void SetAllowScreenDroplets(bool Enable);
    
    UFUNCTION(BlueprintCallable)
    void Register(AWeatherLightingMagnet* LightingMagnet);
    
protected:
    UFUNCTION()
    void OnScreenRainDropletsApplied();
    
public:
    UFUNCTION(BlueprintPure)
    bool IsTimeFrozen() const;
    
    UFUNCTION(BlueprintPure)
    bool IsRaining(int32 Level) const;
    
    UFUNCTION(BlueprintCallable)
    void InvalidateCachedShadows();
    
    UFUNCTION(BlueprintPure)
    float GetRainIntensity() const;
    
    UFUNCTION(BlueprintPure)
    EWeather GetPlayerWeather() const;
    
    UFUNCTION(BlueprintPure)
    EBiome GetPlayerBiome() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetLuminosity() const;
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UWeatherSubsystem* GetGameWeather(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    UGothicWeatherSettings* GetCurrentWeatherSettings();
    
    UFUNCTION(BlueprintPure)
    FInGameTime GetCurrentSkyDayTime() const;
    
    UFUNCTION(BlueprintPure)
    bool GetAllowScreenDroplets() const;
    
    UFUNCTION(BlueprintCallable)
    void FreezeSkyTime(const FInGameTime& SkyTime);
    
protected:
    UFUNCTION()
    void EnsureSubsystemIsInitialized();
    
public:
    UFUNCTION()
    void DrawWindGUI();
    
    UFUNCTION()
    void DrawWeatherDebugGUI();
    
    UFUNCTION()
    void DrawProbabilityGUI();
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void CallWeatherTransition(const EWeatherEvent OldWeather, const EWeatherEvent NewWeather, float Time) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void CallWeatherChange(const EWeather OldWeather, const EWeather NewWeather) const;
    
};

