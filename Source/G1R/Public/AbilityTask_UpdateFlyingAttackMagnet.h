#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AbilityTaskBase.h"
#include "AbilityTask_UpdateFlyingAttackMagnet.generated.h"

class UAbilityTask_UpdateFlyingAttackMagnet;
class UAnimNotifyState_FlyingMagnet;
class UGameplayAbility;
class URootMotionModifier_Scale;
class USceneComponent;

UCLASS()
class G1R_API UAbilityTask_UpdateFlyingAttackMagnet : public UAbilityTaskBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    URootMotionModifier_Scale* m_RootMotionModifierScale;
    
public:
    UAbilityTask_UpdateFlyingAttackMagnet();

protected:
    UFUNCTION()
    void UpdateRootMotion();
    
public:
    UFUNCTION(BlueprintCallable)
    static UAbilityTask_UpdateFlyingAttackMagnet* UpdateFlyingAttackMagnet(UGameplayAbility* OwningAbility, FName TaskInstanceName, USceneComponent* MagnetTarget, FVector DamageLocalPosition, FVector AttackRange, const UAnimNotifyState_FlyingMagnet* magnetNotify);
    
};

