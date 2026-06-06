#pragma once
#include "CoreMinimal.h"
#include "AbilityTaskBase.h"
#include "AttackDirectionDelegateDelegate.h"
#include "AbilityTask_UpdateAttackAxis.generated.h"

class ACharacter;

UCLASS()
class G1R_API UAbilityTask_UpdateAttackAxis : public UAbilityTaskBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FAttackDirectionDelegate OnAttack;
    
private:
    UPROPERTY()
    ACharacter* m_Character;
    
public:
    UAbilityTask_UpdateAttackAxis();

};

