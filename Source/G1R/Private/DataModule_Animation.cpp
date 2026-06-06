#include "DataModule_Animation.h"
#include "Net/UnrealNetwork.h"

UDataModule_Animation::UDataModule_Animation() {
    this->m_AnimConfig = NULL;
    this->m_CurrentAnimConfig = NULL;
    this->m_DefaultAnimConfig = NULL;
}

void UDataModule_Animation::OnRep_Config() {
}

UItemAnimConfig* UDataModule_Animation::GetItemAnimConfig(const FGameplayTag& ItemType) const {
    return NULL;
}

UInteractAnimConfig* UDataModule_Animation::GetInteractConfig(const FGameplayTag& interactionTag) const {
    return NULL;
}

UItemAnimConfig* UDataModule_Animation::GetCurrentAnimConfig() {
    return NULL;
}

void UDataModule_Animation::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UDataModule_Animation, m_AnimConfig);
}


