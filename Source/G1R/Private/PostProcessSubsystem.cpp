#include "PostProcessSubsystem.h"

UPostProcessSubsystem::UPostProcessSubsystem() {
    this->FadeRadius = 6000.00f;
    this->TransitionLength = 3000.00f;
    this->NoiseScale = 1500.00f;
    this->NoiseStrength = 1000.00f;
    this->WorldFadeEnvironmentSeconds = 1.00f;
    this->WorldFadeTransitionSeconds = 1.50f;
    this->IdleBeforePlayerFadesSeconds = 0.05f;
    this->PlayerFadeSeconds = 0.30f;
    this->FadeInTimeScale = 2.00f;
    this->FadeOutTimeScale = 2.00f;
    this->SharpenActive = false;
    this->WorldFadeActive = false;
    this->OutlineActive = false;
}

void UPostProcessSubsystem::UpdateSharpenPostProcess() {
}

void UPostProcessSubsystem::SetWorldFadeActive(bool IsActive) {
}

void UPostProcessSubsystem::SetSharpenSystemIntensity(float Intensity) {
}

void UPostProcessSubsystem::SetSharpenActive(bool IsActive) {
}

void UPostProcessSubsystem::SetOutlineActive(bool IsActive) {
}

bool UPostProcessSubsystem::IsWorldFadeActive() {
    return false;
}

bool UPostProcessSubsystem::IsSharpenActive() {
    return false;
}

bool UPostProcessSubsystem::IsOutlineActive() {
    return false;
}

UPostProcessSubsystem* UPostProcessSubsystem::GetPostProcessSubsystem(UObject* WorldContextObject) {
    return NULL;
}

void UPostProcessSubsystem::FadeOutWorldProgressively(const TArray<UPrimitiveComponent*>& LastFadeOutPrimitives, const FCallback& OnFadeOutFinished) {
}

void UPostProcessSubsystem::FadeInWorldProgressively(const TArray<UPrimitiveComponent*>& FirstFadeInPrimitives, const FCallback& OnFadeInFinished) {
}


