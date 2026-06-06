#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GothicActorComponentInterface.h"
#include "GothicWeatherComponent.generated.h"

class ACharacter;
class UDataModule_Locomotion;
class UWeatherSubsystemConfig;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class G1R_API UGothicWeatherComponent : public UActorComponent, public IGothicActorComponentInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    ACharacter* m_Character;
    
    UPROPERTY()
    TWeakObjectPtr<UDataModule_Locomotion> m_DataModule_Locomotion;
    
public:
    UGothicWeatherComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetWetness(float NewWetness);
    
    UFUNCTION(BlueprintCallable)
    void SetDesiredMinWetness(float NewMinWetness);
    
    UFUNCTION()
    void ReduceWetness(float DeltaTime, const UWeatherSubsystemConfig* WeatherConfig);
    
    UFUNCTION()
    void IncreaseWetness(float DeltaTime, const UWeatherSubsystemConfig* WeatherConfig);
    
    UFUNCTION()
    float GetWetness() const;
    
    UFUNCTION(BlueprintPure)
    float GetWaterHeightWorldPosition() const;
    
    UFUNCTION()
    float GetWaterHeight() const;
    
    UFUNCTION(BlueprintPure)
    bool GetIsInWater() const;
    
    UFUNCTION()
    float GetCreatureHeight() const;
    

    // Fix for true pure virtual functions not being implemented
};

