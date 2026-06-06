#include "ConversationCameraV2.h"
#include "ConversationCameraLightingAdjuster.h"
#include "Templates/SubclassOf.h"

AConversationCameraV2::AConversationCameraV2(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ConversationInitiator = NULL;
    this->ConversationInitiatorPartner = NULL;
    this->MainParticipant = NULL;
    this->bUseRightSide = false;
    this->Volume = NULL;
    this->LightingAdjuster = CreateDefaultSubobject<UConversationCameraLightingAdjuster>(TEXT("LightAdjusterComponent"));
    this->EnvironmentIntensityCaptureActor = NULL;
    this->LastExternalLightIntensityScore = 0.00f;
    this->MonologTimeThreshold = 7.00f;
    this->CurrentMonologTimer = 0.00f;
    this->bForceAlwaysOutside = false;
    this->bForceAlwaysInside = false;
    this->PreferredCharacterDistance = 100.00f;
    this->ReferenceDistance = 100.00f;
    this->DefaultTestAmount = 8;
    this->ObstructionSweepTestSize = 10.00f;
    this->ObstructionSweepTestCharacterDistance = 30.00f;
    this->LastCamera = NULL;
    this->PresetReuseBuffer = 0;
    this->bUseTagFallback = false;
    this->ActorPositionThreshold = 10.00f;
    this->ActorLerpSpeed = 25.00f;
    this->NavObstacleCameraView = NULL;
    this->NavObstacleParticipants = NULL;
    this->InputAdjustmentRestrictionX = 30.00f;
    this->InputAdjustmentRestrictionY = 20.00f;
    this->NavObstacleCameraDistance = 350.00f;
    this->AlphaFadeDistance = 600.00f;
    this->AlphaFadePercentage = 50.00f;
    this->AlphaFadeRadius = 0.50f;
    this->AlphaFadeDistanceResetValue = 5.00f;
    this->AlphaFadeOffsetResetValue = 100.00f;
    this->EyeIntensityResetValue = 1.00f;
    this->AlphaFadeRadiusResetValues = 0.70f;
    this->FeetHeightAddedForObstructionCheck = 15.00f;
    this->bDebugShowSideChoiceTest = false;
}

void AConversationCameraV2::UpdateLightActors() const {
}

void AConversationCameraV2::UpdateCinematicParameters(const bool IsEnabled, const float SafeDistancePercentage, const float DistanceFromCameraToShotCenter, const float FadeRadius, const float EyeIntensity) {
}

void AConversationCameraV2::StopCurrentCamAnimationSequence() const {
}

void AConversationCameraV2::SpawnAdditionalLight(const FLightValues& LightValues) {
}

void AConversationCameraV2::SetValidRandomPresetByTag(AGothicCharacter* Speaker, AGothicCharacter* Listener, FGameplayTag PresetTag, const bool bIgnoreTransitionList) {
}

void AConversationCameraV2::SetPresetClasses() {
}

bool AConversationCameraV2::SetPresetByName(const FName PresetName, AGothicCharacter* Speaker, AGothicCharacter* Listener, const bool bUseRandomSelectionChecks, const bool bForcePreset) {
    return false;
}

void AConversationCameraV2::SetFoV(const float Value) const {
}

void AConversationCameraV2::SetDefaultCameraPreset(AGothicCharacter* Speaker, AGothicCharacter* Listener, FGameplayTag LastPresetTag, bool bOnlyUseFallbackWithSameTag) {
}

bool AConversationCameraV2::SetCurrentPreset(UConversationCameraPresetBase* NewPreset, AGothicCharacter* Speaker, AGothicCharacter* Listener) {
    return false;
}

void AConversationCameraV2::SetCinematicResetParameters() {
}

void AConversationCameraV2::SetCineCamParameters() const {
}

bool AConversationCameraV2::SetCameraAsViewTarget() {
    return false;
}

void AConversationCameraV2::RemoveEnvironmentLightCapture() {
}

void AConversationCameraV2::RemoveAppliedCameraModifiers() {
}

void AConversationCameraV2::RemoveAppliedCameraModifier(UGothicConversationCameraModifier* CamMod) {
}

float AConversationCameraV2::ReadEnvironmentLightCapture(const FVector& Direction) const {
    return 0.0f;
}

void AConversationCameraV2::PlayCurrentCamAnimationSequence() {
}

void AConversationCameraV2::MaterialDistanceFadeLoadingComplete() {
}

void AConversationCameraV2::LoadCamAnimationSequenceAsync() {
}

void AConversationCameraV2::LoadAlphaFadeMaterialAsync() {
}

void AConversationCameraV2::LoadAdditionalLightsMaterialAsync() {
}

bool AConversationCameraV2::IsPresetValid(UConversationCameraPresetBase* PresetParameters, AGothicCharacter* Speaker, AGothicCharacter* Listener, const bool bDoChecksForRandomSelection) const {
    return false;
}

void AConversationCameraV2::InvertPresetToCorrectSide(UConversationCameraPresetBase* Preset, AGothicCharacter* Speaker, AGothicCharacter* Listener) const {
}

void AConversationCameraV2::HideParticipants() {
}

void AConversationCameraV2::HideNearbyCharactersIfNeeded() {
}

void AConversationCameraV2::HandleLightMaterialLoadingComplete() {
}

void AConversationCameraV2::HandleIndoorDetectionResultsAvailable(const FIndoorDetectionResult& Result, TWeakObjectPtr<AGothicCharacter> Participant) {
}

void AConversationCameraV2::HandleAnimationSequenceComplete() {
}

UConversationCameraPresetBase* AConversationCameraV2::GetWeightedRandomPresetFromSelection(TArray<UConversationCameraPresetBase*>& Presets) const {
    return NULL;
}

UConversationCameraPresetBase* AConversationCameraV2::GetRandomPresetFromSelectionNoWeight(TArray<UConversationCameraPresetBase*>& Presets) const {
    return NULL;
}

UConversationCameraPresetBase* AConversationCameraV2::GetPresetByName(FName PresetName) const {
    return NULL;
}

UConversationCameraPresetBase* AConversationCameraV2::GetPresetByClass(const TSubclassOf<UConversationCameraPresetBase>& PresetSubClass) const {
    return NULL;
}

TArray<AGothicCharacter*> AConversationCameraV2::GetParticipants() const {
    return TArray<AGothicCharacter*>();
}

TSoftObjectPtr<UCameraAnimationSequence> AConversationCameraV2::GetCamAnimationSequence(const FName SequenceName) const {
    return NULL;
}

TSoftObjectPtr<UMaterialInterface> AConversationCameraV2::GetAdditionalLightMaterial(const FName MaterialName) const {
    return NULL;
}

void AConversationCameraV2::ForceCaptureEnvironmentLightIfNeeded() {
}

void AConversationCameraV2::DoWhenPresetChanges() {
}

void AConversationCameraV2::DoAfterNewCamPositionWasApplied() {
}

void AConversationCameraV2::ChooseCameraSide(const AGothicCharacter* Speaker, const AGothicCharacter* Listener) {
}

void AConversationCameraV2::CameraStop() {
}

void AConversationCameraV2::CameraStart(AGothicCharacter* InitiatingParticipant, AGothicCharacter* Listener) {
}

void AConversationCameraV2::AttachEnvironmentLightCapture() {
}

void AConversationCameraV2::ApplyCameraModifiers() {
}

void AConversationCameraV2::AddParticipant(AGothicCharacter* NewParticipant) {
}

bool AConversationCameraV2::ActorIsAdditionalParticipant(AGothicCharacter* Participant) const {
    return false;
}


