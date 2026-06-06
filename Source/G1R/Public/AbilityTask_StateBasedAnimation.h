#pragma once
#include "CoreMinimal.h"
#include "AbilityTaskCoroutine.h"
#include "AbilityTask_StateBasedAnimation.generated.h"

class UAnimInstance;

UCLASS()
class G1R_API UAbilityTask_StateBasedAnimation : public UAbilityTaskCoroutine {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName StateMachineName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UAnimInstance> AnimInstance;
    
    UAbilityTask_StateBasedAnimation();

    UFUNCTION(BlueprintPure)
    TSet<FName> GetPossibleTransitionsFromState(FName FromState) const;
    
    UFUNCTION(BlueprintPure)
    TSet<FName> GetAvailableStates() const;
    
};

