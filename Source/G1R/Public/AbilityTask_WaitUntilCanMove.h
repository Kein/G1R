#pragma once
#include "CoreMinimal.h"
#include "GenericAbilityTask_WaitForTagChange.h"
#include "AbilityTask_WaitUntilCanMove.generated.h"

class UAbilityTask_WaitUntilCanMove;
class UGameplayAbility;

UCLASS()
class G1R_API UAbilityTask_WaitUntilCanMove : public UGenericAbilityTask_WaitForTagChange {
    GENERATED_BODY()
public:
    UAbilityTask_WaitUntilCanMove();

    UFUNCTION(BlueprintCallable)
    static UAbilityTask_WaitUntilCanMove* TaskWaitUntilCanMove(UGameplayAbility* OwningAbility);
    
};

