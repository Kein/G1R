#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UObject/NoExportTypes.h"
#include "EBiome.h"
#include "GothicUltraDynamicOverrideVolume.generated.h"

class AActor;
class UGothicWeatherSettings;
class USplineComponent;

UINTERFACE(Blueprintable)
class UGothicUltraDynamicOverrideVolume : public UInterface {
    GENERATED_BODY()
};

class IGothicUltraDynamicOverrideVolume : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UGothicWeatherSettings* GetWeatherSettings();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float GetVolumeAlpha();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float GetTotalSphereBounds();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float GetTemperatureOffset();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    USplineComponent* GetSplineComponent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FVector GetSplineBoundsCenter();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float GetScaledTransitionWidth();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    int32 GetPriority();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    AActor* GetOwnerActor();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool GetOverrideMaterialEffects();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    EBiome GetBiome();
    
};

