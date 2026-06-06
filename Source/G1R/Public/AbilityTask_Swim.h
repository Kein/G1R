#pragma once
#include "CoreMinimal.h"
#include "AbilityTaskBase.h"
#include "G1RSwimTypeChangedDelegateDelegate.h"
#include "AbilityTask_Swim.generated.h"

class AGothicCharacter;
class UAbilityTask_Swim;
class UGameplayAbility;
class USwimConfig;

UCLASS()
class G1R_API UAbilityTask_Swim : public UAbilityTaskBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FG1RSwimTypeChangedDelegate m_OnSwimTypeChanged;
    
protected:
    UPROPERTY(Transient)
    AGothicCharacter* m_Character;
    
    UPROPERTY(Instanced, Transient)
    USwimConfig* m_SwimConfig;
    
public:
    UAbilityTask_Swim();

    UFUNCTION(BlueprintCallable)
    static UAbilityTask_Swim* CreateTask(UGameplayAbility* OwningAbility, FName TaskInstanceName);
    
};

