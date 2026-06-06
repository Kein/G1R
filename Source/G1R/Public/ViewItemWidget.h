#pragma once
#include "CoreMinimal.h"
#include "Blueprint/IUserObjectListEntry.h"
#include "AlkUserWidget.h"
#include "EAlkMouseButton.h"
#include "ViewItemWidget_MouseSettings.h"
#include "ViewItemWidget.generated.h"

UCLASS(Abstract, EditInlineNew)
class G1R_API UViewItemWidget : public UAlkUserWidget, public IUserObjectListEntry {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FLongClickProgressChangedEventBP, EAlkMouseButton, _MouseButton, double, _Progress);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FClickedEventBP, EAlkMouseButton, _MouseButton);
    
    UPROPERTY(BlueprintAssignable)
    FClickedEventBP m_OnClickedBP;
    
    UPROPERTY(BlueprintAssignable)
    FClickedEventBP m_OnLongClickedBP;
    
    UPROPERTY(BlueprintAssignable)
    FClickedEventBP m_OnLongClickAbortedBP;
    
    UPROPERTY(BlueprintAssignable)
    FLongClickProgressChangedEventBP m_OnLongClickProgressChangedBP;
    
    UViewItemWidget();

    UFUNCTION(BlueprintCallable)
    void SetMouseSettings(const FViewItemWidget_MouseSettings& _MouseSettings);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnLongClickProgressChanged(EAlkMouseButton _MouseButton, double _Progress);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnLongClicked(EAlkMouseButton _MouseButton);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnLongClickAborted(EAlkMouseButton _MouseButton);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnClicked(EAlkMouseButton _MouseButton);
    

    // Fix for true pure virtual functions not being implemented
};

