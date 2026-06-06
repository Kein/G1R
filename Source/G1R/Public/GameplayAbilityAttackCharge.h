#pragma once
#include "CoreMinimal.h"
#include "Engine/HitResult.h"
#include "GameplayAbilityAttackBase.h"
#include "GameplayAbilityAttackCharge.generated.h"

class UAbilityTask_PlayMontage_Extended;
class UAbilityTask_UpdateChargeAttack;
class UAbilityTask_UpdateHits;
class UPrimitiveComponent;
class USceneComponent;

UCLASS()
class G1R_API UGameplayAbilityAttackCharge : public UGameplayAbilityAttackBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    UAbilityTask_PlayMontage_Extended* m_PlayMontageTask;
    
    UPROPERTY()
    UAbilityTask_UpdateChargeAttack* m_UpdateChargeTask;
    
    UPROPERTY()
    UAbilityTask_UpdateHits* m_UptdateHitsTask;
    
public:
    UGameplayAbilityAttackCharge();

protected:
    UFUNCTION()
    void OnOverlapEnterCharge(UPrimitiveComponent* HitComp, const FHitResult Hit);
    
    UFUNCTION()
    void OnHitWall();
    
    UFUNCTION()
    void OnHitCharacter(UPrimitiveComponent* HitComp, const FHitResult Hit);
    
    UFUNCTION()
    void OnChargeTargetLost();
    
    UFUNCTION()
    void OnChargeTargetAcquired(USceneComponent* NewTarget);
    
};

