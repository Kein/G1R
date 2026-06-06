#pragma once
#include "CoreMinimal.h"
#include "AbilityTask_StateBasedAction.h"
#include "AbilityTask_TradeWith.generated.h"

class AGothicCharacterState;
class UAbilityTask_TradeWith;
class UGameplayAbility;

UCLASS()
class G1R_API UAbilityTask_TradeWith : public UAbilityTask_StateBasedAction {
    GENERATED_BODY()
public:
    UPROPERTY()
    AGothicCharacterState* Buyer;
    
    UAbilityTask_TradeWith();

    UFUNCTION(BlueprintCallable)
    static UAbilityTask_TradeWith* TaskTradeWith(UGameplayAbility* OwningAbility, AGothicCharacterState* NewBuyer);
    
};

