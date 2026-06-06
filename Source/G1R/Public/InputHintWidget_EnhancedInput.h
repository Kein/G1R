#pragma once
#include "CoreMinimal.h"
#include "InputHintWidget.h"
#include "InputHintWidget_EnhancedInput.generated.h"

class UInputAction;

UCLASS(Abstract, EditInlineNew)
class G1R_API UInputHintWidget_EnhancedInput : public UInputHintWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FActionEventBP);
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UInputAction* m_InputAction;
    
public:
    UInputHintWidget_EnhancedInput();

};

