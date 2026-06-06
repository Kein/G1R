#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "EPerceptionNoiseLoudness.h"
#include "ERelationship.h"
#include "GameplayAbilityBase.h"
#include "OwnedLooseGameplayTags.h"
#include "PerceptionShortTermMemory.h"
#include "RememberedPerception.h"
#include "VoicelineAssignment.h"
#include "GameplayAbilitySmalltalk.generated.h"

class AGothicCharacter;
class UGenericVoicelineComponent;

UCLASS()
class G1R_API UGameplayAbilitySmalltalk : public UGameplayAbilityBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag GreetingVoicelineTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinSecondsBetweenSentences;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SecondsBetweenSentencesVariance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<ERelationship> RequiredRelationship;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTagContainer AvailableSmalltalkTopics;
    
    UPROPERTY(EditAnywhere)
    FGameplayTagContainer BlockSmalltalkForOwnedTags;
    
    UPROPERTY(EditAnywhere)
    FGameplayTagContainer AllowSmalltalkForOwnedTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EPerceptionNoiseLoudness TalkLoudness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxSmalltalkPartnerDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CurrentTopicMultiplicator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CurrentSubtopicMultiplicator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SubTopicImportance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MonologLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxTopicAge;
    
    UPROPERTY()
    FOwnedLooseGameplayTags OwnedLooseGameplayTags;
    
public:
    UGameplayAbilitySmalltalk();

    UFUNCTION(BlueprintCallable)
    bool TrySaySentence(const FVoicelineAssignment& Voiceline);
    
    UFUNCTION(BlueprintCallable)
    bool SayRandomSentence();
    
    UFUNCTION(BlueprintPure)
    bool IsSpeakingRightNow() const;
    
    UFUNCTION(BlueprintPure)
    bool IsHoldingMonolog() const;
    
    UFUNCTION(BlueprintPure)
    bool IsAnyoneSpeakingRightNow() const;
    
    UFUNCTION(BlueprintPure)
    bool HasAnyoneBeenSpeakingRecently(float Seconds) const;
    
    UFUNCTION()
    void HandleSomeoneWantsToSmalltalk(const FRememberedPerception& Perception, const FPerceptionShortTermMemory& Memory);
    
    UFUNCTION()
    void HandleSomeoneQuitSmalltalk(const FRememberedPerception& Perception, const FPerceptionShortTermMemory& Memory);
    
    UFUNCTION(BlueprintPure)
    AGothicCharacter* GetRandomOtherSmalltalkParticipant() const;
    
    UFUNCTION(BlueprintPure)
    TSet<AGothicCharacter*> GetOtherSmalltalkParticipants() const;
    
    UFUNCTION(BlueprintPure)
    UGenericVoicelineComponent* GetAvatarVoicelines() const;
    
    UFUNCTION(BlueprintPure)
    AGothicCharacter* GetAvatarCharacter() const;
    
    UFUNCTION(BlueprintPure)
    TMap<FGameplayTag, float> GatherOngoingTopicsAndWeights() const;
    
    UFUNCTION(BlueprintPure)
    FGameplayTag ChooseNextSmalltalkTopic() const;
    
    UFUNCTION(BlueprintPure)
    bool CanSayAnySentenceNow() const;
    
};

