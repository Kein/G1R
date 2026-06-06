#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ProjectileVisual.h"
#include "ArrowVisual.generated.h"

class AActor;
class AItemVisualWorld;
class UG1RPhysicsMaterial;
class UStaticMeshComponent;

UCLASS(Abstract)
class G1R_API AArrowVisual : public AProjectileVisual {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Bounciness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Friction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_BounceVelocityStopSimulatingThreshold;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    float m_MinFrictionFraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_SurfaceHardnessMakesBounce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UStaticMeshComponent* m_MeshComp;
    
    AArrowVisual(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(NetMulticast, Reliable)
    void MulticastStop();
    
public:
    UFUNCTION(NetMulticast, Reliable)
    void MulticastDetachFromActor();
    
private:
    UFUNCTION(NetMulticast, Unreliable)
    void MulticastBreakArrow(float randomValue);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool HasBouncingWhenHit_Scriptable(AActor* HitActor, float surfaceHardness);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DoInteractableArrowFallBehaviour_Scriptable(AItemVisualWorld* InteractableArrow, float kineticEnergyCoef, bool hasBouncingWhenHit);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanAttachArrowOnHitActor_Scriptable(AActor* HitActor, float surfaceHardness);
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void BP_OnStopped();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_OnStartFlying();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_OnOverlapWater(const FVector& impactLocation, const FVector& ImpactNormal);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_OnOverlap(const FVector& impactLocation, const FVector& ImpactNormal, const UG1RPhysicsMaterial* PhysicsMaterial);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_OnHit(const AActor* actorHit, const FVector& HitLocation, const FVector& hitDirection, const FVector& SurfaceNormal, const UG1RPhysicsMaterial* PhysicsMaterial);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_OnBreak(float randomValue);
    
};

