#pragma once
#include "CoreMinimal.h"
#include "AbilityTask_InteractWith.h"
#include "AbilityTask_Eat.generated.h"

class AItemVisualWorld;
class UAbilityTask_Eat;
class UGameplayAbility;

UCLASS()
class G1R_API UAbilityTask_Eat : public UAbilityTask_InteractWith {
    GENERATED_BODY()
public:
    UAbilityTask_Eat();

    UFUNCTION(BlueprintCallable)
    static UAbilityTask_Eat* TaskEatSpecificItem(UGameplayAbility* OwningAbility, AItemVisualWorld* Item);
    
};

