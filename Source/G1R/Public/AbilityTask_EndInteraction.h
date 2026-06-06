#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "AbilityTask_StateBasedAction.h"
#include "AbilityTask_EndInteraction.generated.h"

class UAbilityTask_EndInteraction;
class UGameplayAbility;

UCLASS()
class G1R_API UAbilityTask_EndInteraction : public UAbilityTask_StateBasedAction {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FGameplayTag EndAction;
    
    UAbilityTask_EndInteraction();

    UFUNCTION(BlueprintCallable)
    static UAbilityTask_EndInteraction* TaskEndInteractionQuick(UGameplayAbility* OwningAbility);
    
    UFUNCTION(BlueprintCallable)
    static UAbilityTask_EndInteraction* TaskEndInteractionInstant(UGameplayAbility* OwningAbility);
    
    UFUNCTION(BlueprintCallable)
    static UAbilityTask_EndInteraction* TaskEndInteraction(UGameplayAbility* OwningAbility);
    
};

