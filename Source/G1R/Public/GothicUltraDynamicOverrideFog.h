#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UObject/NoExportTypes.h"
#include "GothicUltraDynamicOverrideFog.generated.h"

class UGothicWeatherFogPostProcessSettings;
class UGothicWeatherFogSettings;

UINTERFACE(Blueprintable)
class UGothicUltraDynamicOverrideFog : public UInterface {
    GENERATED_BODY()
};

class IGothicUltraDynamicOverrideFog : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ShouldStopRain();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ShouldChangeSunVolumetricScattering();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsInRange(FVector Location);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float GetSunVolumetricScatteringIntensity();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    int32 GetPriority();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UGothicWeatherFogPostProcessSettings* GetPostProcessSettings();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float GetFogStartingDistance();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UGothicWeatherFogSettings* GetFogSettings();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float GetExposure();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float GetAreaAlphaAt(FVector Location);
    
};

