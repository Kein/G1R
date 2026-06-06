#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "Engine/TimerHandle.h"
#include "UltraDynamicSkySettings.h"
#include "GothicUltraDynamicSky.generated.h"

class IGothicDynamicDayLight;
class UGothicDynamicDayLight;
class UMaterialInstanceDynamic;

UCLASS()
class G1R_API AGothicUltraDynamicSky : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float DefaultLightUpdatePeriod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    double TransitionTimeA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    double TransitionTimeB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
    bool TransitioningTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    double TransitionEasingExponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTimerHandle TransitionTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    double TransitionDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 TransitionDaysCounted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool TransitionCanGoBackwards;
    
public:
    UPROPERTY(BlueprintReadWrite)
    float DayNightIntensity;
    
    UPROPERTY(BlueprintReadWrite)
    FLinearColor DayNightColor;
    
    UPROPERTY()
    TArray<TScriptInterface<IGothicDynamicDayLight>> DynamicLights;
    
    UPROPERTY(EditAnywhere)
    int32 UpdateRectLightsPerFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool ControlSkyAtmosphereSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    FLinearColor RayleighScatteringColorDay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    FLinearColor RayleighScatteringColorDawnAndDusk;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    FLinearColor RayleighScatteringColorNight;
    
    AGothicUltraDynamicSky(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void UpdateRectLights();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateLightsRotation();
    
    UFUNCTION(BlueprintCallable)
    void UnregisterRectLight(TScriptInterface<IGothicDynamicDayLight> RectLight);
    
    UFUNCTION()
    void Tick(float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetSettings(FUltraDynamicSkySettings Settings);
    
    UFUNCTION(BlueprintCallable)
    void RegisterRectLight(TScriptInterface<IGothicDynamicDayLight> RectLight);
    
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    FRotator GetSunRotation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FUltraDynamicSkySettings GetSettings();
    
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    FRotator GetMoonRotation() const;
    
    UFUNCTION(BlueprintPure)
    float GetLightUpdatePeriod();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UMaterialInstanceDynamic* GetCloudsMaterial();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float EaseTimeTransition(float Alpha, float Exponent);
    
    UFUNCTION()
    void BeginPlay();
    
};

