#include "ConversationCameraPresetBase.h"
#include "Templates/SubclassOf.h"

UConversationCameraPresetBase::UConversationCameraPresetBase() {
    this->InitialChoiceWeight = 0;
    this->HideMode = EConversationCameraHideMode::None;
    this->LoopMode = EConversationCameraLoopMode::Repeat;
    this->FocusMode = EConversationCameraFocusMode::Default;
    this->PitchAdjustTarget = EConversationCameraFocusTarget::None;
    this->MultiConversationValidity = EConversationMultiParticipantMode::AllowAll;
    this->TransitionTime = 0.00f;
    this->bAlwaysValid = false;
    this->bIgnoreSideInvertsFromCamera = false;
    this->bInvertSide = false;
    this->bNeverUseForReverseShot = false;
    this->bViableForAdditionalParticipants = false;
    this->StartTime = 0.00f;
    this->bStaticActorTransforms = false;
    this->SqueezeFactor = 2.00f;
    this->MaxHeightDifference = -1.00f;
    this->MinHeightDifference = -1.00f;
    this->MaxDistance = -1.00f;
    this->MinDistance = -1.00f;
    this->bWasInverted = false;
    this->bOnlyUseAsDefaultWithSameTag = false;
    this->CameraTransformBone = TEXT("Head");
    this->FilmbackPresetName = TEXT("35mm Full Aperture");
    this->bDoObstructionCheckSpeaker = true;
    this->bDoObstructionCheckListener = true;
    this->bDoObstructionCheckMiddle = true;
    this->bDoObstructionCheckFootHeightSpeaker = false;
    this->bDoObstructionCheckFootHeightListener = false;
    this->CameraFocusBone = TEXT("Head");
    this->CameraFocusPointOffset = 0.00f;
}

void UConversationCameraPresetBase::UpdateCurrentActorTransforms(AActor* Speaker, AActor* Listener, const float DeltaTime) {
}

void UConversationCameraPresetBase::TryAddSmoothTransition(ACameraActor* Cam, AActor* Speaker, AActor* Listener) {
}

float UConversationCameraPresetBase::SinRuleLine(const float OppositeAngle, const float OtherAngle, const float OtherLine) const {
    return 0.0f;
}

float UConversationCameraPresetBase::SinRuleAngle(const float KnownAngle, const float OppositeLine, const float InputLine) const {
    return 0.0f;
}

void UConversationCameraPresetBase::SetStartTime(float NewStartTime) {
}

void UConversationCameraPresetBase::SetSpeakerListenerTransform(FTransform& SpeakerOutTransform, FTransform& ListenerOutTransform) const {
}

void UConversationCameraPresetBase::SetInvertSide(bool Value) {
}

void UConversationCameraPresetBase::SetFirstTransforms(const FTransform& SpeakerTransform, const FTransform& ListenerTransform) {
}

float UConversationCameraPresetBase::ReverseCosRuleAngle(const float Line1, const float Line2, const float OppositeLine) const {
    return 0.0f;
}

bool UConversationCameraPresetBase::IsValidInternal() const {
    return false;
}

bool UConversationCameraPresetBase::IsConversationAbilityOfParticipantOfClass(AActor* Participant, TSubclassOf<UGameplayAbilityConversationV2> AbilityClass) {
    return false;
}

bool UConversationCameraPresetBase::IsCharacterInHeightThreshold() const {
    return false;
}

bool UConversationCameraPresetBase::IsCharacterInDistanceThreshold(float PreferredDistance, const FVector& SpeakerLocation, const FVector& ListenerLocation, float DefaultPreferredCharacterDistance) const {
    return false;
}

bool UConversationCameraPresetBase::HasLooped() const {
    return false;
}

FVector UConversationCameraPresetBase::GetOffsetFromAngle(float Angle, float Length) const {
    return FVector{};
}

TArray<FString> UConversationCameraPresetBase::GetLightValueStrings() const {
    return TArray<FString>();
}

float UConversationCameraPresetBase::GetInterpolationTime() const {
    return 0.0f;
}

float UConversationCameraPresetBase::GetCurrentFoV() const {
    return 0.0f;
}

float UConversationCameraPresetBase::GetCurrentFocusDistance(AActor* Speaker, AActor* Listener, const FVector& CamLocation) const {
    return 0.0f;
}

float UConversationCameraPresetBase::GetCurrentFocalLength() const {
    return 0.0f;
}

float UConversationCameraPresetBase::GetCurrentAperture() const {
    return 0.0f;
}

float UConversationCameraPresetBase::GetCharacterHeightDifference() const {
    return 0.0f;
}

float UConversationCameraPresetBase::GetCharacterDistance() const {
    return 0.0f;
}

TArray<FString> UConversationCameraPresetBase::GetBaseValueStrings() const {
    return TArray<FString>();
}

FVector UConversationCameraPresetBase::GetActorBoneLocation(AActor* BoneActor, const FString& BoneName) const {
    return FVector{};
}

float UConversationCameraPresetBase::CosRuleLine(const float Line1, const float Line2, const float Angle) const {
    return 0.0f;
}

void UConversationCameraPresetBase::CopyValueStringToClipboard_Implementation() const {
}

void UConversationCameraPresetBase::CopyLightStringToClipboard() const {
}

FLightSet UConversationCameraPresetBase::CalculateLightSetValues_Implementation(AGothicCharacter* Speaker, AGothicCharacter* Listener, AGothicCharacter* Initiator, AGothicCharacter* InitialListener, const TArray<AGothicCharacter*>& AdditionalParticipants, UConversationCameraLightingAdjuster* Adjuster) {
    return FLightSet{};
}

FTransform UConversationCameraPresetBase::CalculateCurrentTransform_Implementation(AActor* Speaker, AActor* Listener) const {
    return FTransform{};
}

void UConversationCameraPresetBase::AdjustAngleOffsetFromHeightDifference(FTransform& CurrentCameraTransform, const float HeightDifference, AActor* Speaker, AActor* Listener) const {
}

void UConversationCameraPresetBase::AddVectorCurveValueStrings(const FRuntimeVectorCurve& Curve, const FString& CurveName, TArray<FString>& OutputArr) const {
}

void UConversationCameraPresetBase::AddRotatorCurveValueStrings(const FRuntimeVectorCurve& Curve, const FString& CurveName, TArray<FString>& OutputArr) const {
}

void UConversationCameraPresetBase::AddFloatCurveValueStrings(const FRuntimeFloatCurve& Curve, const FString& CurveName, TArray<FString>& OutputArr) const {
}

void UConversationCameraPresetBase::AddCurveKeyFromTransform_Implementation(const FTransform InputTransform, const float KeyTime, AActor* Speaker, AActor* Listener) {
}


