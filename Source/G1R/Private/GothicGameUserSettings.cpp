#include "GothicGameUserSettings.h"

UGothicGameUserSettings::UGothicGameUserSettings() {
    this->LastCPUBenchmarkSteps.AddDefaulted(2);
    this->LastGPUBenchmarkSteps.AddDefaulted(7);
    this->CharacterVisibilitySliderPosPercent = 0.00f;
    this->CleanShutDown = false;
    this->IsInstallationInitialized = true;
    this->m_DisplayIdString = TEXT("MONITOR\\DELA09A\\{4d36e96e-e325-11ce-bfc1-08002be10318}\\0009");
    this->m_DisplayID = 0;
    this->m_Gamma = 2.20f;
    this->m_ColorSaturationOffset = 0.00f;
    this->m_ColorContrastOffset = 0.00f;
    this->m_ColorBrightnessOffset = 0.00f;
    this->m_AimScalar_KBM = 1.00f;
    this->m_AimScalar_Gamepad = 1.00f;
    this->m_ShowPlayerSpeechBubble = false;
    this->MotionBlurIntensity = 0.00f;
    this->BloomIntensity = 0.00f;
    this->AmbientOcclusionIntensity = 1.00f;
    this->DepthOfFieldIntensity = 0.00f;
    this->SharpeningIntensity = 0.52f;
    this->ExtraInteriorExposure = 0.00f;
    this->AntiAliasingMethod = 4;
    this->UpscalingMethod = 4;
    this->UpscalingQualityDLSS = 1;
    this->UpscalingQualityFSR = 2;
    this->UpscalingQualityXeSS = 2;
    this->UpscalingQualityTSR = 2;
    this->FrameGenerationFSREnabled = false;
    this->FrameGenerationDLSS = 0;
    this->StreamlineReflexEnabled = true;
    this->StreamlineReflexBoostEnabled = false;
    this->m_MasterVolume = 1.00f;
    this->m_MusicVolume = 1.00f;
    this->m_SFXVolume = 1.00f;
    this->m_VoiceVolume = 1.00f;
    this->m_BaseFOV = 75.00f;
    this->m_CameraPreset = 0;
    this->m_ShowSubtitles = true;
    this->m_SubtitleStyle = 0;
    this->m_DialogStyle = 0;
    this->ShowSpeechBalloons = true;
    this->m_ShowScreenRainDroplets = false;
    this->m_EnableScreenshotOnSavegame = true;
    this->m_FakeSloppyCombos = true;
    this->ShowOutlines = false;
    this->ShowInteractionInputHints = true;
    this->ShowInteractionIcons = true;
    this->ShowInteractionNames = true;
    this->AutoCloseChests = true;
    this->m_DisplayLanguage = TEXT("English");
    this->m_VoiceOverLanguage = TEXT("English");
    this->HUDBarVisibility = 1;
    this->ShowHUDBarNumbers = false;
    this->ShowProjectileCount = true;
    this->InventoryNotificationDuration = 7.00f;
    this->CharacterNotificationDuration = 7.00f;
    this->QuestNotificationDuration = 7.00f;
    this->BloodIntensity = 1.00f;
    this->WindQuality = 0.00f;
    this->ShareTelemetryData = false;
    this->ButtonGraphics = EButtonGraphics::Auto;
    this->ForceFeedbackEnabled = true;
    this->CameraShakeEnabled = true;
    this->InvertXAxis = false;
    this->InvertYAxis = false;
    this->MovementSensitivity = 1.00f;
    this->CameraSensitivity = 1.00f;
    this->CameraSensitivity_KBM = 1.00f;
    this->CameraSensitivity_Gamepad = 1.00f;
    this->MouseRetargetingSensitivity_KBM = 1.00f;
}

void UGothicGameUserSettings::SetWindQuality(int32 _WindQuality) {
}

void UGothicGameUserSettings::SetVoiceVolume(float Volume) {
}

void UGothicGameUserSettings::SetVoiceOverLanguage(FName _VoiceOverLanguage) {
}

void UGothicGameUserSettings::SetUpscalingQualityXeSS(int32 _UpscalingQuality) {
}

void UGothicGameUserSettings::SetUpscalingQualityTSR(int32 _UpscalingQuality) {
}

void UGothicGameUserSettings::SetUpscalingQualityFSR(int32 _UpscalingQuality) {
}

void UGothicGameUserSettings::SetUpscalingQualityDLSS(int32 _UpscalingQuality) {
}

void UGothicGameUserSettings::SetUpscalingMethod(int32 _UpscalingMethod) {
}

void UGothicGameUserSettings::SetSubtitleStyle(int32 _SubtitleStyle) {
}

void UGothicGameUserSettings::SetStreamlineReflexEnabled(bool _Enabled) {
}

void UGothicGameUserSettings::SetStreamlineReflexBoostEnabled(bool _Enabled) {
}

void UGothicGameUserSettings::SetShowSubtitles(bool _ShowSubtitles) {
}

void UGothicGameUserSettings::SetShowSpeechBalloons(bool _Show) {
}

void UGothicGameUserSettings::SetShowScreenRainDroplets(bool _ShowInteractionName) {
}

void UGothicGameUserSettings::SetShowProjectileCount(bool _ShowProjectileCount) {
}

void UGothicGameUserSettings::SetShowPlayerSpeechBubble(bool Value) {
}

void UGothicGameUserSettings::SetShowOutlines(bool _ShowOutlines) {
}

void UGothicGameUserSettings::SetShowInteractionNames(bool _ShowInteractionNames) {
}

void UGothicGameUserSettings::SetShowInteractionInputHints(bool _ShowInteractionInputHints) {
}

void UGothicGameUserSettings::SetShowInteractionIcons(bool _ShowInteractionIcons) {
}

void UGothicGameUserSettings::SetShowHUDBarNumbers(bool _ShowHealthBarNumbers) {
}

void UGothicGameUserSettings::SetSharpeningIntensity(float _NewIntensity) {
}

void UGothicGameUserSettings::SetShareTelemetryData(bool _CollectTelemetryData) {
}

void UGothicGameUserSettings::SetSFXVolume(float Volume) {
}

void UGothicGameUserSettings::SetQuestNotificationDuration(float _Duration) {
}

void UGothicGameUserSettings::SetMusicVolume(float Volume) {
}

void UGothicGameUserSettings::SetMouseRetargetingSensibility_KBM(float sensibility) {
}

void UGothicGameUserSettings::SetMouseRetargetingMargins_KBM(float min, float max) {
}

void UGothicGameUserSettings::SetMotionBlurIntensity(float _NewIntensity) {
}

void UGothicGameUserSettings::SetMasterVolume(float Volume) {
}

void UGothicGameUserSettings::SetLandscapeQuality(int32 Value) {
}

void UGothicGameUserSettings::SetInvertYAxis(bool _Inverted) {
}

void UGothicGameUserSettings::SetInvertXAxis(bool _Inverted) {
}

void UGothicGameUserSettings::SetInventoryNotificationDuration(float _Duration) {
}

void UGothicGameUserSettings::SetHUDBarVisibility(int32 _Visibility) {
}

void UGothicGameUserSettings::SetGamma(float _Gamma) {
}

void UGothicGameUserSettings::SetFrameGenerationFSREnabled(bool _Enabled) {
}

void UGothicGameUserSettings::SetFrameGenerationDLSS(int32 _FrameGeneration) {
}

void UGothicGameUserSettings::SetForceFeedbackEnabled(bool _Enabled) {
}

void UGothicGameUserSettings::SetExtraInteriorExposure(float _NewExposure) {
}

void UGothicGameUserSettings::SetDisplayLanguage(FName _DisplayLanguage) {
}

void UGothicGameUserSettings::SetDisplayID(int32 _DisplayID) {
}

void UGothicGameUserSettings::SetDialogStyle(int32 _DialogStyle) {
}

void UGothicGameUserSettings::SetDepthOfFieldIntensity(float _NewIntensity) {
}

void UGothicGameUserSettings::SetColorSaturationOffset(float _NewOffset) {
}

void UGothicGameUserSettings::SetColorContrastOffset(float _NewOffset) {
}

void UGothicGameUserSettings::SetColorBrightnessOffset(float _NewOffset) {
}

void UGothicGameUserSettings::SetCharacterNotificationDuration(float _Duration) {
}

void UGothicGameUserSettings::SetCameraShakeEnabled(bool _Enabled) {
}

void UGothicGameUserSettings::SetCameraSensitivityMargins_KBM(float min, float max) {
}

void UGothicGameUserSettings::SetCameraSensitivityMargins_Gamepad(float min, float max) {
}

void UGothicGameUserSettings::SetCameraSensitivity_KBM(float _Sensitivity) {
}

void UGothicGameUserSettings::SetCameraSensitivity_Gamepad(float _Sensitivity) {
}

void UGothicGameUserSettings::SetCameraPreset(int32 _CameraPreset) {
}

void UGothicGameUserSettings::SetButtonGraphics(EButtonGraphics _ButtonGraphics) {
}

void UGothicGameUserSettings::SetBloomIntensity(float _NewIntensity) {
}

void UGothicGameUserSettings::SetBloodIntensity(float _Intensity) {
}

void UGothicGameUserSettings::SetBaseFOV(float _BaseFOV) {
}

void UGothicGameUserSettings::SetAutoCloseChests(bool _AutoCloseChests) {
}

void UGothicGameUserSettings::SetAntiAliasingMethod(int32 _AntiAliasingMethod) {
}

void UGothicGameUserSettings::SetAmbientOcclusionIntensity(float _NewIntensity) {
}

void UGothicGameUserSettings::SetAimScalar_KBM(float _AimScalar) {
}

void UGothicGameUserSettings::SetAimScalar_Gamepad(float _AimScalar) {
}

void UGothicGameUserSettings::ResetInitialSetupFlag() {
}

bool UGothicGameUserSettings::IsShowSubtitles() const {
    return false;
}

bool UGothicGameUserSettings::IsShowOutlines() const {
    return false;
}

int32 UGothicGameUserSettings::GetWindQuality() const {
    return 0;
}

float UGothicGameUserSettings::GetVoiceVolume() const {
    return 0.0f;
}

FName UGothicGameUserSettings::GetVoiceOverLanguage() const {
    return NAME_None;
}

int32 UGothicGameUserSettings::GetUpscalingQualityXeSS() const {
    return 0;
}

int32 UGothicGameUserSettings::GetUpscalingQualityTSR() const {
    return 0;
}

int32 UGothicGameUserSettings::GetUpscalingQualityFSR() const {
    return 0;
}

int32 UGothicGameUserSettings::GetUpscalingQualityDLSS() const {
    return 0;
}

int32 UGothicGameUserSettings::GetUpscalingMethod() const {
    return 0;
}

int32 UGothicGameUserSettings::GetSubtitleStyle() const {
    return 0;
}

bool UGothicGameUserSettings::GetStreamlineReflexEnabled() const {
    return false;
}

bool UGothicGameUserSettings::GetStreamlineReflexBoostEnabled() const {
    return false;
}

bool UGothicGameUserSettings::GetShowSpeechBalloons() const {
    return false;
}

bool UGothicGameUserSettings::GetShowScreenRainDroplets() const {
    return false;
}

bool UGothicGameUserSettings::GetShowProjectileCount() const {
    return false;
}

bool UGothicGameUserSettings::GetShowPlayerSpeechBubble() const {
    return false;
}

bool UGothicGameUserSettings::GetShowInteractionNames() const {
    return false;
}

bool UGothicGameUserSettings::GetShowInteractionInputHints() const {
    return false;
}

bool UGothicGameUserSettings::GetShowInteractionIcons() const {
    return false;
}

bool UGothicGameUserSettings::GetShowHUDBarNumbers() const {
    return false;
}

float UGothicGameUserSettings::GetSharpeningIntensity() const {
    return 0.0f;
}

bool UGothicGameUserSettings::GetShareTelemetryData() const {
    return false;
}

float UGothicGameUserSettings::GetSFXVolume() const {
    return 0.0f;
}

float UGothicGameUserSettings::GetQuestNotificationDuration() const {
    return 0.0f;
}

float UGothicGameUserSettings::GetMusicVolume() const {
    return 0.0f;
}

float UGothicGameUserSettings::GetMouseRetargetingSensibility_KBM() const {
    return 0.0f;
}

FVector2D UGothicGameUserSettings::GetMouseRetargetingMargins_KBM() const {
    return FVector2D{};
}

float UGothicGameUserSettings::GetMotionBlurIntensity() const {
    return 0.0f;
}

float UGothicGameUserSettings::GetMasterVolume() const {
    return 0.0f;
}

int32 UGothicGameUserSettings::GetLandscapeQuality() const {
    return 0;
}

bool UGothicGameUserSettings::GetInvertYAxis() const {
    return false;
}

bool UGothicGameUserSettings::GetInvertXAxis() const {
    return false;
}

float UGothicGameUserSettings::GetInventoryNotificationDuration() const {
    return 0.0f;
}

int32 UGothicGameUserSettings::GetHUDBarVisibility() const {
    return 0;
}

UGothicGameUserSettings* UGothicGameUserSettings::GetGothicGameUserSettings() {
    return NULL;
}

float UGothicGameUserSettings::GetGamma() const {
    return 0.0f;
}

bool UGothicGameUserSettings::GetFrameGenerationFSREnabled() const {
    return false;
}

int32 UGothicGameUserSettings::GetFrameGenerationDLSS() const {
    return 0;
}

bool UGothicGameUserSettings::GetForceFeedbackEnabled() const {
    return false;
}

float UGothicGameUserSettings::GetExtraInteriorExposure() const {
    return 0.0f;
}

FName UGothicGameUserSettings::GetDisplayLanguage() const {
    return NAME_None;
}

int32 UGothicGameUserSettings::GetDisplayID() const {
    return 0;
}

int32 UGothicGameUserSettings::GetDialogStyle() const {
    return 0;
}

float UGothicGameUserSettings::GetDepthOfFieldIntensity() const {
    return 0.0f;
}

float UGothicGameUserSettings::GetColorSaturationOffset() const {
    return 0.0f;
}

float UGothicGameUserSettings::GetColorContrastOffset() const {
    return 0.0f;
}

float UGothicGameUserSettings::GetColorBrightnessOffset() const {
    return 0.0f;
}

float UGothicGameUserSettings::GetCharacterNotificationDuration() const {
    return 0.0f;
}

bool UGothicGameUserSettings::GetCameraShakeEnabled() const {
    return false;
}

FVector2D UGothicGameUserSettings::GetCameraSensitivityMargins_KBM() const {
    return FVector2D{};
}

FVector2D UGothicGameUserSettings::GetCameraSensitivityMargins_Gamepad() const {
    return FVector2D{};
}

float UGothicGameUserSettings::GetCameraSensitivity_KBM() const {
    return 0.0f;
}

float UGothicGameUserSettings::GetCameraSensitivity_Gamepad() const {
    return 0.0f;
}

int32 UGothicGameUserSettings::GetCameraPreset() const {
    return 0;
}

EButtonGraphics UGothicGameUserSettings::GetButtonGraphics() const {
    return EButtonGraphics::None;
}

float UGothicGameUserSettings::GetBloomIntensity() const {
    return 0.0f;
}

float UGothicGameUserSettings::GetBloodIntensity() const {
    return 0.0f;
}

float UGothicGameUserSettings::GetBaseFOV() const {
    return 0.0f;
}

bool UGothicGameUserSettings::GetAutoCloseChests() const {
    return false;
}

int32 UGothicGameUserSettings::GetAntiAliasingMethod() const {
    return 0;
}

float UGothicGameUserSettings::GetAmbientOcclusionIntensity() const {
    return 0.0f;
}

float UGothicGameUserSettings::GetAimScalar_KBM() const {
    return 0.0f;
}

float UGothicGameUserSettings::GetAimScalar_Gamepad() const {
    return 0.0f;
}

void UGothicGameUserSettings::DoInitialSetup(int32 _BenchmarkWorkScale, float _BenchmarkCPUMultiplier, float _BenchmarkGPUMultiplier) {
}

void UGothicGameUserSettings::ApplyUpscalingSettings() {
}

void UGothicGameUserSettings::ApplyLatencySettings() {
}

void UGothicGameUserSettings::ApplyGamma() const {
}

void UGothicGameUserSettings::ApplyAntiAliasingMethod() const {
}


