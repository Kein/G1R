#pragma once
#include "CoreMinimal.h"
#include "Abilities/Tasks/AbilityTask.h"
#include "OnFinishSloMoDelegateDelegate.h"
#include "AbilityTask_PlaySlowMo.generated.h"

class AActor;
class UAbilityTask_PlaySlowMo;
class UGameplayAbility;

UCLASS()
class G1R_API UAbilityTask_PlaySlowMo : public UAbilityTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOnFinishSloMoDelegate OnFinish;
    
private:
    UPROPERTY()
    AActor* m_Target;
    
public:
    UAbilityTask_PlaySlowMo();

    UFUNCTION(BlueprintCallable)
    static UAbilityTask_PlaySlowMo* PlaySlowMo(UGameplayAbility* OwningAbility, AActor* Target, float Time, float Magnitude);
    
private:
    UFUNCTION()
    void OnTimeFinish();
    
};

