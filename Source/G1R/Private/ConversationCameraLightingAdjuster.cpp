#include "ConversationCameraLightingAdjuster.h"

UConversationCameraLightingAdjuster::UConversationCameraLightingAdjuster(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bForceAlwaysOutside = false;
    this->bForceAlwaysInside = false;
    this->bEnableDaytimeIntensityLerp = true;
    this->bEnableDaytimeModifier = true;
    this->bEnableLocationModifier = true;
    this->bEnableWeatherModifier = true;
    this->bEnableSkinToneModifier = true;
    this->bEnableExternalLightModifier = true;
    this->bEnableShotModifier = true;
    this->bEnableParticipantNumberModifier = true;
    this->bEnableShadowModifier = true;
    this->bEnableFogModifier = true;
    this->bEnableSceneBrightnessModifier = true;
    this->bEnableSceneUniqueAreaModifer = true;
    this->RoughKeyLightReferenceIntensity = 1.00f;
    this->EyeIntensityBaseValue = 0.05f;
    this->CurrentSpeaker = NULL;
    this->CurrentListener = NULL;
}

void UConversationCameraLightingAdjuster::SetModifierClasses() {
}

void UConversationCameraLightingAdjuster::SelectCurrentModifiers(AGothicCharacter* Speaker, AGothicCharacter* Listener, const TArray<AGothicCharacter*>& AllParticipants) {
}

TArray<FLightValues> UConversationCameraLightingAdjuster::GetAdditionalLightValuesFromCurrentModifiers() const {
    return TArray<FLightValues>();
}

void UConversationCameraLightingAdjuster::ApplyModifierToLightSet(FLightSet& OutputLightValues, ULightingModifier* Modifier) const {
}

void UConversationCameraLightingAdjuster::ApplyModifierToLight(FLightValues& OutputLightValues, FLightValues& OriginalLightValues, FSingleLightModifier& Modifier) {
}

void UConversationCameraLightingAdjuster::ApplyCurrentModifiers(FLightSet& LightValueSet, const UWorld* World, AGothicCharacter* Speaker, AGothicCharacter* Listener) {
}


