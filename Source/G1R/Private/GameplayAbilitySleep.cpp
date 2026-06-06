#include "GameplayAbilitySleep.h"

UGameplayAbilitySleep::UGameplayAbilitySleep() {
    this->ReplicationPolicy = EGameplayAbilityReplicationPolicy::ReplicateYes;
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->AbilityTriggers.AddDefaulted(1);
    this->m_TaskWaitSitAnimation = NULL;
    this->m_TaskWaitGoToSleepAnimation = NULL;
    this->m_TaskCameraFade = NULL;
    this->m_TaskWaitBetweenFadeOutAndIn = NULL;
    this->m_TaskWaitForAllPlayersToConfirmSleep = NULL;
    this->m_RootInteractionTask = NULL;
    this->m_RecoverAttributesBySleepingEffect = NULL;
    this->m_DecreaseSleepTimeEffect = NULL;
    this->m_OwnBedStatusEffect = NULL;
    this->m_TimeBetweenFadeOutAndFadeIn = 2.00f;
    this->m_TimeBetweenStartAndSit = 2.00f;
    this->m_TimeBetweenSitAndFadeOut = 2.00f;
    this->m_SleepInterruptedBy = NULL;
    this->m_InteractionTaskClass = NULL;
    this->m_SleepUIController = NULL;
    this->m_SimpleMessageController = NULL;
}

void UGameplayAbilitySleep::Server_OnSleepUIConfirmButtonClicked_Implementation(float selectedHoursToSleep) {
}

void UGameplayAbilitySleep::Server_OnSleepUICloseButtonClicked_Implementation() {
}

void UGameplayAbilitySleep::Server_OnCameraFadeInFinished_Implementation() {
}

void UGameplayAbilitySleep::Server_ApplySleepingGameplayEffects_Implementation() {
}

void UGameplayAbilitySleep::OnWaitBetweenFadeOutAndInFinished() {
}

void UGameplayAbilitySleep::OnSleepUIConfirmButtonClicked() {
}

void UGameplayAbilitySleep::OnSleepUICloseButtonClicked() {
}

void UGameplayAbilitySleep::OnSitAnimationFinished() {
}

void UGameplayAbilitySleep::OnInteractionTaskEnded(UAbilityTaskGeneric* Task, EGenericTaskResult Result) {
}

void UGameplayAbilitySleep::OnGoToSleepAnimationFinished() {
}

void UGameplayAbilitySleep::OnEndAbility_Scriptable_Implementation(const FGameplayAbilityActorInfo& GameplayAbilityActorInfo, bool WasCancelled) {
}

void UGameplayAbilitySleep::OnCameraFadeOutFinished() {
}

void UGameplayAbilitySleep::OnCameraFadeInFinished() {
}

void UGameplayAbilitySleep::OnAllPlayersConfirmedSleep(float MaxSelectedHoursToSleep) {
}

void UGameplayAbilitySleep::OnActivateAbility_Scriptable_Implementation(const FGameplayAbilityActorInfo& GAActorInfo, const FGameplayEventData& TriggerEventData) {
}

void UGameplayAbilitySleep::Client_ShowSleepEndedMessage_Implementation() {
}

void UGameplayAbilitySleep::Client_OnAllPlayersConfirmedSleep_Implementation() {
}


