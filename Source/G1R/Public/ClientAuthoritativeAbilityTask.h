#pragma once
#include "CoreMinimal.h"
#include "Abilities/Tasks/AbilityTask_ApplyRootMotion_Base.h"
#include "ClientAuthoritativeAbilityTaskDelegateDelegate.h"
#include "ClientAuthoritativeAbilityTask.generated.h"

UCLASS()
class G1R_API UClientAuthoritativeAbilityTask : public UAbilityTask_ApplyRootMotion_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FClientAuthoritativeAbilityTaskDelegate OnFinish;
    
    UClientAuthoritativeAbilityTask();

};

