#include "LightingModifier.h"

ULightingModifier::ULightingModifier() {
    this->AssociatedActor = NULL;
    this->ModifierType = ELightingModifierType::Location;
    this->DiffuseColorBoost = -1.00f;
    this->MaxTraceDistance = -1.00f;
    this->EyeIntensityFinetuneFactor = 1.00f;
    this->TypePriority = 1.00f;
    this->GeneralPriority = 1.00f;
    this->SkyMaterialParameterCollectionParam_LightIntensity = TEXT("Environment - Light Intensity");
    this->SkyMaterialParameterCollectionParam_LightPosition = TEXT("Environment - Light Position");
    this->SkyMaterialParameterCollectionParam_LightDirection = TEXT("Environment - Light Direction");
}

bool ULightingModifier::ParticipantIsSpeaker(AActor* Participant) const {
    return false;
}

bool ULightingModifier::ParticipantIsListener(AActor* Participant) const {
    return false;
}

bool ULightingModifier::ParticipantIsInShadow(AGothicCharacter* Participant) const {
    return false;
}

bool ULightingModifier::IsParticipantInside(AGothicCharacter* Participant) const {
    return false;
}

bool ULightingModifier::IsApplicable_Implementation(AGothicCharacter* Participant, const TArray<AGothicCharacter*>& AllParticipants) const {
    return false;
}

UMaterialParameterCollection* ULightingModifier::GetSkyMaterialParameter() const {
    return NULL;
}

int32 ULightingModifier::GetParticipantSkinTone(AGothicCharacter* Participant) const {
    return 0;
}

int32 ULightingModifier::GetParticipantAmount() const {
    return 0;
}

AConversationCameraV2* ULightingModifier::GetOuterCamera() const {
    return NULL;
}

float ULightingModifier::GetLightingScore(AActor* Participant) const {
    return 0.0f;
}

FString ULightingModifier::GetFirstConversationTopicName() const {
    return TEXT("");
}

FLinearColor ULightingModifier::GetExternalLightingColor(AGothicCharacter* Participant) const {
    return FLinearColor{};
}

float ULightingModifier::GetEnvironmentLightingScore(AGothicCharacter* Participant) const {
    return 0.0f;
}

FClockTime ULightingModifier::GetDayTimeStart_Implementation() const {
    return FClockTime{};
}

FClockTime ULightingModifier::GetDayTimeEnd_Implementation() const {
    return FClockTime{};
}

FClockTime ULightingModifier::GetCurrentSkyTime() const {
    return FClockTime{};
}

FLinearColor ULightingModifier::GetColorDifferenceScore(const FLinearColor& ExternalLight, const FLinearColor& CompareLight) const {
    return FLinearColor{};
}

bool ULightingModifier::GetCameraShotMode(EConversationCameraShotMode& OutShotMode) const {
    return false;
}


