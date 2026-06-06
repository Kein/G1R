#include "LongTermMemoryComponent.h"

ULongTermMemoryComponent::ULongTermMemoryComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void ULongTermMemoryComponent::MemorizeEvent(const FMemorizedEvent& MemorizedEvent) {
}

AGothicCharacterState* ULongTermMemoryComponent::GetOwningCharacterState() const {
    return NULL;
}

FMemoryFilter ULongTermMemoryComponent::FilterEventsCausedByMe(FGameplayTag WithTag) const {
    return FMemoryFilter{};
}

FMemoryFilter ULongTermMemoryComponent::FilterEventsCausedBy(FName CharacterGlobalId, FGameplayTag WithTag) const {
    return FMemoryFilter{};
}

FMemoryFilter ULongTermMemoryComponent::FilterEventsAffectingMe(FGameplayTag WithTag) const {
    return FMemoryFilter{};
}

FMemoryFilter ULongTermMemoryComponent::FilterEventsAffecting(FName CharacterGlobalId, FGameplayTag WithTag) const {
    return FMemoryFilter{};
}

FMemoryFilter ULongTermMemoryComponent::Filter() const {
    return FMemoryFilter{};
}

int32 ULongTermMemoryComponent::BP_ForgetEventsMatchingFilter(const FMemoryFilter& NewFilter) {
    return 0;
}

void ULongTermMemoryComponent::AddOrReplaceLastMemoryMatchingAny(const FGameplayTagContainer& TagsToMatch, const FMemorizedEvent& NewMemorizedEvent, bool bExactMatch) {
}

void ULongTermMemoryComponent::AddOrReplaceLastMemoryMatchingAll(const FGameplayTagContainer& TagsToMatch, const FMemorizedEvent& NewMemorizedEvent, bool bExactMatch) {
}


