#include "ConversationTopic.h"
#include "Templates/SubclassOf.h"

UConversationTopic::UConversationTopic() {
    this->WithCharacter = TEXT("Hero");
    this->RequiredOtherCharactersMaxDistance = 2000.00f;
    this->bStartedWithInitialForcedLine = false;
    this->PriorityRank = 0;
    this->ForcedSenseType = EConversationForceSense::See;
    this->bIsSubTopic = false;
    this->bIsFollowupTopic = false;
    this->bIsFallbackTopic = false;
    this->bIsAmbientTopic = false;
    this->bSayHeyYou = false;
    this->DebugId = 0;
}

bool UConversationTopic::WasInitialForcedLinePlayed() {
    return false;
}

void UConversationTopic::SetPermanent(bool bIsPermanent) {
}

void UConversationTopic::ReturnToLastSelection(int32 NumLevels) {
}

void UConversationTopic::RequestStopConversationCamera() {
}

void UConversationTopic::RequestStartConversationCamera() {
}

void UConversationTopic::RequestCameraToLookAtInteractionSpot(FInteractionSpotHandle InteractionSpot) {
}

void UConversationTopic::RequestCameraToLookAtCharacter(const AGothicCharacterState* CharacterToLookAt) {
}

void UConversationTopic::RequestCameraSnapToInteractionSpot(FInteractionSpotHandle InteractionSpot) {
}

void UConversationTopic::RequestCameraSnapToCharacter(const AGothicCharacterState* CharacterToLookAt) {
}

void UConversationTopic::RequestCameraReverseShot() {
}

bool UConversationTopic::IsStoryDebuggerAttached() const {
    return false;
}

bool UConversationTopic::IsForced() const {
    return false;
}

bool UConversationTopic::IsEnd() const {
    return false;
}

bool UConversationTopic::InviteParticipatingCharactersIntoConversation() const {
    return false;
}

bool UConversationTopic::HasIsVisibleImplementation() const {
    return false;
}

bool UConversationTopic::HasActImplementation() const {
    return false;
}

AGothicCharacterState* UConversationTopic::GetSelf() const {
    return NULL;
}

UGameplayAbility_AI* UConversationTopic::GetOwner() const {
    return NULL;
}

AGothicCharacterState* UConversationTopic::GetOther() const {
    return NULL;
}

FName UConversationTopic::GetKnowledge() const {
    return NAME_None;
}

UConversationGroup* UConversationTopic::GetCurrentConversationGroup() const {
    return NULL;
}

AGothicCharacterState* UConversationTopic::GetCharacter(FName UniqueName) const {
    return NULL;
}

TSubclassOf<UConversationTopic> UConversationTopic::FindTopicClassByName(FName TopicName) {
    return NULL;
}

TSubclassOf<UConversationTopic> UConversationTopic::FindTopicClassByDebugId(int64 NewDebugId) {
    return NULL;
}

void UConversationTopic::EndConversation() {
}

void UConversationTopic::DC(int64 CallDebugId, EConversationDebugInfo Info) const {
}

void UConversationTopic::DB(int64 CallDebugId, bool bValue) const {
}

bool UConversationTopic::BP_IsVisible_Implementation() const {
    return false;
}

bool UConversationTopic::AreParticipatingCharactersNearby(float ExtraDistance) const {
    return false;
}

bool UConversationTopic::AreParticipatingCharactersInSameConversation() const {
    return false;
}

bool UConversationTopic::AreParticipatingCharactersAbleToEnterConversation() const {
    return false;
}



