#pragma once
#include "CoreMinimal.h"
#include "EConversationDebugInfo.h"
#include "UObject/Object.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "EQuestKind.h"
#include "EQuestState.h"
#include "InGameTime.h"
#include "QuestStateChangedDelegateDelegate.h"
#include "ReplicatedQuestNameTimeMap.h"
#include "ReplicatedQuestStateTimeMap.h"
#include "Templates/SubclassOf.h"
#include "Quest.generated.h"

class AGothicCharacter;
class AGothicCharacterState;
class AGothicPlayerState;
class UDocument;
class UGameStory;
class UQuest;
class UQuestline;
class UTexture2D;

UCLASS(Abstract, Blueprintable)
class G1R_API UQuest : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUIViewStateChanged, bool, IsNewForUI);
    
    UPROPERTY(BlueprintAssignable)
    FUIViewStateChanged OnUIViewStateChanged;
    
protected:
    UPROPERTY(Replicated, SaveGame, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    EQuestState State;
    
    UPROPERTY(SaveGame, ReplicatedUsing=OnRep_StateReachedAtTime, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FReplicatedQuestStateTimeMap StateReachedAtTime;
    
    UPROPERTY(ReplicatedUsing=OnRep_TimeLastViewedByPlayer, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FReplicatedQuestNameTimeMap TimeLastViewedByPlayer;
    
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TSubclassOf<UGameStory> BelongsToStory;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TSubclassOf<UQuestline> Questline;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TSubclassOf<UDocument> QuestlogDocumentClass;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FGameplayTagContainer PropertyTags;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<FName> InvolvedCharacters;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool bIsOptional;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool bSucceedParent;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool bExternalAvailabilityTrigger;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool bExternalStartTrigger;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool bExternalFailTrigger;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool bExternalSuccessTrigger;
    
    UPROPERTY(BlueprintAssignable)
    FQuestStateChangedDelegate OnStarted;
    
    UPROPERTY(BlueprintAssignable)
    FQuestStateChangedDelegate OnFailed;
    
    UPROPERTY(BlueprintAssignable)
    FQuestStateChangedDelegate OnSucceeded;
    
    UPROPERTY(BlueprintAssignable)
    FQuestStateChangedDelegate OnAvailable;
    
    UPROPERTY(BlueprintAssignable)
    FQuestStateChangedDelegate OnNotAvailableAnymore;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FText NameText;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FText DescriptionText;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TSoftObjectPtr<UTexture2D> BannerImage;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TSoftObjectPtr<UTexture2D> ThumbnailImage;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 InChapter;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FName QuestGiverCharacterUniqueName;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    EQuestKind QuestKind;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<UQuest> ParentQuestClass;
    
    UQuest();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SucceedQuest(AGothicCharacter* SuccededBy);
    
    UFUNCTION(BlueprintCallable)
    void StartQuest(AGothicCharacter* StartedBy);
    
    UFUNCTION(BlueprintImplementableEvent)
    bool ShouldSucceed() const;
    
    UFUNCTION(BlueprintImplementableEvent)
    bool ShouldStart() const;
    
    UFUNCTION(BlueprintImplementableEvent)
    bool ShouldFail() const;
    
    UFUNCTION()
    bool ShouldBeShownInUI() const;
    
    UFUNCTION(BlueprintImplementableEvent)
    bool ShouldBeAvailable() const;
    
    UFUNCTION(BlueprintCallable)
    void RestartQuest(AGothicCharacter* StartedBy);
    
protected:
    UFUNCTION()
    void OnRep_TimeLastViewedByPlayer();
    
    UFUNCTION()
    void OnRep_StateReachedAtTime();
    
public:
    UFUNCTION(BlueprintCallable)
    void MakeQuestNotAvailableAnymore();
    
    UFUNCTION(BlueprintCallable)
    void MakeQuestAvailable();
    
    UFUNCTION(BlueprintPure)
    bool IsRunning() const;
    
    UFUNCTION(BlueprintPure)
    bool IsPartOfSubobjective() const;
    
    UFUNCTION(BlueprintPure)
    bool IsPartOfSideQuest() const;
    
    UFUNCTION(BlueprintPure)
    bool IsPartOfQuestOfKind(EQuestKind Kind) const;
    
    UFUNCTION(BlueprintPure)
    bool IsPartOfMainQuest() const;
    
    UFUNCTION(BlueprintPure)
    bool IsNewForUI(AGothicPlayerState* PlayerState, bool bRecursive) const;
    
    UFUNCTION(BlueprintPure)
    bool IsCompleted() const;
    
    UFUNCTION(BlueprintPure)
    bool IsAvailable() const;
    
    UFUNCTION(BlueprintPure)
    bool IsActive() const;
    
    UFUNCTION(BlueprintPure)
    bool HasSuccessCondition() const;
    
    UFUNCTION(BlueprintPure)
    bool HasSucceeded() const;
    
    UFUNCTION(BlueprintPure)
    bool HasStartCondition() const;
    
    UFUNCTION(BlueprintPure)
    bool HasQuestDisplayName() const;
    
    UFUNCTION(BlueprintPure)
    bool HasQuestDescription() const;
    
    UFUNCTION(BlueprintPure)
    bool HasFailed() const;
    
    UFUNCTION(BlueprintPure)
    bool HasFailCondition() const;
    
    UFUNCTION(BlueprintPure)
    bool HasBeenStarted() const;
    
    UFUNCTION(BlueprintPure)
    bool HasAvailabilityCondition() const;
    
    UFUNCTION(BlueprintPure)
    bool HasAnyCondition() const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void HandleQuestSucceeded();
    
    UFUNCTION(BlueprintImplementableEvent)
    void HandleQuestStarted();
    
    UFUNCTION(BlueprintImplementableEvent)
    void HandleQuestNotAvailableAnymore();
    
    UFUNCTION(BlueprintImplementableEvent)
    void HandleQuestFailed();
    
    UFUNCTION(BlueprintImplementableEvent)
    void HandleQuestAvailable();
    
    UFUNCTION(BlueprintPure)
    FInGameTime GetTimeLastViewedByPlayer(AGothicPlayerState* PlayerState) const;
    
    UFUNCTION(BlueprintPure)
    FInGameTime GetStateReachedTime(EQuestState StateToGetTimeFor) const;
    
    UFUNCTION(BlueprintPure)
    EQuestState GetState() const;
    
    UFUNCTION(BlueprintPure)
    TSoftObjectPtr<UTexture2D> GetQuestThumbnailSoftObjectPtr() const;
    
    UFUNCTION(BlueprintPure)
    TSubclassOf<UDocument> GetQuestlogDocumentClass() const;
    
    UFUNCTION(BlueprintPure)
    TSoftObjectPtr<UTexture2D> GetQuestlineIconImage() const;
    
    UFUNCTION(BlueprintPure)
    FGameplayTag GetQuestlineFilterTag() const;
    
    UFUNCTION(BlueprintPure)
    TSubclassOf<UQuestline> GetQuestline() const;
    
    UFUNCTION(BlueprintPure)
    FText GetQuestGiverDisplayName() const;
    
    UFUNCTION(BlueprintPure)
    AGothicCharacterState* GetQuestGiver() const;
    
    UFUNCTION(BlueprintPure)
    FText GetQuestDisplayName() const;
    
    UFUNCTION(BlueprintPure)
    FText GetQuestDescription() const;
    
    UFUNCTION(BlueprintPure)
    FText GetQuestChapterDisplayName() const;
    
    UFUNCTION(BlueprintPure)
    TSoftObjectPtr<UTexture2D> GetQuestBannerSoftObjectPtr() const;
    
    UFUNCTION(BlueprintPure)
    UQuest* GetParentQuest() const;
    
    UFUNCTION(BlueprintPure)
    FInGameTime GetLastUpdateTime(bool Recursive) const;
    
    UFUNCTION(BlueprintPure)
    TArray<UQuest*> GetChildQuests() const;
    
    UFUNCTION(BlueprintPure)
    AGothicCharacterState* GetCharacter(FName UniqueName) const;
    
    UFUNCTION(BlueprintCallable)
    void FailQuest(AGothicCharacter* FailedBy);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void DC(int64 DebugId, EConversationDebugInfo Info) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void DB(int64 DebugId, bool bValue) const;
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void BP_HandleWorldBeginPlay() const;
    
public:
    UFUNCTION(BlueprintPure)
    bool AreAllInvolvedCharactersAvailable() const;
    
};

