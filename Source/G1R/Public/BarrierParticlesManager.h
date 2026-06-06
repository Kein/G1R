#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ParticlePoint.h"
#include "BarrierParticlesManager.generated.h"

UCLASS()
class ABarrierParticlesManager : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    AActor* m_ParticleActor;
    
    UPROPERTY(EditAnywhere)
    float m_ActivationDistance;
    
    UPROPERTY(EditAnywhere)
    uint64 m_ChecksPerFrame;
    
    UPROPERTY(EditAnywhere)
    float m_SphereTraceRadius;
    
    UPROPERTY(EditAnywhere)
    float m_UpDisplacement;
    
    UPROPERTY()
    TArray<FParticlePoint> m_ParticlePoints;
    
    UPROPERTY()
    TArray<AActor*> m_ParticleSystemsPool;
    
public:
    ABarrierParticlesManager(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    TArray<FParticlePoint> GetLandscapePoints();
    
};

