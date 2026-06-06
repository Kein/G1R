#pragma once
#include "CoreMinimal.h"
#include "AbilityTask_UpdateRotationToTarget.h"
#include "AbilityTask_UpdateRotationToTargetCharge.generated.h"

class UAbilityTask_UpdateRotationToTargetCharge;
class UGameplayAbility;
class USceneComponent;

UCLASS()
class G1R_API UAbilityTask_UpdateRotationToTargetCharge : public UAbilityTask_UpdateRotationToTarget {
    GENERATED_BODY()
public:
    UAbilityTask_UpdateRotationToTargetCharge();

    UFUNCTION(BlueprintCallable)
    static UAbilityTask_UpdateRotationToTargetCharge* CreateTask(UGameplayAbility* OwningAbility, FName TaskInstanceName, USceneComponent* TargetComp, bool IsTargeted, float RotationSpeed, float IntialRotationMaxAngle, bool StartInstantRotation);
    
};

