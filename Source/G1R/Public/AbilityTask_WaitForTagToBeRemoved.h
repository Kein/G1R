#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GenericAbilityTask_WaitForTagChange.h"
#include "AbilityTask_WaitForTagToBeRemoved.generated.h"

class UAbilityTask_WaitForTagToBeRemoved;
class UGameplayAbility;

UCLASS()
class G1R_API UAbilityTask_WaitForTagToBeRemoved : public UGenericAbilityTask_WaitForTagChange {
    GENERATED_BODY()
public:
    UAbilityTask_WaitForTagToBeRemoved();

    UFUNCTION(BlueprintCallable)
    static UAbilityTask_WaitForTagToBeRemoved* TaskWaitForTagToBeRemoved(UGameplayAbility* OwningAbility, const FGameplayTag& Tag);
    
};

