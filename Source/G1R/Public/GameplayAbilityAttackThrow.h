#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Abilities/GameplayAbilityTypes.h"
#include "Abilities/GameplayAbilityTypes.h"
#include "GameplayAbilityAttackBase.h"
#include "GameplayAbilityAttackThrow.generated.h"

class AProjectileVisual;
class UAbilityTask_PlayMontage_Extended;

UCLASS()
class G1R_API UGameplayAbilityAttackThrow : public UGameplayAbilityAttackBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    UAbilityTask_PlayMontage_Extended* m_PlayMontageTask;
    
    UPROPERTY()
    AProjectileVisual* m_Projectile;
    
    UPROPERTY()
    bool m_OnExectuion;
    
public:
    UGameplayAbilityAttackThrow();

protected:
    UFUNCTION(Reliable, Server)
    void ServerFire(const FTransform& AimTransform);
    
    UFUNCTION(BlueprintNativeEvent)
    void OnProjectileSpawned_Scriptable(AProjectileVisual* ProjectileVisual);
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    bool OnCanActivateAbility_Scriptable(const FGameplayAbilityActorInfo& GameplayAbilityActorInfo) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnActivateAbilityBeforeAssetPreload_Scriptable(const FGameplayAbilityActorInfo& GAActorInfo, const FGameplayEventData& TriggerEventData);
    
    UFUNCTION(BlueprintNativeEvent)
    void InitializeProjectile_Scriptable(AProjectileVisual* ProjectileVisual);
    
};

