#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GothicActorComponentInterface.h"
#include "GothicTimeDilationComponent.generated.h"

class AGothicCharacter;
class UGameplayEffect;

UCLASS(BlueprintType, ClassGroup=Custom, Within=GothicCharacter, meta=(BlueprintSpawnableComponent))
class G1R_API UGothicTimeDilationComponent : public UActorComponent, public IGothicActorComponentInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<UGameplayEffect*> m_EffectsHistory;
    
protected:
    UPROPERTY()
    AGothicCharacter* m_GothicCharacter;
    
public:
    UGothicTimeDilationComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void SetDelayedCustomTimerDilatation(float CustomTime, float FreezeDuration, float BlendOutDuration);
    
    UFUNCTION()
    void SetCustomTimerDilatation(float CustomTime, float Duration);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetCustomTimeDilation(float CustomTime);
    
protected:
    UFUNCTION()
    void ResetTimeDilatation();
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_SetCustomTimeDilatation(float CustomTime);
    
    UFUNCTION()
    void DeactivatePreviousTimeHandle();
    
public:
    UFUNCTION(BlueprintCallable)
    void ActiveFreezeFrame(float CustomTime, float FreezeDuration, float BlendOutDuration);
    

    // Fix for true pure virtual functions not being implemented
};

