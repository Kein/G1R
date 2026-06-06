#include "GothicGASLibrary.h"
#include "Templates/SubclassOf.h"

UGothicGASLibrary::UGothicGASLibrary() {
}

void UGothicGASLibrary::SendGameplayEvent(AActor* Target, FGameplayTag Tag, FGameplayEventData& Payload) {
}

bool UGothicGASLibrary::SameGuildOrGroup(AActor* checkA, AActor* checkB) {
    return false;
}

void UGothicGASLibrary::Log_Info(EGothicLogCategory Category, const FString& Text) {
}

bool UGothicGASLibrary::IsActiveGameplayEffectHandleValid(FActiveGameplayEffectHandle& Handle) {
    return false;
}

void UGothicGASLibrary::InitializeHitData(FGameplayEventData& Payload, FGameplayEffectContext_HitResponse& HitContext) {
}

bool UGothicGASLibrary::HasTag(const UAbilitySystemComponent* AbilitySystemComponent, FGameplayTag Tag, bool bExactMatch) {
    return false;
}

UGothicAbilitySystemComponent* UGothicGASLibrary::GetAbilitySystemComponentThreadSafe(AActor* Actor) {
    return NULL;
}

UGothicAbilitySystemComponent* UGothicGASLibrary::GetAbilitySystemComponent(AActor* Actor) {
    return NULL;
}

UGameplayAbility* UGothicGASLibrary::GetAbilityInstanceByClass(AActor* Actor, TSubclassOf<UGameplayAbility> AbilityClass) {
    return NULL;
}

TArray<TSubclassOf<UAttributeSet>> UGothicGASLibrary::FindAttributeSetsFromAttributeName(const FString& AttributeName) {
    return TArray<TSubclassOf<UAttributeSet>>();
}

void UGothicGASLibrary::ApplyDebuffGameplayEffects(UAbilitySystemComponent* AbilitySystemComponent, const TArray<TSubclassOf<UGameplayEffect>>& effectsToApply) {
}

FActiveGameplayEffectHandle UGothicGASLibrary::ApplyDamageTo(UGothicAbilitySystemComponent* Source, AActor* Instigator, AActor* DamageCauser, UGothicAbilitySystemComponent* Target, FGameplayEffectContext_HitResponse HitData, const FHitResult& SweepResult, const UPrimitiveComponent* SourceObject) {
    return FActiveGameplayEffectHandle{};
}

void UGothicGASLibrary::AddTargetRagdollData(FGameplayEventData& Payload, float Duration) {
}

void UGothicGASLibrary::AddTargetInputData(FGameplayEventData& Payload, FGameplayTag SourceDir) {
}

void UGothicGASLibrary::AddRainCoverHeadData(FGameplayEventData& Payload, int32 RainLevel) {
}


