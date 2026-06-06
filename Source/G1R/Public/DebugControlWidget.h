#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "Blueprint/UserWidget.h"
#include "DebugControlWidget.generated.h"

class UCanvasPanel;
class UWidget;

UCLASS(EditInlineNew)
class G1R_API UDebugControlWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    TMap<FKey, UWidget*> m_KeyMap;
    
    UPROPERTY(Instanced)
    UCanvasPanel* m_ControllerPanel;
    
    UPROPERTY(Instanced)
    UWidget* m_JoysticRight;
    
    UPROPERTY(Instanced)
    UWidget* m_JoysticLeft;
    
    UPROPERTY(Instanced)
    UCanvasPanel* m_KeyboardPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_TimerWheelShowSeconds;
    
public:
    UDebugControlWidget();

protected:
    UFUNCTION()
    void ClearMouseWheel() const;
    
};

