#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "Styling/SlateBrush.h"
#include "AlkUserWidget.h"
#include "InputHintWidget.generated.h"

UCLASS(Abstract, EditInlineNew)
class G1R_API UInputHintWidget : public UAlkUserWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FActionEventBP);
    
    UPROPERTY(BlueprintAssignable)
    FActionEventBP m_OnInputActionTriggeredBP;
    
    UInputHintWidget();

protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnInputActionTriggered();
    
public:
    UFUNCTION(BlueprintPure)
    FKey GetCurrentKey() const;
    
    UFUNCTION(BlueprintPure)
    FSlateBrush GetCurrentIconBrush() const;
    
    UFUNCTION(BlueprintPure)
    FText GetCurrentDisplayText() const;
    
    UFUNCTION(BlueprintCallable)
    void EmitInputActionTriggeredEvents();
    
};

