#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameplayAbilityBase.h"
#include "VoicelineAssignment.h"
#include "GameplayAbilityMumble.generated.h"

class AGothicCharacter;
class UGenericVoicelineComponent;

UCLASS()
class G1R_API UGameplayAbilityMumble : public UGameplayAbilityBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinSecondsBetweenSentences;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SecondsBetweenSentencesVariance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTagContainer AvailableMumbleTopics;
    
    UPROPERTY(EditAnywhere)
    FGameplayTagContainer BlockMumblingForOwnedTags;
    
    UPROPERTY(EditAnywhere)
    FGameplayTagContainer AllowMumblingForOwnedTags;
    
public:
    UGameplayAbilityMumble();

    UFUNCTION(BlueprintCallable)
    bool TrySaySentence(const FVoicelineAssignment& Voiceline);
    
    UFUNCTION(BlueprintCallable)
    bool SayRandomSentence();
    
    UFUNCTION(BlueprintPure)
    bool IsSpeakingRightNow() const;
    
    UFUNCTION(BlueprintPure)
    UGenericVoicelineComponent* GetAvatarVoicelines() const;
    
    UFUNCTION(BlueprintPure)
    AGothicCharacter* GetAvatarCharacter() const;
    
    UFUNCTION(BlueprintPure)
    bool CanSayAnySentenceNow() const;
    
};

