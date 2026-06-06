#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "RayPoints.h"
#include "BarrierEffectHandler.generated.h"

class AGothicCharacter;
class UNiagaraSystem;

UCLASS()
class UBarrierEffectHandler : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint8 Amount;
    
    UPROPERTY(EditAnywhere)
    float RandomFactor;
    
    UPROPERTY(EditAnywhere)
    float RecalculateDistanceSquaredBias;
    
    UPROPERTY(EditAnywhere)
    TArray<FRayPoints> Rays;
    
    UPROPERTY(EditAnywhere)
    AGothicCharacter* Character;
    
    UPROPERTY(EditAnywhere)
    UNiagaraSystem* m_FeetRayParticleSystem;
    
    UPROPERTY(EditAnywhere)
    TArray<FString> BonesSource;
    
    UBarrierEffectHandler();

    UFUNCTION()
    void UpdateRays();
    
};

