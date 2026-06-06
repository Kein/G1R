#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GameplayTagContainer.h"
#include "AlkUserWidget.h"
#include "ButtonWidget_SecondaryActionSettings.h"
#include "EButtonWidget_Button.h"
#include "ButtonWidget.generated.h"

class UInputHintWidget_CommonUI;

UCLASS(Abstract, EditInlineNew)
class G1R_API UButtonWidget : public UAlkUserWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FClickedEventBP);
    
    UPROPERTY(BlueprintAssignable)
    FClickedEventBP m_OnClickedBP;
    
    UPROPERTY(BlueprintAssignable)
    FClickedEventBP m_OnSecondaryClickedBP;
    
protected:
    UPROPERTY(BlueprintReadWrite, Instanced)
    UInputHintWidget_CommonUI* InputHint;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_HasSecondaryAction;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FButtonWidget_SecondaryActionSettings m_SecondaryActionSettings;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGameplayTag m_GameplayTag;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FDataTableRowHandle m_ClickRowHandle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_HoldDelay;
    
public:
    UButtonWidget();

    UFUNCTION(BlueprintCallable)
    void StartClick();
    
    UFUNCTION(BlueprintCallable)
    void SetDataTableRow(const FDataTableRowHandle& _DataTableRow);
    
    UFUNCTION(BlueprintCallable)
    void SecondaryClick();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnSecondaryClicked();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSecondaryClickCanceled();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnReleased();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnPressed();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnClicked();
    
public:
    UFUNCTION(BlueprintPure)
    bool IsPressedBy(EButtonWidget_Button _InputButton) const;
    
    UFUNCTION(BlueprintPure)
    bool IsPressed() const;
    
    UFUNCTION(BlueprintPure)
    FGameplayTag GetGameplayTag() const;
    
    UFUNCTION(BlueprintCallable)
    void EndClick();
    
    UFUNCTION(BlueprintCallable)
    void Click();
    
};

