#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "AbilityTask_UpdateRotationToTarget.h"
#include "AbilityTask_UpdateRotationToTargetWithDirection.generated.h"

class UAbilityTask_UpdateRotationToTargetWithDirection;
class UGameplayAbility;
class USceneComponent;

UCLASS()
class G1R_API UAbilityTask_UpdateRotationToTargetWithDirection : public UAbilityTask_UpdateRotationToTarget {
    GENERATED_BODY()
public:
    UAbilityTask_UpdateRotationToTargetWithDirection();

    UFUNCTION(BlueprintCallable)
    static UAbilityTask_UpdateRotationToTargetWithDirection* CreateUpdateRotationToTargetWithDirection(UGameplayAbility* OwningAbility, FName TaskInstanceName, USceneComponent* TargetComp, FGameplayTag Direction);
    
};

