#pragma once
#include "CoreMinimal.h"
#include "EGetBookCaptureActorValidResult.h"
#include "GothicCommonActivatableWidget.h"
#include "AnimatedBookUIWidget.generated.h"

class ABookCaptureActor;

UCLASS(EditInlineNew)
class UAnimatedBookUIWidget : public UGothicCommonActivatableWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    ABookCaptureActor* m_CachedBookCaptureActor;
    
public:
    UAnimatedBookUIWidget();

    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    ABookCaptureActor* GetBookCaptureActor(EGetBookCaptureActorValidResult& Result) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FadeOutAndClose();
    
};

