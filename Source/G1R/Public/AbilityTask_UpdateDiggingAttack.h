#pragma once
#include "CoreMinimal.h"
#include "AbilityTaskBase.h"
#include "AbilityTask_UpdateDiggingAttack.generated.h"

class UAbilityTask_UpdateDiggingAttack;
class UGameplayAbility;

UCLASS()
class G1R_API UAbilityTask_UpdateDiggingAttack : public UAbilityTaskBase {
    GENERATED_BODY()
public:
    UAbilityTask_UpdateDiggingAttack();

    UFUNCTION(BlueprintCallable)
    static UAbilityTask_UpdateDiggingAttack* UpdateDiggingAttack(UGameplayAbility* OwningAbility, FName TaskInstanceName);
    
};

