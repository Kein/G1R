#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "FogVolumeSettings.h"
#include "OverrideFogCache.h"
#include "OverrideVolumeCache.h"
#include "GothicUltraDynamicWeather.generated.h"

class IGothicUltraDynamicOverrideFog;
class UGothicUltraDynamicOverrideFog;
class IGothicUltraDynamicOverrideVolume;
class UGothicUltraDynamicOverrideVolume;
class UGothicWeatherFogSettings;
class UGothicWeatherSettings;

UCLASS()
class G1R_API AGothicUltraDynamicWeather : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float ClearCacheAtDistanceDifference;
    
    UPROPERTY(BlueprintReadOnly)
    bool AllowWeatherChange;
    
    AGothicUltraDynamicWeather(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void LerpBetweenWeatherStates(const UGothicWeatherSettings* A, const UGothicWeatherSettings* B, float Alpha, UGothicWeatherSettings* Target, bool SetMaterialEffects, bool UseBiasForMaterialState) const;
    
    UFUNCTION(BlueprintCallable)
    void LerpBetweenInteriorStates(const UGothicWeatherSettings* A, const UGothicWeatherSettings* B, float Alpha, UGothicWeatherSettings* Target);
    
    UFUNCTION(BlueprintPure)
    bool IsSameOverrideVolumeActor(TScriptInterface<IGothicUltraDynamicOverrideVolume> A, TScriptInterface<IGothicUltraDynamicOverrideVolume> B) const;
    
    UFUNCTION(BlueprintPure)
    TArray<TScriptInterface<IGothicUltraDynamicOverrideVolume>> GetVolumesFromCache(FOverrideVolumeCache Cache) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    TArray<TScriptInterface<IGothicUltraDynamicOverrideVolume>> GetOverrideVolumes() const;
    
    UFUNCTION(BlueprintCallable)
    FOverrideVolumeCache GetOverrideVolumeCacheAtLocation(FVector Location);
    
    UFUNCTION(BlueprintPure)
    TScriptInterface<IGothicUltraDynamicOverrideFog> GetOverrideFogsFromCache(FFogVolumeSettings Cache) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    TArray<TScriptInterface<IGothicUltraDynamicOverrideFog>> GetOverrideFogs() const;
    
    UFUNCTION(BlueprintCallable)
    FOverrideFogCache GetOverrideFogCacheAtLocation(FVector Location);
    
    UFUNCTION(BlueprintImplementableEvent)
    TArray<AActor*> GetAllFogVolumes() const;
    
    UFUNCTION()
    void EvaluatePositionRequest(FVector Location);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void CopyWeatherSettings(const UGothicWeatherSettings* From, UGothicWeatherSettings* To, bool SetMaterialEffects) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void CopyFogSettingsToWeatherSettings(const UGothicWeatherFogSettings* From, UGothicWeatherSettings* To) const;
    
    UFUNCTION(BlueprintPure)
    float CompareWeatherStates(const UGothicWeatherSettings* A, const UGothicWeatherSettings* B) const;
    
};

