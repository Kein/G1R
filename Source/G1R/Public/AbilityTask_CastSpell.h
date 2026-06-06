#pragma once
#include "CoreMinimal.h"
#include "AbilityTask_StateBasedAction.h"
#include "AbilityTask_CastSpell.generated.h"

class UAbilityTask_CastSpell;
class UGameplayAbility;

UCLASS()
class G1R_API UAbilityTask_CastSpell : public UAbilityTask_StateBasedAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 NumLaunches;
    
    UAbilityTask_CastSpell();

    UFUNCTION(BlueprintCallable)
    static UAbilityTask_CastSpell* TaskCastSpell(UGameplayAbility* OwningAbility, int32 NewNumLaunches);
    
};

