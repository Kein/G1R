#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "AbilityTask_StateBasedInputAction.h"
#include "AbilityTask_ParryAndRiposte.generated.h"

class AGothicCharacter;
class UAbilityTask_ParryAndRiposte;
class UGameplayAbility;

UCLASS()
class G1R_API UAbilityTask_ParryAndRiposte : public UAbilityTask_StateBasedInputAction {
    GENERATED_BODY()
public:
    UAbilityTask_ParryAndRiposte();

    UFUNCTION(BlueprintCallable)
    static UAbilityTask_ParryAndRiposte* TaskParryAndRiposte(UGameplayAbility* OwningAbility, AGothicCharacter* ParryTarget, const FGameplayTag& Direction);
    
};

