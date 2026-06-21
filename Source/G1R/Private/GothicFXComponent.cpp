#include "GothicFXComponent.h"

UGothicFXComponent::UGothicFXComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UGothicFXComponent::StopFXInstancesWithTag(FGameplayTag EffectTag, bool IgnoreSpecs) {
}

void UGothicFXComponent::StopFXInstance(FGothicFXInstanceHandle FXHandle, bool IgnoreSpecs) {
}

void UGothicFXComponent::StopAllFXInstances(bool bIgnoreSpecs) {
}

void UGothicFXComponent::SetTimelinePosition(FGothicFXInstanceHandle FXHandle, float Time) {
}

void UGothicFXComponent::SetPaused(FGothicFXInstanceHandle FXHandle, bool Paused) {
}

void UGothicFXComponent::SetMaterialOverride(FGameplayTag Tag, UPhysicalMaterial* Material) {
}

FGothicFXInstanceHandle UGothicFXComponent::PlayEffectWithHitResult(const FGameplayTag& EffectTag, const FHitResult& HitResult, TSoftObjectPtr<UFMODEvent> SoundOverride) {
    return FGothicFXInstanceHandle{};
}

FGothicFXInstanceHandle UGothicFXComponent::PlayEffect(const FGameplayTag& EffectTag, TSoftObjectPtr<UFMODEvent> SoundOverride) {
    return FGothicFXInstanceHandle{};
}

void UGothicFXComponent::PlayCollisionEffect(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}

void UGothicFXComponent::MoveFXInstance(FGothicFXInstanceHandle FXHandle, const FVector& NewLocation) {
}

bool UGothicFXComponent::IsPlaying(FGothicFXInstanceHandle FXHandle) {
    return false;
}

bool UGothicFXComponent::IsHandleValid(FGothicFXInstanceHandle FXHandle) {
    return false;
}

void UGothicFXComponent::HandleOnActorHit(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit) {
}

int32 UGothicFXComponent::GetTimelinePosition(FGothicFXInstanceHandle FXHandle) {
    return 0;
}

void UGothicFXComponent::DiscardInactiveSoundAreas() {
}

void UGothicFXComponent::DiscardInactiveInstantEffectSounds() {
}


