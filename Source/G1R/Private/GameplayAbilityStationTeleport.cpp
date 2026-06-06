#include "GameplayAbilityStationTeleport.h"
#include "Net/UnrealNetwork.h"

UGameplayAbilityStationTeleport::UGameplayAbilityStationTeleport() {
    this->bReplicateInputDirectly = true;
    this->ReplicationPolicy = EGameplayAbilityReplicationPolicy::ReplicateYes;
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::ServerInitiated;
    this->AbilityTriggers.AddDefaulted(1);
    this->m_bCanEverTick = true;
    this->m_UseCameraTarget = false;
    this->m_MoveToLocation = false;
    this->m_InstantUnEquip = true;
    this->m_MaxTraceDistanceToFindGround = 1000.00f;
    this->m_RandSeed = 0.00f;
    this->m_CharMontageTask_Teleport = NULL;
    this->m_TeleportExtraData = NULL;
    this->m_TeleportLocationActor = NULL;
    this->m_AppearingDuration = 3.00f;
    this->m_TeleportAppearingActor = NULL;
    this->m_AppearingTime = 0.00f;
    this->m_InteractiveObjectActor = NULL;
    this->m_TeleportData = NULL;
    this->m_CameraFade = NULL;
    this->m_TeleportAnimNotify = NULL;
    this->m_TeleportCameraNotify = NULL;
}

void UGameplayAbilityStationTeleport::PreFadeOutEnd() {
}

void UGameplayAbilityStationTeleport::PreFadeInEnd() {
}

void UGameplayAbilityStationTeleport::OnStartTeleport(FGameplayEventData Payload) {
}

void UGameplayAbilityStationTeleport::OnRep_TeleportAppearingActor() const {
}

void UGameplayAbilityStationTeleport::OnFinishStreamingServer() {
}

void UGameplayAbilityStationTeleport::OnFadeOutFinished() {
}

void UGameplayAbilityStationTeleport::OnFadeInFinished() {
}

void UGameplayAbilityStationTeleport::OnEndCamera(FGameplayEventData Payload) {
}

void UGameplayAbilityStationTeleport::OnAppearingFinished() {
}

void UGameplayAbilityStationTeleport::MulticastFinishTeleportAppearingActor_Implementation() {
}

FName UGameplayAbilityStationTeleport::GetMontageNameTeleport_Scriptable_Implementation(FName& originalName) {
    return NAME_None;
}

void UGameplayAbilityStationTeleport::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UGameplayAbilityStationTeleport, m_RandSeed);
    DOREPLIFETIME(UGameplayAbilityStationTeleport, m_CharactersAroundTeleportOrigin);
    DOREPLIFETIME(UGameplayAbilityStationTeleport, m_TeleportAppearingActor);
    DOREPLIFETIME(UGameplayAbilityStationTeleport, m_AppearingTime);
}


