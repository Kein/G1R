#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "GameFramework/GameplayMessageSubsystem.h"
#include "EWeather.h"
#include "EWeatherEvent.h"
#include "Templates/SubclassOf.h"
#include "FireVisualComponent.generated.h"

class UInteractiveComponent;
class UInteractiveSubsystem;
class UTimeRange;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class G1R_API UFireVisualComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced, Transient)
    UInteractiveComponent* m_InteractiveComponent;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_StartActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_CanSkipInitialSwitchOn;
    
private:
    UPROPERTY(EditAnywhere)
    bool m_StopWithRain;
    
    UPROPERTY(EditAnywhere)
    bool m_AttenuatedWithRain;
    
    UPROPERTY(EditAnywhere)
    float m_HoursForUnLite;
    
    UPROPERTY(EditAnywhere)
    bool m_StopWithSpell;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UTimeRange> m_TimeRange;
    
    UPROPERTY()
    bool m_SaveState;
    
    UPROPERTY()
    UInteractiveSubsystem* m_InteractiveSubsystem;
    
    UPROPERTY()
    TArray<FGameplayMessageListenerHandle> m_Listeners;
    
public:
    UFireVisualComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StartLit(bool check, bool isPlayer);
    
    UFUNCTION(BlueprintCallable)
    void SpellEndLit();
    
    UFUNCTION(BlueprintCallable)
    void MoreFlame();
    
    UFUNCTION(BlueprintCallable)
    void LessFlame();
    
    UFUNCTION(BlueprintPure)
    bool IsFireOn() const;
    
    UFUNCTION(BlueprintCallable)
    void ImpactFire(FVector Direction, bool isFireAttack);
    
    UFUNCTION()
    void HandleWeatherTransition(EWeatherEvent PreviousWeather, EWeatherEvent NewWeather, float Time);
    
    UFUNCTION()
    void HandleWeatherChanged(EWeather PreviousWeather, EWeather NewWeather);
    
private:
    UFUNCTION()
    void EndLitTimer();
    
public:
    UFUNCTION(BlueprintCallable)
    void EndLit(bool check, bool isPlayer);
    
private:
    UFUNCTION()
    void CheckTimeRangeBase();
    
};

