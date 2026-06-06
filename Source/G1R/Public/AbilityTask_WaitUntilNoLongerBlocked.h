#pragma once
#include "CoreMinimal.h"
#include "GenericAbilityTask_WaitForTagChange.h"
#include "AbilityTask_WaitUntilNoLongerBlocked.generated.h"

class UAbilityTask_WaitUntilNoLongerBlocked;
class UGameplayAbility;

UCLASS()
class G1R_API UAbilityTask_WaitUntilNoLongerBlocked : public UGenericAbilityTask_WaitForTagChange {
    GENERATED_BODY()
public:
    UAbilityTask_WaitUntilNoLongerBlocked();

    UFUNCTION(BlueprintCallable)
    static UAbilityTask_WaitUntilNoLongerBlocked* TaskWaitUntilNoLongerBlocked(UGameplayAbility* OwningAbility);
    
};

