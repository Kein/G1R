#pragma once
#include "CoreMinimal.h"
#include "CommonInputTypeEnum.h"
#include "CommonUserWidget.h"
#include "TabSelectorWidget.generated.h"

class UInputHintWidget;
class UUserWidget;

UCLASS(Abstract, EditInlineNew)
class G1R_API UTabSelectorWidget : public UCommonUserWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FTabChangedEventBP, int32, OldTabIndex, int32, NewTabIndex);
    
    UPROPERTY(BlueprintAssignable)
    FTabChangedEventBP TabChangedEventBP;
    
protected:
    UPROPERTY(BlueprintReadWrite, Instanced)
    TArray<UUserWidget*> Slots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FText> TabList;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UInputHintWidget* InputHint_NextTab;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UInputHintWidget* InputHint_PreviousTab;
    
    UPROPERTY(EditAnywhere)
    int32 m_SelectedTabIndex;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_StartWithInputEnabled;
    
public:
    UTabSelectorWidget();

    UFUNCTION(BlueprintImplementableEvent)
    void ShowHints(bool _ShouldShow);
    
    UFUNCTION(BlueprintCallable)
    void SelectTabIndex(int32 _Index);
    
    UFUNCTION(BlueprintImplementableEvent)
    void RefreshWidget();
    
    UFUNCTION(BlueprintCallable)
    void PreviousTab();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnInputTypeChanged(ECommonInputType _InputType);
    
public:
    UFUNCTION(BlueprintCallable)
    void NextTab();
    
    UFUNCTION(BlueprintPure)
    int32 GetTabIndex() const;
    
    UFUNCTION(BlueprintCallable)
    void EnableInput();
    
    UFUNCTION(BlueprintCallable)
    void DisableInput();
    
    UFUNCTION()
    void ClearTabList();
    
    UFUNCTION(BlueprintImplementableEvent)
    void ClearChildren();
    
    UFUNCTION()
    void AddTab(const FText& _Text);
    
};

