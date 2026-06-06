#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/HitResult.h"
#include "SpellVisual.h"
#include "Templates/SubclassOf.h"
#include "StormOfFireVisual.generated.h"

class AActor;
class UAbilitySystemComponent;
class UHitCapsuleCollisionComponent;
class UPrimitiveComponent;
class USphereComponent;
class UWeaponDefinition;

UCLASS()
class G1R_API AStormOfFireVisual : public ASpellVisual {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    USphereComponent* m_SphereComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UHitCapsuleCollisionComponent* m_CollisionComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector m_Velocity;
    
    AStormOfFireVisual(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ShouldNotifyEnvironmentDebuff_Scriptable(AActor* OtherActor);
    
    UFUNCTION(BlueprintNativeEvent)
    void OnBeginOverlapServer(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Initialize_Scriptable(TSubclassOf<UWeaponDefinition> WeaponDefinition);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FireProjectile_Scriptable();
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void DeactivateCollision() const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    bool CanApplyDamage_Scriptable(const UAbilitySystemComponent* Source, const UAbilitySystemComponent* Target) const;
    
};

