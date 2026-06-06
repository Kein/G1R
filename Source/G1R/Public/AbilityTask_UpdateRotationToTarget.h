#pragma once
#include "CoreMinimal.h"
#include "AbilityTaskBase.h"
#include "AbilityTask_UpdateRotationToTarget.generated.h"

class UAbilityTask_UpdateRotationToTarget;
class UGameplayAbility;
class UGothicMovementComponent;
class USceneComponent;

UCLASS()
class G1R_API UAbilityTask_UpdateRotationToTarget : public UAbilityTaskBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced)
    USceneComponent* m_MagnetTarget;
    
    UPROPERTY(Instanced)
    UGothicMovementComponent* m_MoveComp;
    
public:
    UAbilityTask_UpdateRotationToTarget();

    UFUNCTION(BlueprintCallable)
    static UAbilityTask_UpdateRotationToTarget* CreateUpdateRotationToTarget(UGameplayAbility* OwningAbility, FName TaskInstanceName, USceneComponent* TargetComp, float RotationSpeed);
    
};

