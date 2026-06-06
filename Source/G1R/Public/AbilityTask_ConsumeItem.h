#pragma once
#include "CoreMinimal.h"
#include "AbilityTask_StateBasedAction.h"
#include "Templates/SubclassOf.h"
#include "AbilityTask_ConsumeItem.generated.h"

class UAbilityTask_ConsumeItem;
class UGameplayAbility;
class UItemDefinition;

UCLASS()
class G1R_API UAbilityTask_ConsumeItem : public UAbilityTask_StateBasedAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    TSubclassOf<UItemDefinition> KindOfItem;
    
    UAbilityTask_ConsumeItem();

    UFUNCTION(BlueprintCallable)
    static UAbilityTask_ConsumeItem* TaskConsumeItem(UGameplayAbility* OwningAbility, TSubclassOf<UItemDefinition> NewKindOfItem);
    
};

