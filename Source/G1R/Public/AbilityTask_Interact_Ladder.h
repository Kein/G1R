#pragma once
#include "CoreMinimal.h"
#include "AbilityTask_InteractiveTraversal.h"
#include "AbilityTask_Interact_Ladder.generated.h"

class ALadderObject;

UCLASS()
class G1R_API UAbilityTask_Interact_Ladder : public UAbilityTask_InteractiveTraversal {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    float LootAtPointOffset;
    
public:
    UAbilityTask_Interact_Ladder();

protected:
    UFUNCTION(BlueprintPure)
    ALadderObject* GetLadder() const;
    
    UFUNCTION()
    bool ConditionCanStepUp2();
    
    UFUNCTION()
    bool ConditionCanStepUp();
    
    UFUNCTION()
    bool ConditionCanStepDown3();
    
    UFUNCTION()
    bool ConditionCanStepDown2();
    
    UFUNCTION()
    bool ConditionCanStepDown();
    
    UFUNCTION()
    bool ConditionCanExitTop();
    
    UFUNCTION()
    bool ConditionCanExitBottom2();
    
    UFUNCTION()
    bool ConditionCanExitBottom();
    
};

