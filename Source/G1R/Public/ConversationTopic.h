#pragma once
#include "CoreMinimal.h"
#include "EConversationDebugInfo.h"
#include "UObject/Object.h"
#include "GameplayTagContainer.h"
#include "ConversationTopicForceSettings.h"
#include "EConversationForceSense.h"
#include "InteractionSpotHandle.h"
#include "Templates/SubclassOf.h"
#include "TopicRules.h"
#include "ConversationTopic.generated.h"

class AGothicCharacterState;
class UConversationGroup;
class UConversationTopic;
class UGameplayAbility_AI;

UCLASS(Abstract, Blueprintable)
class G1R_API UConversationTopic : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName ForCharacter;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName WithCharacter;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FName> RequiredNearbyCharacters;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FName> ExtraCharactersToInvite;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float RequiredOtherCharactersMaxDistance;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FText Caption;
    
    UPROPERTY(BlueprintReadOnly)
    bool bStartedWithInitialForcedLine;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 PriorityRank;
    
    UPROPERTY(EditDefaultsOnly)
    FTopicRules Rules;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FText InitialForcedLine;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EConversationForceSense ForcedSenseType;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bIsSubTopic;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bIsFollowupTopic;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bIsFallbackTopic;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bIsAmbientTopic;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bSayHeyYou;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSet<FName> JustOne;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGameplayTagContainer PropertyTags;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int64 DebugId;
    
    UPROPERTY(EditDefaultsOnly)
    FConversationTopicForceSettings ForceSettings;
    
    UConversationTopic();

protected:
    UFUNCTION(BlueprintCallable)
    bool WasInitialForcedLinePlayed();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetPermanent(bool bIsPermanent);
    
    UFUNCTION(BlueprintCallable)
    void ReturnToLastSelection(int32 NumLevels);
    
    UFUNCTION(BlueprintCallable)
    void RequestStopConversationCamera();
    
    UFUNCTION(BlueprintCallable)
    void RequestStartConversationCamera();
    
    UFUNCTION(BlueprintCallable)
    void RequestCameraToLookAtInteractionSpot(FInteractionSpotHandle InteractionSpot);
    
    UFUNCTION(BlueprintCallable)
    void RequestCameraToLookAtCharacter(const AGothicCharacterState* CharacterToLookAt);
    
    UFUNCTION(BlueprintCallable)
    void RequestCameraSnapToInteractionSpot(FInteractionSpotHandle InteractionSpot);
    
    UFUNCTION(BlueprintCallable)
    void RequestCameraSnapToCharacter(const AGothicCharacterState* CharacterToLookAt);
    
    UFUNCTION(BlueprintCallable)
    void RequestCameraReverseShot();
    
    UFUNCTION(BlueprintPure)
    bool IsStoryDebuggerAttached() const;
    
    UFUNCTION(BlueprintPure)
    bool IsForced() const;
    
    UFUNCTION(BlueprintPure)
    bool IsEnd() const;
    
    UFUNCTION(BlueprintPure)
    bool InviteParticipatingCharactersIntoConversation() const;
    
    UFUNCTION(BlueprintPure)
    bool HasIsVisibleImplementation() const;
    
    UFUNCTION(BlueprintPure)
    bool HasActImplementation() const;
    
    UFUNCTION(BlueprintPure)
    AGothicCharacterState* GetSelf() const;
    
    UFUNCTION(BlueprintPure)
    UGameplayAbility_AI* GetOwner() const;
    
    UFUNCTION(BlueprintPure)
    AGothicCharacterState* GetOther() const;
    
    UFUNCTION(BlueprintPure)
    FName GetKnowledge() const;
    
    UFUNCTION(BlueprintPure)
    UConversationGroup* GetCurrentConversationGroup() const;
    
    UFUNCTION(BlueprintPure)
    AGothicCharacterState* GetCharacter(FName UniqueName) const;
    
    UFUNCTION(BlueprintCallable)
    static TSubclassOf<UConversationTopic> FindTopicClassByName(FName TopicName);
    
    UFUNCTION(BlueprintCallable)
    static TSubclassOf<UConversationTopic> FindTopicClassByDebugId(int64 NewDebugId);
    
    UFUNCTION(BlueprintCallable)
    void EndConversation();
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void DC(int64 CallDebugId, EConversationDebugInfo Info) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void DB(int64 CallDebugId, bool bValue) const;
    
protected:
    UFUNCTION(BlueprintNativeEvent)
    bool BP_IsVisible() const;
    
public:
    UFUNCTION(BlueprintPure)
    bool AreParticipatingCharactersNearby(float ExtraDistance) const;
    
    UFUNCTION(BlueprintPure)
    bool AreParticipatingCharactersInSameConversation() const;
    
    UFUNCTION(BlueprintPure)
    bool AreParticipatingCharactersAbleToEnterConversation() const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void Act();
    
};

