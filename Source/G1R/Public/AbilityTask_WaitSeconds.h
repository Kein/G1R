#pragma once
#include "CoreMinimal.h"
#include "AbilityTaskGeneric.h"
#include "AbilityTask_WaitSeconds.generated.h"

class UAbilityTask_WaitSeconds;
class UGameplayAbility;

UCLASS()
class G1R_API UAbilityTask_WaitSeconds : public UAbilityTaskGeneric {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float SecondsToWait;
    
    UAbilityTask_WaitSeconds();

    UFUNCTION(BlueprintCallable)
    static UAbilityTask_WaitSeconds* TaskWaitSeconds(UGameplayAbility* OwningAbility, float NewSecondsToWait);
    
};

