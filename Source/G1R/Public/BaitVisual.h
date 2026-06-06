#pragma once
#include "CoreMinimal.h"
#include "Engine/HitResult.h"
#include "ItemVisual.h"
#include "BaitVisual.generated.h"

class AActor;
class UParticleSystemComponent;
class UPrimitiveComponent;
class UProjectileMovementComponent;
class USphereComponent;
class UStaticMeshComponent;

UCLASS()
class G1R_API ABaitVisual : public AItemVisual {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced, VisibleDefaultsOnly)
    USphereComponent* m_CollisionComp;
    
    UPROPERTY(Instanced, VisibleDefaultsOnly)
    UProjectileMovementComponent* m_MovementComp;
    
    UPROPERTY(Instanced, VisibleDefaultsOnly)
    UParticleSystemComponent* m_ParticleComp;
    
    UPROPERTY(Instanced, VisibleDefaultsOnly)
    UStaticMeshComponent* m_MeshComp;
    
public:
    ABaitVisual(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION()
    void OnOverlapBeginServer(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_StopArrow(const FHitResult SweepResult);
    
};

