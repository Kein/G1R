#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/SceneComponent.h"
#include "EWeather.h"
#include "GothicWeatherAudioComponent.generated.h"

class UFMODEvent;
class UGothicAudioComponent;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class G1R_API UGothicWeatherAudioComponent : public USceneComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, Instanced)
    UGothicAudioComponent* WindAudio;
    
    UPROPERTY(EditAnywhere, Instanced)
    UGothicAudioComponent* RainAudio;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UFMODEvent> SoftThunderEvent;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UFMODEvent> SoftThunderEchoEvent;
    
    UPROPERTY(EditAnywhere)
    float ThunderAudioMaxDistance;
    
    UPROPERTY(EditAnywhere)
    TMap<EWeather, float> RainIntensities;
    
    UPROPERTY(EditAnywhere)
    TMap<EWeather, float> WindIntensities;
    
    UPROPERTY(EditAnywhere)
    FString RainIntensityParameter;
    
    UPROPERTY(EditAnywhere)
    FString WindIntensityParameter;
    
    UPROPERTY(EditAnywhere)
    FString ThunderIntensityParameter;
    
    UPROPERTY(EditAnywhere)
    FString WeatherIndoorParameter;
    
    UPROPERTY(EditAnywhere)
    float EasingDuration;
    
    UPROPERTY(EditAnywhere)
    float OcclusionEasingDuration;
    
public:
    UGothicWeatherAudioComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void PlayThunderSounds(const FVector& Location, float EchoDelayMin, float EchoDelayMax);
    
};

