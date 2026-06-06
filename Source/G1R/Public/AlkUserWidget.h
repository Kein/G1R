#pragma once
#include "CoreMinimal.h"
#include "CommonInputTypeEnum.h"
#include "CommonUserWidget.h"
#include "AlkUserWidget.generated.h"

class UPlayerWidget;

UCLASS(Abstract, EditInlineNew)
class G1R_API UAlkUserWidget : public UCommonUserWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHoveredChangedEventBP, bool, _IsHovered);
    
    UPROPERTY(BlueprintAssignable)
    FHoveredChangedEventBP m_OnHoveredChangedBP;
    
protected:
    UPROPERTY(BlueprintReadOnly)
    ECommonInputType m_CurrentInputType;
    
public:
    UAlkUserWidget();

protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnUnhovered();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnInputTypeChanged(ECommonInputType _InputType);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnHovered();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnControlMappingsRebuilt();
    
    UFUNCTION(BlueprintCallable)
    UPlayerWidget* GetPlayerWidget();
    
public:
    UFUNCTION(BlueprintPure)
    ECommonInputType GetCurrentInputType() const;
    
};

