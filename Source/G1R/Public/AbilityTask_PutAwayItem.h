#pragma once
#include "CoreMinimal.h"
#include "AbilityTask_StateBasedAction.h"
#include "AbilityTask_PutAwayItem.generated.h"

class UAbilityTask_PutAwayItem;
class UGameplayAbility;

UCLASS()
class G1R_API UAbilityTask_PutAwayItem : public UAbilityTask_StateBasedAction {
    GENERATED_BODY()
public:
    UAbilityTask_PutAwayItem();

    UFUNCTION(BlueprintCallable)
    static UAbilityTask_PutAwayItem* TaskPutAwayItem(UGameplayAbility* OwningAbility);
    
};

