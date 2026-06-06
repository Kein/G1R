#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "AbilityTask_StateBasedAction.h"
#include "AbilityTask_Taunt.generated.h"

class UAbilityTask_Taunt;
class UGameplayAbility;

UCLASS()
class G1R_API UAbilityTask_Taunt : public UAbilityTask_StateBasedAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTagContainer AllTagsRequiredContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTagContainer OneTagRequiredContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTagContainer BlockedTags;
    
    UAbilityTask_Taunt();

    UFUNCTION(BlueprintCallable)
    static UAbilityTask_Taunt* TaskTauntMatchingAny(UGameplayAbility* OwningAbility, FGameplayTagContainer OneTagRequired, FGameplayTagContainer NewBlockedTags);
    
    UFUNCTION(BlueprintCallable)
    static UAbilityTask_Taunt* TaskTauntMatchingAllAndOne(UGameplayAbility* OwningAbility, FGameplayTagContainer AllTagsRequired, FGameplayTagContainer OneTagRequired, FGameplayTagContainer NewBlockedTags);
    
    UFUNCTION(BlueprintCallable)
    static UAbilityTask_Taunt* TaskTauntMatchingAll(UGameplayAbility* OwningAbility, FGameplayTagContainer AllTagsRequired, FGameplayTagContainer NewBlockedTags);
    
    UFUNCTION(BlueprintCallable)
    static UAbilityTask_Taunt* TaskTaunt(UGameplayAbility* OwningAbility, FGameplayTag TauntTag);
    
};

