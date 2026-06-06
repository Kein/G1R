#pragma once
#include "CoreMinimal.h"
#include "AbilityTaskBase.h"
#include "AbilityTask_UpdateAttackMagnet.generated.h"

class UAbilityTask_UpdateAttackMagnet;
class UAnimNotifyState_MeleeMagnet;
class UCombatConfig;
class UGameplayAbility;
class USceneComponent;

UCLASS()
class G1R_API UAbilityTask_UpdateAttackMagnet : public UAbilityTaskBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced)
    UCombatConfig* m_CombatConfig;
    
public:
    UAbilityTask_UpdateAttackMagnet();

private:
    UFUNCTION()
    void UpdateRootMotion();
    
public:
    UFUNCTION(BlueprintCallable)
    static UAbilityTask_UpdateAttackMagnet* UpdateAttackMagnet(UGameplayAbility* OwningAbility, FName TaskInstanceName, float Range, float DistanceAfterAttack, float RMScaleIncreaseRate, const UAnimNotifyState_MeleeMagnet* magnetNotify, USceneComponent* Target);
    
private:
    UFUNCTION()
    void AskForATarget() const;
    
};

