#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "EWeather.h"
#include "LightPreset.h"
#include "GothicDirectionalLight.generated.h"

class AExponentialHeightFog;
class UArrowComponent;
class UDirectionalLightComponent;
class UStaticMeshComponent;

UCLASS()
class G1R_API AGothicDirectionalLight : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool m_UpdateWithGameTime;
    
    UPROPERTY(EditAnywhere)
    float m_DawnHour;
    
    UPROPERTY(EditAnywhere)
    FVector m_DawnRotation;
    
    UPROPERTY(EditAnywhere)
    EWeather m_CurrentLightPreset;
    
    UPROPERTY(EditAnywhere)
    TMap<EWeather, FLightPreset> m_LightPresets;
    
    UPROPERTY(EditAnywhere)
    TMap<EWeather, FLightPreset> m_FogPresets;
    
protected:
    UPROPERTY(EditDefaultsOnly, Instanced)
    UDirectionalLightComponent* m_NightDirectionalLightComponent;
    
    UPROPERTY(EditDefaultsOnly, Instanced)
    UDirectionalLightComponent* m_DayDirectionalLightComponent;
    
    UPROPERTY(EditDefaultsOnly, Instanced)
    UStaticMeshComponent* M_Moon;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<AExponentialHeightFog> m_ExponentialHeightFog;
    
    UPROPERTY(Instanced)
    UArrowComponent* m_DayArrowComponent;
    
    UPROPERTY(Instanced)
    UArrowComponent* m_NightArrowComponent;
    
public:
    AGothicDirectionalLight(const FObjectInitializer& ObjectInitializer);

};

