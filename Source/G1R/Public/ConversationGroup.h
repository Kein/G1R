#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "EGenericTaskResult.h"
#include "KnowledgeSet.h"
#include "Templates/SubclassOf.h"
#include "ConversationGroup.generated.h"

class AActor;
class AConversationCameraPresetChoice;
class AGothicCharacter;
class UAbilityTaskGeneric;
class UAbilityTask_HandleSubdialog;
class UConversationTopic;
class UConversationTopicSet;
class UGameplayAbility_AI;

UCLASS(BlueprintType)
class UConversationGroup : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    TSet<TSubclassOf<UConversationTopic>> ActedTopics;
    
    UPROPERTY()
    TArray<UAbilityTask_HandleSubdialog*> SubdialogStack;
    
    UPROPERTY()
    UGameplayAbility_AI* Initiator;
    
    UPROPERTY()
    TArray<UGameplayAbility_AI*> Participants;
    
    UPROPERTY()
    UConversationTopicSet* TopicSet;
    
    UPROPERTY()
    UConversationTopic* ScheduledTopicToStart;
    
    UPROPERTY()
    AConversationCameraPresetChoice* ConversationCamera;
    
    UPROPERTY()
    UAbilityTaskGeneric* ActiveTask;
    
    UPROPERTY()
    FKnowledgeSet KnowledgesAddedDuringLastAct;
    
    UPROPERTY()
    bool bEndRequested;
    
    UPROPERTY()
    AGothicCharacter* FixedPositionCharacter;
    
    UPROPERTY()
    TMap<AGothicCharacter*, FTransform> CharacterIdealTransformMap;
    
    UConversationGroup();

    UFUNCTION()
    bool TryStartLonelyEndTopic(UGameplayAbility_AI* Other);
    
    UFUNCTION()
    bool TryStartForcedConversation(UGameplayAbility_AI* Other);
    
    UFUNCTION()
    bool TryStartFollowupTopic(UGameplayAbility_AI* Other);
    
    UFUNCTION(BlueprintCallable)
    void RequestEndConversation();
    
    UFUNCTION()
    void RegisterToConversationCamera(const UGameplayAbility_AI* ConversationInitiator);
    
    UFUNCTION()
    void LetParticipantsRememberVoiceline(const FText& Voiceline);
    
    UFUNCTION()
    void LetParticipantsGainKnowledgeOfTopic(UConversationTopic* Topic);
    
    UFUNCTION()
    void LetParticipantsGainKnowledgeOf(FName Knowledge, UGameplayAbility_AI* Except);
    
    UFUNCTION(BlueprintPure)
    bool IsParticipating(const AActor* AvatarActor) const;
    
    UFUNCTION(BlueprintPure)
    bool IsInSubdialog() const;
    
    UFUNCTION(BlueprintPure)
    bool IsEmpty() const;
    
    UFUNCTION(BlueprintPure)
    bool IsActingTopic() const;
    
    UFUNCTION(BlueprintPure)
    bool HasTopicsToTalkAbout() const;
    
protected:
    UFUNCTION()
    void HandleTopicActingTaskFinished(UAbilityTaskGeneric* Task, EGenericTaskResult Result);
    
public:
    UFUNCTION(BlueprintPure)
    UAbilityTask_HandleSubdialog* GetSubdialogToReturnTo(int32 Level) const;
    
    UFUNCTION(BlueprintPure)
    FName GetParticipantName(const UGameplayAbility_AI* Participant) const;
    
    UFUNCTION(BlueprintPure)
    UGameplayAbility_AI* GetParticipantFromTopic(const UConversationTopic* Topic) const;
    
    UFUNCTION(BlueprintPure)
    FVector GetCenterOfConversation() const;
    
    UFUNCTION(BlueprintCallable)
    void ForceEndConversation();
    
    UFUNCTION(BlueprintCallable)
    UConversationTopic* FindPotentialInitialForcedTopic(UGameplayAbility_AI* Other);
    
};

