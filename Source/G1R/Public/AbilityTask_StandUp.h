#pragma once
#include "CoreMinimal.h"
#include "AbilityTaskBase.h"
#include "OnTargetDieDelegateDelegate.h"
#include "AbilityTask_StandUp.generated.h"

class AGothicCharacterState;
class UAbilityTask_StandUp;
class UGameplayAbility;
class UInteractiveComponent;

UCLASS()
class G1R_API UAbilityTask_StandUp : public UAbilityTaskBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOnTargetDieDelegate OnStandUp;
    
protected:
    UPROPERTY(BlueprintReadOnly, Instanced)
    UInteractiveComponent* m_InteractiveComponent;
    
    UPROPERTY()
    AGothicCharacterState* m_CharacterState;
    
public:
    UAbilityTask_StandUp();

    UFUNCTION(BlueprintCallable)
    static UAbilityTask_StandUp* CreateUpdateStandUp(UGameplayAbility* OwningAbility, FName TaskInstanceName, float Duration);
    
};

