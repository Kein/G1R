#include "ItemRecipeDefinition.h"

UItemRecipeDefinition::UItemRecipeDefinition() {
    this->m_IntermediateItem = NULL;
    this->m_RequiredTime = 5.00f;
    this->m_FinalItemSpawn = EFinalItem::NonSpawn;
}


