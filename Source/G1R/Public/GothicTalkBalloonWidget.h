#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "GothicTalkBalloonWidget.generated.h"

class AGothicCharacter;

UCLASS(EditInlineNew)
class UGothicTalkBalloonWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UGothicTalkBalloonWidget();

    UFUNCTION(BlueprintImplementableEvent)
    void ShowBalloon();
    
    UFUNCTION(BlueprintImplementableEvent)
    void HideBalloon();
    
    UFUNCTION(BlueprintImplementableEvent)
    void HandleCharacterStartedSpeakingSentence(const FText& NewText, float EstimatedDurationSeconds, const AGothicCharacter* TargetCharacter);
    
    UFUNCTION(BlueprintImplementableEvent)
    void HandleCharacterFinishedSpeakingSentence();
    
};

