#include "GothicAbilitySystemComponent.h"

//FIXME UGothicAbilitySystemComponent::UGothicAbilitySystemComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
//}

void UGothicAbilitySystemComponent::SetPlayerPreset(UPlayerPreset* Preset) {
}

void UGothicAbilitySystemComponent::ServerSetInputDoubleTap_Implementation(FGameplayAbilitySpecHandle AbilityHandle) {
}
bool UGothicAbilitySystemComponent::ServerSetInputDoubleTap_Validate(FGameplayAbilitySpecHandle AbilityHandle) {
    return true;
}

void UGothicAbilitySystemComponent::Server_RemoveTag_Implementation(const FGameplayTag& TagToRemove, bool Predicted) {
}

void UGothicAbilitySystemComponent::Server_RemoveLooseTags_Implementation(const FGameplayTagContainer& GameplayTags, bool Predicted, int32 Count) {
}

void UGothicAbilitySystemComponent::Server_AddTag_Implementation(const FGameplayTag& NewTag, bool Predicted) {
}

void UGothicAbilitySystemComponent::Server_AddLooseTags_Implementation(const FGameplayTagContainer& GameplayTags, bool Predicted, int32 Count) {
}

void UGothicAbilitySystemComponent::SendScalarGameplayEffectServer_Implementation(const FGameplayAttribute& Attribute, const int32 Value) {
}

void UGothicAbilitySystemComponent::RemoveTag(const FGameplayTag& TagToRemove) {
}

void UGothicAbilitySystemComponent::RemoveLooseTags(const FGameplayTagContainer& GameplayTags, int32 Count) {
}

void UGothicAbilitySystemComponent::RemoveLooseTag(const FGameplayTag& TagToRemove, int32 Count) {
}

void UGothicAbilitySystemComponent::OnOwnerTagChange(FGameplayTag TagChange, int32 NewCount) {
}

void UGothicAbilitySystemComponent::Multicast_RemoveTag_Implementation(const FGameplayTag& TagToRemove, bool Predicted) {
}

void UGothicAbilitySystemComponent::Multicast_RemoveLooseTags_Implementation(const FGameplayTagContainer& GameplayTags, bool Predicted, int32 Count) {
}

void UGothicAbilitySystemComponent::Multicast_AddTag_Implementation(const FGameplayTag& NewTag, bool Predicted) {
}

void UGothicAbilitySystemComponent::Multicast_AddLooseTags_Implementation(const FGameplayTagContainer& GameplayTags, bool Predicted, int32 Count) {
}

bool UGothicAbilitySystemComponent::HasTagExact(const FGameplayTag& GameplayTag) const {
    return false;
}

FGameplayAbilityLocalAnimMontage UGothicAbilitySystemComponent::GetLocalAnimMontageInfo() const {
    return FGameplayAbilityLocalAnimMontage{};
}

void UGothicAbilitySystemComponent::BP_SendGameplayEvent(FGameplayTag EventTag) {
}

void UGothicAbilitySystemComponent::BP_AbilityLocalInputRelease(EAbilityInputID InputID) {
}

void UGothicAbilitySystemComponent::AddTag(const FGameplayTag& NewTag) {
}

void UGothicAbilitySystemComponent::AddLooseTags(const FGameplayTagContainer& GameplayTags, int32 Count) {
}

void UGothicAbilitySystemComponent::AddLooseTag(const FGameplayTag& NewTag, int32 Count) {
}


