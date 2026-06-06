#pragma once
#include "CoreMinimal.h"
#include "AbilityTaskBase.h"
#include "WaitForAllPlayersToConfirmSleepDelegateDelegate.h"
#include "AbilityTask_WaitForAllPlayersToConfirmSleep.generated.h"

class UAbilityTask_WaitForAllPlayersToConfirmSleep;
class UGameplayAbility;

UCLASS()
class UAbilityTask_WaitForAllPlayersToConfirmSleep : public UAbilityTaskBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FWaitForAllPlayersToConfirmSleepDelegate m_OnAllPlayersConfirmed;
    
    UAbilityTask_WaitForAllPlayersToConfirmSleep();

    UFUNCTION(BlueprintCallable)
    static UAbilityTask_WaitForAllPlayersToConfirmSleep* CreateTask(UGameplayAbility* OwningAbility);
    
};

