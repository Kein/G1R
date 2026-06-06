#pragma once
#include "CoreMinimal.h"
#include "AbilityTaskBase.h"
#include "AbilityTask_CheckWaterLevel.generated.h"

class UAbilityTask_CheckWaterLevel;
class UGameplayAbility;
class USwimConfig;

UCLASS()
class G1R_API UAbilityTask_CheckWaterLevel : public UAbilityTaskBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced)
    USwimConfig* m_SwimConfig;
    
public:
    UAbilityTask_CheckWaterLevel();

    UFUNCTION(BlueprintCallable)
    static UAbilityTask_CheckWaterLevel* CreateTask(UGameplayAbility* OwningAbility, FName TaskInstanceName);
    
};

