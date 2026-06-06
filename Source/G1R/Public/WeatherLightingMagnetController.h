#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ESelectionType.h"
#include "WeatherLightingMagnetController.generated.h"

class AWeatherLightingMagnet;
class UGothicWeatherSettings;

UCLASS()
class G1R_API UWeatherLightingMagnetController : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    float MinSpawnTime;
    
    UPROPERTY()
    float MaxSpawnTime;
    
    UPROPERTY()
    float ThunderBias;
    
protected:
    UPROPERTY()
    TArray<AWeatherLightingMagnet*> LightingMagnets;
    
public:
    UWeatherLightingMagnetController();

    UFUNCTION()
    void Unregister(AWeatherLightingMagnet* LightingMagnet);
    
    UFUNCTION()
    void Tick(float DeltaTime, const UGothicWeatherSettings* WeatherSettings);
    
    UFUNCTION()
    void SpawnLight(ESelectionType NextSelectionType);
    
protected:
    UFUNCTION()
    void SetNextLightingMagnet(ESelectionType SelectionType);
    
public:
    UFUNCTION()
    void Register(AWeatherLightingMagnet* LightingMagnet);
    
    UFUNCTION()
    AWeatherLightingMagnet* GetThunderActor(int32 DesiredIndex);
    
};

