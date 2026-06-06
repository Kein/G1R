#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "EComboQuality.h"
#include "DebugPlayerWidget.generated.h"

class UDebugControlWidget;
class UTextBlock;

UCLASS(EditInlineNew)
class G1R_API UDebugPlayerWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced)
    UDebugControlWidget* m_DebugControlWidget;
    
    UPROPERTY(Instanced)
    UTextBlock* ComboLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_TimeToResetComboLabel;
    
public:
    UDebugPlayerWidget();

protected:
    UFUNCTION()
    void ResetComboLabel();
    
public:
    UFUNCTION()
    void OnCombo(EComboQuality Combo);
    
};

