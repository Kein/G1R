#include "GothicGlobalEventListenerComponent.h"

UGothicGlobalEventListenerComponent::UGothicGlobalEventListenerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UGothicGlobalEventListenerComponent::UnregisterListener(FGameplayMessageListenerHandle Handle) {
}

FGameplayMessageListenerHandle UGothicGlobalEventListenerComponent::RegisterListener(FGameplayTag Channel, UObject* UserObject, FName FunctionName) {
    return FGameplayMessageListenerHandle{};
}


