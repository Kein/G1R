#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "EInteractionSpotEntryDirection.h"
#include "GameplayAbility_AI.h"
#include "Templates/SubclassOf.h"
#include "GameplayAbilityConversationV2.generated.h"

class AActor;
class AGothicCharacter;
class UAbilityTask_ChangePathfollowSettings;
class UAbilityTask_MoveIntoPositionForInteraction;
class UAbilityTask_Speak;
class UAbilityTask_TurnTo;
class UConversationGroup;
class UConversationTopic;

UCLASS()
class G1R_API UGameplayAbilityConversationV2 : public UGameplayAbility_AI {
    GENERATED_BODY()
public:
    UPROPERTY()
    UConversationGroup* ConversationGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTagContainer AllowedInteractions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTagContainer AllowedInteractionsNoVisionNeeded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTagContainer AllowedInteractionsWhileWalking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTagContainer AllowedInteractionsNotFromBehind;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTagContainer InteractionsRequiringOtherToFaceParticipant;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<FGameplayTag, EInteractionSpotEntryDirection> InteractionPreferredExitDirection;
    
    UPROPERTY()
    UConversationTopic* InitialForcedTopic;
    
protected:
    UPROPERTY()
    UGameplayAbility_AI* LastSpeaker;
    
    UPROPERTY()
    float LastCamFOV;
    
    UPROPERTY()
    TArray<TSubclassOf<UConversationTopic>> AutoTopicSelection;
    
    UPROPERTY()
    bool bDoAutoTopicsOnly;
    
    UPROPERTY()
    bool bIgnoreAutoTopicConditions;
    
    UPROPERTY()
    UAbilityTask_MoveIntoPositionForInteraction* TaskMoveIntoPlace;
    
    UPROPERTY()
    UAbilityTask_TurnTo* TurnToTask;
    
    UPROPERTY()
    UAbilityTask_ChangePathfollowSettings* PathfollowSettingTask;
    
    UPROPERTY(EditAnywhere)
    FGameplayTagContainer AllowedAIStateTags;
    
    UPROPERTY(EditAnywhere)
    FGameplayTagContainer AllowInstantCancelInteractions;
    
    UPROPERTY()
    UAbilityTask_Speak* InitialForceSpeak;
    
    UPROPERTY(EditDefaultsOnly)
    float PreferredDistanceToTarget;
    
    UPROPERTY(EditAnywhere)
    TMap<FGameplayTag, float> PreferredConversationDistanceOverrideFromTag;
    
    UPROPERTY(EditDefaultsOnly)
    float MaxAllowedDistanceFromPreferred;
    
    UPROPERTY(EditDefaultsOnly)
    float MaxAllowedYawFromPreferred;
    
    UPROPERTY(EditDefaultsOnly)
    float IdealPositionSweepPointSize;
    
    UPROPERTY(EditDefaultsOnly)
    float InteractAngleThreshold;
    
    UPROPERTY(EditDefaultsOnly)
    float RequiredSecondsSinceLastAttackForForcedConversation;
    
    UPROPERTY()
    float TimeAbilityActivated;
    
    UPROPERTY(EditDefaultsOnly)
    FGameplayTag HeyYouVoicelineTag;
    
    UPROPERTY(EditDefaultsOnly)
    FGameplayTag NotNowVoicelineTag;
    
    UPROPERTY(EditDefaultsOnly)
    FGameplayTag WaitASecondVoicelineTag;
    
    UPROPERTY(EditDefaultsOnly)
    FGameplayTag HeyTurnAroundVoicelineTag;
    
    UPROPERTY(EditAnywhere)
    bool bInterruptOthersSpeakWhenRequesting;
    
    UPROPERTY(EditAnywhere)
    bool bInterruptOthersConversationWhenRequesting;
    
    UPROPERTY(EditAnywhere)
    float NotBehindInteractionAngleThreshold;
    
    UPROPERTY(EditAnywhere)
    float TurnedTowardsOtherThreshold;
    
    UPROPERTY(EditAnywhere)
    float LookingDirectlyInteractionAngleThreshold;
    
public:
    UGameplayAbilityConversationV2();

    UFUNCTION(Reliable, Server)
    void ServerRequestConversationWith(AActor* Target);
    
    UFUNCTION()
    void HandleParticipantSpeaking(UGameplayAbility_AI* Participant, const FText& Text, FName ForceSubtitleLanguage);
    
    UFUNCTION()
    void HandleParticipantFinishedSpeaking(UGameplayAbility_AI* Participant, const FText& Text, FName ForceSubtitleLanguage);
    
    UFUNCTION(Client, Reliable)
    void ClientHandleStartedActingTopic(UConversationTopic* Topic);
    
    UFUNCTION(Client, Reliable)
    void ClientHandleParticipantSpeaking(UGameplayAbility_AI* Participant, const FText& Text, FName ForceSubtitleLanguage);
    
    UFUNCTION(Client, Reliable)
    void ClientHandleParticipantFinishedSpeaking(UGameplayAbility_AI* Participant, const FText& Text, FName ForceSubtitleLanguage);
    
    UFUNCTION(Client, Reliable)
    void ClientHandleFinishedActingTopic(UConversationTopic* Topic);
    
    UFUNCTION(BlueprintNativeEvent)
    bool BP_IsAllowedToEnterConversationNow(const AGothicCharacter* ThisCharacter, const AGothicCharacter* OtherCharacter, const AGothicCharacter* InitiatingCharacter, const UConversationTopic* OptionalForcedTopic) const;
    
};

