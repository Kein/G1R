#pragma once
#include "CoreMinimal.h"
#include "AbilityTaskBase.h"
#include "EAbilityInputID.h"
#include "InputWaitSimpleDelegateDelegate.h"
#include "AbilityTask_WaitPressInput.generated.h"

class UAbilityTask_WaitPressInput;
class UGameplayAbility;
class UInputComponent;

UCLASS()
class G1R_API UAbilityTask_WaitPressInput : public UAbilityTaskBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FInputWaitSimpleDelegate OnPress;
    
private:
    UPROPERTY()
    EAbilityInputID m_ActionId;
    
    UPROPERTY(Instanced)
    UInputComponent* m_InputComponent;
    
public:
    UAbilityTask_WaitPressInput();

    UFUNCTION()
    void OnPressInput();
    
    UFUNCTION(BlueprintCallable)
    static UAbilityTask_WaitPressInput* CreateWaitPressInput(UGameplayAbility* OwningAbility, FName TaskInstanceName, UInputComponent* InputComponent, const EAbilityInputID ActionId);
    
};

