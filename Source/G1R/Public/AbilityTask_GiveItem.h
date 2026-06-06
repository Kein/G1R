#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "AbilityTask_StateBasedAction.h"
#include "Templates/SubclassOf.h"
#include "AbilityTask_GiveItem.generated.h"

class AGothicCharacterState;
class UAbilityTask_GiveItem;
class UGameplayAbility;
class UItemDefinition;

UCLASS()
class G1R_API UAbilityTask_GiveItem : public UAbilityTask_StateBasedAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UItemDefinition> ItemToGive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag GiveItemActionTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Count;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    AGothicCharacterState* ReceivingCharacterState;
    
    UAbilityTask_GiveItem();

    UFUNCTION(BlueprintCallable)
    static UAbilityTask_GiveItem* TaskGiveItem(UGameplayAbility* OwningAbility, AGothicCharacterState* NewReceivingCharacterState, TSubclassOf<UItemDefinition> NewItemToGive, int32 NewCount);
    
};

