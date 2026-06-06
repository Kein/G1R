#pragma once
#include "CoreMinimal.h"
#include "GenericAbilityTask_WaitForTagChange.h"
#include "AbilityTask_UndrawWeapon.generated.h"

class UAbilityTask_UndrawWeapon;
class UGameplayAbility;

UCLASS()
class G1R_API UAbilityTask_UndrawWeapon : public UGenericAbilityTask_WaitForTagChange {
    GENERATED_BODY()
public:
    UAbilityTask_UndrawWeapon();

    UFUNCTION(BlueprintCallable)
    static UAbilityTask_UndrawWeapon* TaskUndrawWeapon(UGameplayAbility* OwningAbility);
    
};

