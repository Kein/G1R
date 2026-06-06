#include "SingleLightingModifierMixins.h"

USingleLightingModifierMixins::USingleLightingModifierMixins() {
}

void USingleLightingModifierMixins::SetIntensityReplace(FSingleLightModifier& Light, const float Value) {
}

void USingleLightingModifierMixins::SetIntensityPercent(FSingleLightModifier& Light, const float Value) {
}

void USingleLightingModifierMixins::SetIntensityFlat(FSingleLightModifier& Light, const float Value) {
}

void USingleLightingModifierMixins::SetColorReplace(FSingleLightModifier& Light, const FVector& Value) {
}

void USingleLightingModifierMixins::SetColorFlat(FSingleLightModifier& Light, const FVector& Value) {
}

float USingleLightingModifierMixins::GetIntensityReplace(const FSingleLightModifier& Light) {
    return 0.0f;
}

float USingleLightingModifierMixins::GetIntensityPercent(const FSingleLightModifier& Light) {
    return 0.0f;
}

float USingleLightingModifierMixins::GetIntensityFlat(const FSingleLightModifier& Light) {
    return 0.0f;
}

FVector USingleLightingModifierMixins::GetColorReplace(const FSingleLightModifier& Light) {
    return FVector{};
}

FVector USingleLightingModifierMixins::GetColorFlat(const FSingleLightModifier& Light) {
    return FVector{};
}


