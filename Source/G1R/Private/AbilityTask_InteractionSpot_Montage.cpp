#include "AbilityTask_InteractionSpot_Montage.h"

UAbilityTask_InteractionSpot_Montage::UAbilityTask_InteractionSpot_Montage() {
    this->m_LoadAssetsPriority = 15;
    this->SubtaskEntrySection = TEXT("Entry");
    this->SubtaskExitSection = TEXT("Exit");
    this->MontageLoopSectionPattern = TEXT("Loop*");
    this->MontageEntryFrontSection = TEXT("Entry");
    this->MontageEntryBackSection = TEXT("EntryBack");
    this->MontageEntryLeftSection = TEXT("EntryLeft");
    this->MontageEntryRightSection = TEXT("EntryRight");
    this->MontageExitFrontSection = TEXT("Exit");
    this->MontageExitBackSection = TEXT("ExitBack");
    this->MontageExitLeftSection = TEXT("ExitLeft");
    this->MontageExitRightSection = TEXT("ExitRight");
    this->AutoTransitionCheckSecondsMin = 5.00f;
    this->AutoTransitionCheckSecondsMax = 10.00f;
    this->bAllowInterruptLoopOnCancel = true;
    this->bAllowInterruptAtAnyTime = false;
    this->bBlockExitWhenNoExitSectionAvailable = false;
    this->bAllowInstantExitWhenBlocked = true;
    this->QuickExitMode = EInteractionFastExitMode::PlayFastExitIfAvailableOtherwiseBlendOut;
    this->stance = EStance::Standing;
    this->QuickExitAnimationRate = 1.30f;
    this->FastExitSectionName = TEXT("FastExit");
    this->bPutAwayItemInHandsAfterInteraction = true;
    this->TakeOutItemTask = NULL;
    this->ActAsInteractiveObjectWhileActive = NULL;
    this->bSetUsedActorAsViewTargetForPlayers = false;
    this->bShouldFocusInteractiveObject = true;
    this->MoveTask = NULL;
    this->MontageTask = NULL;
    this->bStartWhileMoving = true;
    this->NowPlaying = NULL;
    this->LastTimeTransitionHappened = 0.00f;
    this->BlockTransitionsUntilSeconds = 0.00f;
    this->bIsDoingExternalCancel = false;
    this->bTaskDisablesFootIK = true;
    this->bAllowTimeSkipAnimationNotifies = false;
    this->CurrentVisuallyEquippedItem = NULL;
}

bool UAbilityTask_InteractionSpot_Montage::TryStartMontage(UAnimMontage* Montage, FName StartSection, float Speed) {
    return false;
}

bool UAbilityTask_InteractionSpot_Montage::TryPerformTransitionWithTag(const FGameplayTag& ActionTag, bool bAllowFromAnyMontageOrSection, bool bAllowExitTransitions, bool bForceNow) {
    return false;
}

FInteractionAnimTransition UAbilityTask_InteractionSpot_Montage::TransitionToSection(TSoftObjectPtr<UAnimMontage> Montage, FName FromSection, FName ToSection, float Weight) const {
    return FInteractionAnimTransition{};
}

FInteractionAnimTransition UAbilityTask_InteractionSpot_Montage::TransitionToMontage(TSoftObjectPtr<UAnimMontage> FromMontage, FName FromSection, TSoftObjectPtr<UAnimMontage> ToMontage, FName ToSection, float Weight) const {
    return FInteractionAnimTransition{};
}

FInteractionAnimTransition UAbilityTask_InteractionSpot_Montage::TransitionStay(TSoftObjectPtr<UAnimMontage> Montage, FName InSection, float Weight) const {
    return FInteractionAnimTransition{};
}

FInteractionAnimTransition UAbilityTask_InteractionSpot_Montage::TransitionExit(TSoftObjectPtr<UAnimMontage> Montage, FName InSection, FName ToSection, float Weight) const {
    return FInteractionAnimTransition{};
}

FInteractionAnimTransition UAbilityTask_InteractionSpot_Montage::TransitionAfterMontageEnds(TSoftObjectPtr<UAnimMontage> FromMontage, TSoftObjectPtr<UAnimMontage> ToMontage, FName ToSection, float Weight) const {
    return FInteractionAnimTransition{};
}


bool UAbilityTask_InteractionSpot_Montage::PerformNextTransition() {
    return false;
}

void UAbilityTask_InteractionSpot_Montage::OnTargetLocationReached() {
}

void UAbilityTask_InteractionSpot_Montage::OnTakeOutItemTaskSucceded() {
}

void UAbilityTask_InteractionSpot_Montage::OnMontageInterrupted() {
}

void UAbilityTask_InteractionSpot_Montage::OnMontageCompleted() {
}

void UAbilityTask_InteractionSpot_Montage::OnMontageBlendOut() {
}

void UAbilityTask_InteractionSpot_Montage::OnLoadedMontage() {
}

bool UAbilityTask_InteractionSpot_Montage::HasAnyTransitionFrom(TSoftObjectPtr<UAnimMontage> FromMontage, FName FromSection) const {
    return false;
}

bool UAbilityTask_InteractionSpot_Montage::HasAnyTransitionFor(TSoftObjectPtr<UAnimMontage> FromMontage, FName FromSection, TSoftObjectPtr<UAnimMontage> ToMontage, FName ToSection) const {
    return false;
}

FName UAbilityTask_InteractionSpot_Montage::GetExitSection_Implementation() {
    return NAME_None;
}

FName UAbilityTask_InteractionSpot_Montage::GetEntrySection_Implementation() {
    return NAME_None;
}

void UAbilityTask_InteractionSpot_Montage::DoAutoTransitionCheck() {
}


