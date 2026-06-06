#pragma once
#include "CoreMinimal.h"
#include "AbilityTaskBase.h"
#include "AbilityTask_CraftItemsDelegateDelegate.h"
#include "Templates/SubclassOf.h"
#include "AbilityTask_CraftItems.generated.h"

class AInteractiveObjectActor;
class UAbilityTask_CraftItems;
class UGameplayAbility;
class UItemRecipeDefinition;

UCLASS()
class G1R_API UAbilityTask_CraftItems : public UAbilityTaskBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FAbilityTask_CraftItemsDelegate m_OnFinish;
    
private:
    UPROPERTY()
    AInteractiveObjectActor* m_ContainerActor;
    
public:
    UAbilityTask_CraftItems();

    UFUNCTION(BlueprintCallable)
    static UAbilityTask_CraftItems* CraftItems(UGameplayAbility* OwningAbility, const AInteractiveObjectActor* Container, TSubclassOf<UItemRecipeDefinition> recipe, int32 quantity, const bool isMultiStageState);
    
};

