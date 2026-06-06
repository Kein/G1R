#pragma once
#include "CoreMinimal.h"
#include "AbilityTask_StateBasedAction.h"
#include "Templates/SubclassOf.h"
#include "AbilityTask_TakeOutItem.generated.h"

class UAbilityTask_TakeOutItem;
class UGameplayAbility;
class UItemDefinition;

UCLASS()
class G1R_API UAbilityTask_TakeOutItem : public UAbilityTask_StateBasedAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UItemDefinition> ItemDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bAttachOnly;
    
    UAbilityTask_TakeOutItem();

    UFUNCTION(BlueprintCallable)
    static UAbilityTask_TakeOutItem* TaskTakeOutItem(UGameplayAbility* OwningAbility, TSubclassOf<UItemDefinition> NewItemDefinition);
    
    UFUNCTION(BlueprintCallable)
    static UAbilityTask_TakeOutItem* TaskAttachItem(UGameplayAbility* OwningAbility, TSubclassOf<UItemDefinition> NewItemDefinition);
    
};

