#include "FItemActionHandlerMixins.h"

UFItemActionHandlerMixins::UFItemActionHandlerMixins() {
}

UActionKeywords* UFItemActionHandlerMixins::GetKeywordsObject(const FItemActionHandler& This) {
    return NULL;
}

FGameplayTagContainer UFItemActionHandlerMixins::GetKeywords(const FItemActionHandler& This) {
    return FGameplayTagContainer{};
}

FGameplayTag UFItemActionHandlerMixins::GetActionTag(const FItemActionHandler& This) {
    return FGameplayTag{};
}


