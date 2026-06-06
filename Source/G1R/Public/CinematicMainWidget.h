#pragma once
#include "CoreMinimal.h"
#include "GothicCommonActivatableWidget.h"
#include "OnAnyInputEventDelegate.h"
#include "VoicelineData.h"
#include "CinematicMainWidget.generated.h"

class UInputHintWidget;

UCLASS(EditInlineNew)
class G1R_API UCinematicMainWidget : public UGothicCommonActivatableWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOnAnyInputEvent OnAnyInputEvent;
    
protected:
    UPROPERTY(BlueprintReadWrite, Instanced)
    UInputHintWidget* SkipCinematicButton;
    
public:
    UCinematicMainWidget();

protected:
    UFUNCTION(BlueprintImplementableEvent)
    void EnableInputBP();
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void BP_OnVoiceline(FVoicelineData VoicelineData);
    
};

