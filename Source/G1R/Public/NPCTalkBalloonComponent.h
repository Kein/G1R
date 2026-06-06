#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Components/WidgetComponent.h"
#include "NPCTalkBalloonComponent.generated.h"

class AGothicCharacter;
class UGothicTalkBalloonWidget;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class G1R_API UNPCTalkBalloonComponent : public UWidgetComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    FGameplayTagContainer EventTagsStartSpeaking;
    
    UPROPERTY(EditDefaultsOnly)
    FGameplayTagContainer EventTagsEndSpeaking;
    
    UPROPERTY(EditDefaultsOnly)
    FGameplayTagContainer SuppressWhileCharacterHasAnyOf;
    
    UPROPERTY(EditDefaultsOnly)
    FGameplayTagContainer SuppressWhileCharacterHasAllOf;
    
    UPROPERTY(EditDefaultsOnly)
    FGameplayTagContainer SuppressForVoicelines;
    
    UPROPERTY(EditDefaultsOnly)
    FGameplayTagContainer RequireCharacterHasAnyOf;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SecondsToWaitForNextVoiceline;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_IsPlayerCharacter;
    
public:
    UNPCTalkBalloonComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintNativeEvent)
    void HandleCharacterStartedSpeakingSentence(const FText& Text, float Duration, AGothicCharacter* TargetCharacter);
    
    UFUNCTION(BlueprintNativeEvent)
    void HandleCharacterFinishedSpeakingSentence();
    
    UFUNCTION(BlueprintPure)
    UGothicTalkBalloonWidget* GetTalkBalloonWidget() const;
    
};

