#pragma once
#include "CoreMinimal.h"
#include "AbilityTaskBase.h"
#include "AxisWaitSimpleDelegateDelegate.h"
#include "AbilityTask_WaitPressAxis.generated.h"

class UAbilityTask_WaitPressAxis;
class UGameplayAbility;
class UInputComponent;

UCLASS()
class G1R_API UAbilityTask_WaitPressAxis : public UAbilityTaskBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FAxisWaitSimpleDelegate OnPress;
    
private:
    UPROPERTY()
    FName m_Axis_X;
    
    UPROPERTY()
    FName m_Axis_Y;
    
    UPROPERTY()
    float m_Threshold;
    
    UPROPERTY(Instanced)
    UInputComponent* m_InputComponent;
    
public:
    UAbilityTask_WaitPressAxis();

    UFUNCTION()
    void OnAxis(float AxisValue);
    
    UFUNCTION(BlueprintCallable)
    static UAbilityTask_WaitPressAxis* CreateWaitPressAxis(UGameplayAbility* OwningAbility, FName TaskInstanceName, UInputComponent* InputComponent, FName Axis_X, FName Axis_Y, float Threshold);
    
};

