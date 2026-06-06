#include "Quest.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

UQuest::UQuest() {
    this->State = EQuestState::None;
    this->BelongsToStory = NULL;
    this->Questline = NULL;
    this->QuestlogDocumentClass = NULL;
    this->InvolvedCharacters.AddDefaulted(1);
    this->bIsOptional = false;
    this->bSucceedParent = false;
    this->bExternalAvailabilityTrigger = false;
    this->bExternalStartTrigger = false;
    this->bExternalFailTrigger = false;
    this->bExternalSuccessTrigger = false;
    this->InChapter = -1;
    this->QuestKind = EQuestKind::None;
    this->ParentQuestClass = NULL;
}

void UQuest::SucceedQuest(AGothicCharacter* SuccededBy) {
}

void UQuest::StartQuest(AGothicCharacter* StartedBy) {
}




bool UQuest::ShouldBeShownInUI() const {
    return false;
}


void UQuest::RestartQuest(AGothicCharacter* StartedBy) {
}

void UQuest::OnRep_TimeLastViewedByPlayer() {
}

void UQuest::OnRep_StateReachedAtTime() {
}

void UQuest::MakeQuestNotAvailableAnymore() {
}

void UQuest::MakeQuestAvailable() {
}

bool UQuest::IsRunning() const {
    return false;
}

bool UQuest::IsPartOfSubobjective() const {
    return false;
}

bool UQuest::IsPartOfSideQuest() const {
    return false;
}

bool UQuest::IsPartOfQuestOfKind(EQuestKind Kind) const {
    return false;
}

bool UQuest::IsPartOfMainQuest() const {
    return false;
}

bool UQuest::IsNewForUI(AGothicPlayerState* PlayerState, bool bRecursive) const {
    return false;
}

bool UQuest::IsCompleted() const {
    return false;
}

bool UQuest::IsAvailable() const {
    return false;
}

bool UQuest::IsActive() const {
    return false;
}

bool UQuest::HasSuccessCondition() const {
    return false;
}

bool UQuest::HasSucceeded() const {
    return false;
}

bool UQuest::HasStartCondition() const {
    return false;
}

bool UQuest::HasQuestDisplayName() const {
    return false;
}

bool UQuest::HasQuestDescription() const {
    return false;
}

bool UQuest::HasFailed() const {
    return false;
}

bool UQuest::HasFailCondition() const {
    return false;
}

bool UQuest::HasBeenStarted() const {
    return false;
}

bool UQuest::HasAvailabilityCondition() const {
    return false;
}

bool UQuest::HasAnyCondition() const {
    return false;
}






FInGameTime UQuest::GetTimeLastViewedByPlayer(AGothicPlayerState* PlayerState) const {
    return FInGameTime{};
}

FInGameTime UQuest::GetStateReachedTime(EQuestState StateToGetTimeFor) const {
    return FInGameTime{};
}

EQuestState UQuest::GetState() const {
    return EQuestState::None;
}

TSoftObjectPtr<UTexture2D> UQuest::GetQuestThumbnailSoftObjectPtr() const {
    return NULL;
}

TSubclassOf<UDocument> UQuest::GetQuestlogDocumentClass() const {
    return NULL;
}

TSoftObjectPtr<UTexture2D> UQuest::GetQuestlineIconImage() const {
    return NULL;
}

FGameplayTag UQuest::GetQuestlineFilterTag() const {
    return FGameplayTag{};
}

TSubclassOf<UQuestline> UQuest::GetQuestline() const {
    return NULL;
}

FText UQuest::GetQuestGiverDisplayName() const {
    return FText::GetEmpty();
}

AGothicCharacterState* UQuest::GetQuestGiver() const {
    return NULL;
}

FText UQuest::GetQuestDisplayName() const {
    return FText::GetEmpty();
}

FText UQuest::GetQuestDescription() const {
    return FText::GetEmpty();
}

FText UQuest::GetQuestChapterDisplayName() const {
    return FText::GetEmpty();
}

TSoftObjectPtr<UTexture2D> UQuest::GetQuestBannerSoftObjectPtr() const {
    return NULL;
}

UQuest* UQuest::GetParentQuest() const {
    return NULL;
}

FInGameTime UQuest::GetLastUpdateTime(bool Recursive) const {
    return FInGameTime{};
}

TArray<UQuest*> UQuest::GetChildQuests() const {
    return TArray<UQuest*>();
}

AGothicCharacterState* UQuest::GetCharacter(FName UniqueName) const {
    return NULL;
}

void UQuest::FailQuest(AGothicCharacter* FailedBy) {
}

void UQuest::DC(int64 DebugId, EConversationDebugInfo Info) const {
}

void UQuest::DB(int64 DebugId, bool bValue) const {
}


bool UQuest::AreAllInvolvedCharactersAvailable() const {
    return false;
}

void UQuest::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UQuest, State);
    DOREPLIFETIME(UQuest, StateReachedAtTime);
    DOREPLIFETIME(UQuest, TimeLastViewedByPlayer);
}


