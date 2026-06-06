#include "OffsetTestingCamera.h"

AOffsetTestingCamera::AOffsetTestingCamera(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TestingPreset = NULL;
    this->Speaker = NULL;
    this->Listener = NULL;
    this->InsertTime = 0.00f;
    this->KeyLight = NULL;
    this->RimLight = NULL;
    this->KeyReverseLight = NULL;
    this->RimReverseLight = NULL;
    this->AdditionalActor = NULL;
    this->AdditionalLightIsRelativeTo = EConversationCameraRelativeParticipant::Speaker;
    this->AttenuationRadius = 0.00f;
    this->BarnDoorAngle = 0.00f;
    this->BarnDoorLength = 0.00f;
    this->VolumetricScatteringIntensity = 0.00f;
    this->IndirectLightIntensity = 0.00f;
    this->LightUnits = ELightUnits::Candelas;
    this->LightSpawnDistance = 100.00f;
    this->LightSpawnHeight = 128.00f;
    this->LightSpawnIntensity = 2.00f;
    this->LightSpawnUnits = ELightUnits::Candelas;
}

void AOffsetTestingCamera::WriteOffsetToPreset() {
}

void AOffsetTestingCamera::WriteLightValueFromActor(FLightValues& LightValues, ARectLight* LightActor, AActor* ReferenceActor, AActor* OtherActor, const EConversationCameraRelativeParticipant RelativeTo) const {
}

void AOffsetTestingCamera::UpdateLightPosition() {
}

void AOffsetTestingCamera::SpawnLights() {
}

void AOffsetTestingCamera::ResetKeyValues() {
}

void AOffsetTestingCamera::PresetClassToClipboard() {
}

void AOffsetTestingCamera::LightValuesToClipboard() {
}

void AOffsetTestingCamera::LightsFaceActor() {
}

FTransform AOffsetTestingCamera::GetTransformRelativeToActor(AActor* ReferencePoint, AActor* OtherPoint, AActor* RelativeActor) const {
    return FTransform{};
}

void AOffsetTestingCamera::FaceTargetActor() {
}

void AOffsetTestingCamera::FaceFocusPoint() {
}

void AOffsetTestingCamera::ApplyDefaultLightParams(ARectLight* Light, const FString& Name) {
}

void AOffsetTestingCamera::AdditionalLightValuesToClipboard() {
}


