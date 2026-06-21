#include "GameplayAbilitySpellTeleport.h"
#include "Net/UnrealNetwork.h"

UGameplayAbilitySpellTeleport::UGameplayAbilitySpellTeleport() {
    this->m_TickEnabled = false;
    this->m_MaxTraceDistanceToFindGround = 1000.00f;
    this->m_TeleportLocationActor = NULL;
    this->m_TeleportAppearingActor = NULL;
    this->m_AppearingTime = 0.00f;
    this->m_CachedVanishingTime = 0.00f;
}

void UGameplayAbilitySpellTeleport::StartTeleportServer(AActor* teleportLocationActor) {
}


void UGameplayAbilitySpellTeleport::OnRep_TeleportAppearingActor() const {
}

void UGameplayAbilitySpellTeleport::OnFinishStreamingServer() {
}

void UGameplayAbilitySpellTeleport::MulticastFinishTeleportAppearingActor_Implementation() {
}



void UGameplayAbilitySpellTeleport::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UGameplayAbilitySpellTeleport, m_TeleportAppearingActor);
    DOREPLIFETIME(UGameplayAbilitySpellTeleport, m_CharactersAroundTeleportOrigin);
    DOREPLIFETIME(UGameplayAbilitySpellTeleport, m_AppearingTime);
    DOREPLIFETIME(UGameplayAbilitySpellTeleport, m_CachedVanishingTime);
}


