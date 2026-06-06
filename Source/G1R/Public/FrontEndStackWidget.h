#pragma once
#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "FrontEndStackWidget.generated.h"

class UCommonActivatableWidgetStack;

UCLASS(EditInlineNew)
class G1R_API UFrontEndStackWidget : public UCommonActivatableWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Instanced)
    UCommonActivatableWidgetStack* Stack_FrontEnd;
    
public:
    UFrontEndStackWidget();

};

