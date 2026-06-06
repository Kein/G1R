#include "ActionKeywords.h"
#include "Templates/SubclassOf.h"

UActionKeywords::UActionKeywords() {
    this->m_OnEquipActionEffect = NULL;
}

TSubclassOf<UGameplayEffect> UActionKeywords::GetOnEquipEffect() const {
    return NULL;
}

FGameplayTagContainer UActionKeywords::GetKeywords() {
    return FGameplayTagContainer{};
}

FGameplayTag UActionKeywords::GetActionTag() {
    return FGameplayTag{};
}


