#pragma once
#include "CoreMinimal.h"
#include "AbilityTaskBase.h"
#include "AbilityTask_UpdateChargeAttack.generated.h"

class UAbilityTask_UpdateChargeAttack;
class UGameplayAbility;
class UGothicMovementComponent;
class USceneComponent;

UCLASS()
class G1R_API UAbilityTask_UpdateChargeAttack : public UAbilityTaskBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced)
    UGothicMovementComponent* m_MoveComp;
    
public:
    UAbilityTask_UpdateChargeAttack();

    UFUNCTION(BlueprintCallable)
    static UAbilityTask_UpdateChargeAttack* UpdateChargeAttack(UGameplayAbility* OwningAbility, FName TaskInstanceName, float TargetSearchRadius, float TargetSearchAngle, USceneComponent* Target);
    
};

