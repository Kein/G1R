#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "OnFinishedFadeInDelegateDelegate.h"
#include "OnFinishedFadeOutDelegateDelegate.h"
#include "TransitionWidget.generated.h"

UCLASS(EditInlineNew)
class G1R_API UTransitionWidget : public UCommonUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FOnFinishedFadeInDelegate m_OnFinishedFadeInDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FOnFinishedFadeOutDelegate m_OnFinishedFadeOutDelegate;
    
    UTransitionWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_FadeOutFromBlack();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_FadeInToBlack();
    
};

