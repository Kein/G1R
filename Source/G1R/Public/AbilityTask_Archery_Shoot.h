#pragma once
#include "CoreMinimal.h"
#include "AbilityTask_StateBasedAction.h"
#include "AbilityTask_Archery_Shoot.generated.h"

class UAbilityTask_Archery_Shoot;
class UGameplayAbility;

UCLASS()
class G1R_API UAbilityTask_Archery_Shoot : public UAbilityTask_StateBasedAction {
    GENERATED_BODY()
public:
    UAbilityTask_Archery_Shoot();

    UFUNCTION(BlueprintCallable)
    static UAbilityTask_Archery_Shoot* TaskArcheryShoot(UGameplayAbility* OwningAbility);
    
};

