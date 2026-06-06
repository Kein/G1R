#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "WeatherLightingMagnet.generated.h"

class UDetailBillboardComponent;

UCLASS()
class G1R_API AWeatherLightingMagnet : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Instanced)
    UDetailBillboardComponent* SpriteComponent;
    
    AWeatherLightingMagnet(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SpawnLighting();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEndThunderStrikeFX();
    
};

