#include "GameplayAbilityConversationV2.h"

UGameplayAbilityConversationV2::UGameplayAbilityConversationV2() {
    this->ReplicationPolicy = EGameplayAbilityReplicationPolicy::ReplicateYes;
    this->AbilityTriggers.AddDefaulted(2);
    this->m_TickEnabled = true;
    this->m_bCanEverTick = true;
    this->ConversationGroup = NULL;
    this->InitialForcedTopic = NULL;
    this->LastSpeaker = NULL;
    this->LastCamFOV = 0.00f;
    this->bDoAutoTopicsOnly = false;
    this->bIgnoreAutoTopicConditions = false;
    this->TaskMoveIntoPlace = NULL;
    this->TurnToTask = NULL;
    this->PathfollowSettingTask = NULL;
    this->InitialForceSpeak = NULL;
    this->PreferredDistanceToTarget = 100.00f;
    this->MaxAllowedDistanceFromPreferred = 5.00f;
    this->MaxAllowedYawFromPreferred = 15.00f;
    this->IdealPositionSweepPointSize = 35.00f;
    this->InteractAngleThreshold = 180.00f;
    this->RequiredSecondsSinceLastAttackForForcedConversation = 10.00f;
    this->TimeAbilityActivated = 0.00f;
    this->bInterruptOthersSpeakWhenRequesting = false;
    this->bInterruptOthersConversationWhenRequesting = false;
    this->NotBehindInteractionAngleThreshold = 0.30f;
    this->TurnedTowardsOtherThreshold = 0.75f;
    this->LookingDirectlyInteractionAngleThreshold = 0.25f;
}

void UGameplayAbilityConversationV2::ServerRequestConversationWith_Implementation(AActor* Target) {
}

void UGameplayAbilityConversationV2::HandleParticipantSpeaking(UGameplayAbility_AI* Participant, const FText& Text, FName ForceSubtitleLanguage) {
}

void UGameplayAbilityConversationV2::HandleParticipantFinishedSpeaking(UGameplayAbility_AI* Participant, const FText& Text, FName ForceSubtitleLanguage) {
}

void UGameplayAbilityConversationV2::ClientHandleStartedActingTopic_Implementation(UConversationTopic* Topic) {
}

void UGameplayAbilityConversationV2::ClientHandleParticipantSpeaking_Implementation(UGameplayAbility_AI* Participant, const FText& Text, FName ForceSubtitleLanguage) {
}

void UGameplayAbilityConversationV2::ClientHandleParticipantFinishedSpeaking_Implementation(UGameplayAbility_AI* Participant, const FText& Text, FName ForceSubtitleLanguage) {
}

void UGameplayAbilityConversationV2::ClientHandleFinishedActingTopic_Implementation(UConversationTopic* Topic) {
}

bool UGameplayAbilityConversationV2::BP_IsAllowedToEnterConversationNow_Implementation(const AGothicCharacter* ThisCharacter, const AGothicCharacter* OtherCharacter, const AGothicCharacter* InitiatingCharacter, const UConversationTopic* OptionalForcedTopic) const {
    return false;
}


