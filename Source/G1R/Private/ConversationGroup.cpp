#include "ConversationGroup.h"
#include "ConversationTopicSet.h"

UConversationGroup::UConversationGroup() {
    this->Initiator = NULL;
    this->TopicSet = CreateDefaultSubobject<UConversationTopicSet>(TEXT("TopicSet"));
    this->ScheduledTopicToStart = NULL;
    this->ConversationCamera = NULL;
    this->ActiveTask = NULL;
    this->bEndRequested = false;
    this->FixedPositionCharacter = NULL;
}

bool UConversationGroup::TryStartLonelyEndTopic(UGameplayAbility_AI* Other) {
    return false;
}

bool UConversationGroup::TryStartForcedConversation(UGameplayAbility_AI* Other) {
    return false;
}

bool UConversationGroup::TryStartFollowupTopic(UGameplayAbility_AI* Other) {
    return false;
}

void UConversationGroup::RequestEndConversation() {
}

void UConversationGroup::RegisterToConversationCamera(const UGameplayAbility_AI* ConversationInitiator) {
}

void UConversationGroup::LetParticipantsRememberVoiceline(const FText& Voiceline) {
}

void UConversationGroup::LetParticipantsGainKnowledgeOfTopic(UConversationTopic* Topic) {
}

void UConversationGroup::LetParticipantsGainKnowledgeOf(FName Knowledge, UGameplayAbility_AI* Except) {
}

bool UConversationGroup::IsParticipating(const AActor* AvatarActor) const {
    return false;
}

bool UConversationGroup::IsInSubdialog() const {
    return false;
}

bool UConversationGroup::IsEmpty() const {
    return false;
}

bool UConversationGroup::IsActingTopic() const {
    return false;
}

bool UConversationGroup::HasTopicsToTalkAbout() const {
    return false;
}

void UConversationGroup::HandleTopicActingTaskFinished(UAbilityTaskGeneric* Task, EGenericTaskResult Result) {
}

UAbilityTask_HandleSubdialog* UConversationGroup::GetSubdialogToReturnTo(int32 Level) const {
    return NULL;
}

FName UConversationGroup::GetParticipantName(const UGameplayAbility_AI* Participant) const {
    return NAME_None;
}

UGameplayAbility_AI* UConversationGroup::GetParticipantFromTopic(const UConversationTopic* Topic) const {
    return NULL;
}

FVector UConversationGroup::GetCenterOfConversation() const {
    return FVector{};
}

UConversationTopic* UConversationGroup::FindPotentialInitialForcedTopic(UGameplayAbility_AI* Other) {
    return NULL;
}


