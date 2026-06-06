#include "DataModule_BaseStats.h"
#include "Net/UnrealNetwork.h"

UDataModule_BaseStats::UDataModule_BaseStats() {
    this->m_CharacterDefinition = NULL;
}

void UDataModule_BaseStats::OnRepConfig() {
}

UGameplayEffect* UDataModule_BaseStats::GetPlayerAbilitySet() const {
    return NULL;
}

UCueVisualConfig* UDataModule_BaseStats::GetCueVisualConfig(const FGameplayTag& DebuffTag) const {
    return NULL;
}

UGameplayEffect* UDataModule_BaseStats::GetAbilitySet() const {
    return NULL;
}

void UDataModule_BaseStats::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UDataModule_BaseStats, m_CharacterDefinition);
}


