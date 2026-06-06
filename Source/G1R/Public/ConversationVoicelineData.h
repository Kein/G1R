#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "OnSubtitleFinishedDisplayDelegate.h"
#include "ConversationVoicelineData.generated.h"

UCLASS(BlueprintType)
class G1R_API UConversationVoicelineData : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText m_SpeakerName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText m_SpeakerText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_SecondsDisplayed;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FOnSubtitleFinishedDisplay m_OnSubtitleFinishedDisplay;
    
    UConversationVoicelineData();

    UFUNCTION(BlueprintCallable)
    void SetSubtitleTimer();
    
private:
    UFUNCTION()
    void OnSubtitleEndDisplay();
    
};

