#pragma once
#include "CoreMinimal.h"
#include "GameplayAbilityAttackCharge.h"
#include "GameplayAbilityAttackDig.generated.h"

class UAbilityTask_UpdateDiggingAttack;

UCLASS()
class G1R_API UGameplayAbilityAttackDig : public UGameplayAbilityAttackCharge {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    UAbilityTask_UpdateDiggingAttack* m_UpdateDiggingAttackTask;
    
public:
    UGameplayAbilityAttackDig();

private:
    UFUNCTION()
    void StopDigging();
    
};

