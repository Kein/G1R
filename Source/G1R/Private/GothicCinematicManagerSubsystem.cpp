#include "GothicCinematicManagerSubsystem.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

UGothicCinematicManagerSubsystem::UGothicCinematicManagerSubsystem() {
    this->m_GameMode = NULL;
    this->m_RequestCinematicState = ECinematicState::None;
    this->m_CurrentCinematicState = ECinematicState::None;
    this->m_CinematicClass = NULL;
    this->m_Cinematic = NULL;
    this->m_PlayersCount = 0;
    this->StatePlayerCount = 0;
    this->m_LevelSequenceActor = NULL;
    this->m_LevelSequencePlayer = NULL;
    this->m_StartupCinematicClass = NULL;
    this->m_SelectedCinematicClass = NULL;
    this->m_AllowTick = false;
}

void UGothicCinematicManagerSubsystem::UnregisterActor(AGothicPlayerState* PlayerState) {
}

void UGothicCinematicManagerSubsystem::StopCinematicServer() {
}

void UGothicCinematicManagerSubsystem::Server_OnSkipCutsceneRequest_Implementation(int32 PlayerId) {
}

void UGothicCinematicManagerSubsystem::Server_OnForceStartCinematic_Implementation(TSubclassOf<UGothicCinematic> CinematicClass) {
}

void UGothicCinematicManagerSubsystem::Server_OnFadeInFinished_Implementation() {
}

void UGothicCinematicManagerSubsystem::Server_OnEndSetupSequenceFinished_Implementation() {
}

void UGothicCinematicManagerSubsystem::Server_OnActorUnrequestCinematic_Implementation(const int32 PlayerId) {
}

void UGothicCinematicManagerSubsystem::Server_OnActorRequestCinematic_Implementation(int32 PlayerId, TSubclassOf<UGothicCinematic> CinematicClass) {
}

void UGothicCinematicManagerSubsystem::Server_OnActorBindingFinished_Implementation() {
}

void UGothicCinematicManagerSubsystem::RegisterActorReady(int32 PartySlotIndex, TSubclassOf<UGothicCinematic> LevelSequence) {
}

void UGothicCinematicManagerSubsystem::RegisterActor(AGothicCharacterState* PlayerState, TSubclassOf<UGothicCinematic> LevelSequence) {
}

void UGothicCinematicManagerSubsystem::PlayCinematicServer() {
}

void UGothicCinematicManagerSubsystem::OnPlayerLogOut(AGameModeBase* GameMode, AController* PlayerController) {
}

void UGothicCinematicManagerSubsystem::OnNPCSpawned(AGothicNPCState* CharacterState, AGothicCharacter* Character) {
}

void UGothicCinematicManagerSubsystem::OnNPCDestroyed(AActor* Actor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason) {
}

void UGothicCinematicManagerSubsystem::OnGameMapLoadedComplete(bool isNewGame) {
}

void UGothicCinematicManagerSubsystem::Multicast_SetupSequenceEnd_Implementation() {
}

void UGothicCinematicManagerSubsystem::Multicast_SetupSequence_Implementation() {
}

void UGothicCinematicManagerSubsystem::InitializeCinematicServer() {
}

void UGothicCinematicManagerSubsystem::ForceStartCinematic(TSubclassOf<UGothicCinematic> LevelSequence) {
}

void UGothicCinematicManagerSubsystem::AddCinematicAnimInstanceClass(TSoftClassPtr<UAnimInstance> AnimClass) {
}

void UGothicCinematicManagerSubsystem::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UGothicCinematicManagerSubsystem, m_RequestCinematicState);
    DOREPLIFETIME(UGothicCinematicManagerSubsystem, m_CurrentCinematicState);
    DOREPLIFETIME(UGothicCinematicManagerSubsystem, m_CinematicClass);
    DOREPLIFETIME(UGothicCinematicManagerSubsystem, m_Cinematic);
}


