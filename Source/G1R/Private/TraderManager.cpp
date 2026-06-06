#include "TraderManager.h"

UTraderManager::UTraderManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_LastTraderConfig = NULL;
    this->m_WorldDefinition = NULL;
}

void UTraderManager::RemoveCharacterOre(AGothicCharacter* Character, int32 oreToRemove) {
}

float UTraderManager::GetCharacterOre(AGothicCharacter* Character) {
    return 0.0f;
}


