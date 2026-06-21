#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/GameUserSettings.h"
#include "EButtonGraphics.h"
#include "EGothicConsoleQualityPerformanceMode.h"
#include "SettingsAppliedDelegateDelegate.h"
#include "GothicGameUserSettings.generated.h"

class UGothicGameUserSettings;

UCLASS(Config=Engine)
class G1R_API UGothicGameUserSettings : public UGameUserSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Config)
    float CharacterVisibilitySliderPosPercent;
    
    UPROPERTY(BlueprintReadOnly, Config)
    bool CleanShutDown;
    
    UPROPERTY(BlueprintAssignable)
    FSettingsAppliedDelegate OnHUDSettingsApplied;
    
protected:
    UPROPERTY(Config)
    bool IsInstallationInitialized;
    
    UPROPERTY(Config, EditAnywhere)
    FString m_DisplayIdString;
    
    UPROPERTY(Config, EditAnywhere)
    int32 m_DisplayID;
    
    UPROPERTY(Config, EditAnywhere)
    float m_Gamma;
    
    UPROPERTY(Config, EditAnywhere)
    float m_ColorSaturationOffset;
    
    UPROPERTY(Config, EditAnywhere)
    float m_ColorContrastOffset;
    
    UPROPERTY(Config, EditAnywhere)
    float m_ColorBrightnessOffset;
    
    UPROPERTY(Config, EditAnywhere)
    float m_AimScalar_KBM;
    
    UPROPERTY(Config, EditAnywhere)
    float m_AimScalar_Gamepad;
    
    UPROPERTY(Config, EditAnywhere)
    bool m_ShowPlayerSpeechBubble;
    
    UPROPERTY(Config, EditAnywhere)
    float MotionBlurIntensity;
    
    UPROPERTY(Config, EditAnywhere)
    float BloomIntensity;
    
    UPROPERTY(Config, EditAnywhere)
    float AmbientOcclusionIntensity;
    
    UPROPERTY(Config, EditAnywhere)
    float DepthOfFieldIntensity;
    
    UPROPERTY(Config, EditAnywhere)
    float SharpeningIntensity;
    
    UPROPERTY(Config, EditAnywhere)
    float ExtraInteriorExposure;
    
    UPROPERTY(Config, EditAnywhere)
    int32 AntiAliasingMethod;
    
    UPROPERTY(Config, EditAnywhere)
    int32 UpscalingMethod;
    
    UPROPERTY(Config, EditAnywhere)
    int32 UpscalingQualityDLSS;
    
    UPROPERTY(Config, EditAnywhere)
    int32 UpscalingQualityFSR;
    
    UPROPERTY(Config, EditAnywhere)
    int32 UpscalingQualityXeSS;
    
    UPROPERTY(Config, EditAnywhere)
    int32 UpscalingQualityTSR;
    
    UPROPERTY(Config, EditAnywhere)
    bool FrameGenerationFSREnabled;
    
    UPROPERTY(Config, EditAnywhere)
    int32 FrameGenerationDLSS;
    
    UPROPERTY(Config, EditAnywhere)
    bool StreamlineReflexEnabled;
    
    UPROPERTY(Config, EditAnywhere)
    bool StreamlineReflexBoostEnabled;
    
    UPROPERTY(Config, EditAnywhere)
    float m_MasterVolume;
    
    UPROPERTY(Config, EditAnywhere)
    float m_MusicVolume;
    
    UPROPERTY(Config, EditAnywhere)
    float m_SFXVolume;
    
    UPROPERTY(Config, EditAnywhere)
    float m_VoiceVolume;
    
    UPROPERTY(Config, EditAnywhere)
    float m_BaseFOV;
    
    UPROPERTY(Config, EditAnywhere)
    int32 m_CameraPreset;
    
    UPROPERTY(Config, EditAnywhere)
    bool m_ShowSubtitles;
    
    UPROPERTY(Config, EditAnywhere)
    int32 m_SubtitleStyle;
    
    UPROPERTY(Config, EditAnywhere)
    int32 m_DialogStyle;
    
    UPROPERTY(Config, EditAnywhere)
    bool ShowSpeechBalloons;
    
    UPROPERTY(Config, EditAnywhere)
    bool m_ShowScreenRainDroplets;
    
    UPROPERTY(Config, EditAnywhere)
    bool m_EnableScreenshotOnSavegame;
    
    UPROPERTY(Config, EditAnywhere)
    bool m_FakeSloppyCombos;
    
    UPROPERTY(Config, EditAnywhere)
    bool ShowOutlines;
    
    UPROPERTY(Config, EditAnywhere)
    bool ShowInteractionInputHints;
    
    UPROPERTY(Config, EditAnywhere)
    bool ShowInteractionIcons;
    
    UPROPERTY(Config, EditAnywhere)
    bool ShowInteractionNames;
    
    UPROPERTY(Config, EditAnywhere)
    bool AutoCloseChests;
    
    UPROPERTY(Config, EditAnywhere)
    FName m_DisplayLanguage;
    
    UPROPERTY(Config, EditAnywhere)
    FName m_VoiceOverLanguage;
    
    UPROPERTY(Config, EditAnywhere)
    int32 HUDBarVisibility;
    
    UPROPERTY(Config, EditAnywhere)
    bool ShowHUDBarNumbers;
    
    UPROPERTY(Config, EditAnywhere)
    bool ShowProjectileCount;
    
    UPROPERTY(Config, EditAnywhere)
    float InventoryNotificationDuration;
    
    UPROPERTY(Config, EditAnywhere)
    float CharacterNotificationDuration;
    
    UPROPERTY(Config, EditAnywhere)
    float QuestNotificationDuration;
    
    UPROPERTY(Config, EditAnywhere)
    float BloodIntensity;
    
    UPROPERTY(Config, EditAnywhere)
    float WindQuality;
    
    UPROPERTY(Config, EditAnywhere)
    bool ShareTelemetryData;
    
    UPROPERTY(Config, EditAnywhere)
    EButtonGraphics ButtonGraphics;
    
    UPROPERTY(Config, EditAnywhere)
    bool ForceFeedbackEnabled;
    
    UPROPERTY(Config, EditAnywhere)
    bool CameraShakeEnabled;
    
    UPROPERTY(Config, EditAnywhere)
    bool InvertXAxis;
    
    UPROPERTY(Config, EditAnywhere)
    bool InvertYAxis;
    
    UPROPERTY(Config, EditAnywhere)
    float MovementSensitivity;
    
    UPROPERTY(Config, EditAnywhere)
    float CameraSensitivity;
    
    UPROPERTY(Config, EditAnywhere)
    float CameraSensitivity_KBM;
    
    UPROPERTY(Config, EditAnywhere)
    float CameraSensitivity_Gamepad;
    
    UPROPERTY(Config, EditAnywhere)
    FVector2D CameraSensitivityMargins_KBM;
    
    UPROPERTY(Config, EditAnywhere)
    FVector2D CameraSensitivityMargins_Gamepad;
    
    UPROPERTY(Config, EditAnywhere)
    float MouseRetargetingSensitivity_KBM;
    
    UPROPERTY(Config, EditAnywhere)
    FVector2D MouseRetargetingSensitivityMargins_KBM;
    
    UPROPERTY(Config, EditAnywhere)
    EGothicConsoleQualityPerformanceMode m_eConsoleQualityPerformanceMode;
    
public:
    UGothicGameUserSettings();

    UFUNCTION(BlueprintCallable)
    void SetWindQuality(int32 _WindQuality);
    
    UFUNCTION(BlueprintCallable)
    void SetVoiceVolume(float Volume);
    
    UFUNCTION(BlueprintCallable)
    void SetVoiceOverLanguage(FName _VoiceOverLanguage);
    
    UFUNCTION(BlueprintCallable)
    void SetUpscalingQualityXeSS(int32 _UpscalingQuality);
    
    UFUNCTION(BlueprintCallable)
    void SetUpscalingQualityTSR(int32 _UpscalingQuality);
    
    UFUNCTION(BlueprintCallable)
    void SetUpscalingQualityFSR(int32 _UpscalingQuality);
    
    UFUNCTION(BlueprintCallable)
    void SetUpscalingQualityDLSS(int32 _UpscalingQuality);
    
    UFUNCTION(BlueprintCallable)
    void SetUpscalingMethod(int32 _UpscalingMethod);
    
    UFUNCTION(BlueprintCallable)
    void SetSubtitleStyle(int32 _SubtitleStyle);
    
    UFUNCTION(BlueprintCallable)
    void SetStreamlineReflexEnabled(bool _Enabled);
    
    UFUNCTION(BlueprintCallable)
    void SetStreamlineReflexBoostEnabled(bool _Enabled);
    
    UFUNCTION(BlueprintCallable)
    void SetShowSubtitles(bool _ShowSubtitles);
    
    UFUNCTION(BlueprintCallable)
    void SetShowSpeechBalloons(bool _Show);
    
    UFUNCTION(BlueprintCallable)
    void SetShowScreenRainDroplets(bool _ShowInteractionName);
    
    UFUNCTION(BlueprintCallable)
    void SetShowProjectileCount(bool _ShowProjectileCount);
    
    UFUNCTION(BlueprintCallable)
    void SetShowPlayerSpeechBubble(bool Value);
    
    UFUNCTION(BlueprintCallable)
    void SetShowOutlines(bool _ShowOutlines);
    
    UFUNCTION(BlueprintCallable)
    void SetShowInteractionNames(bool _ShowInteractionNames);
    
    UFUNCTION(BlueprintCallable)
    void SetShowInteractionInputHints(bool _ShowInteractionInputHints);
    
    UFUNCTION(BlueprintCallable)
    void SetShowInteractionIcons(bool _ShowInteractionIcons);
    
    UFUNCTION(BlueprintCallable)
    void SetShowHUDBarNumbers(bool _ShowHealthBarNumbers);
    
    UFUNCTION(BlueprintCallable)
    void SetSharpeningIntensity(float _NewIntensity);
    
    UFUNCTION(BlueprintCallable)
    void SetShareTelemetryData(bool _CollectTelemetryData);
    
    UFUNCTION(BlueprintCallable)
    void SetSFXVolume(float Volume);
    
    UFUNCTION(BlueprintCallable)
    void SetQuestNotificationDuration(float _Duration);
    
    UFUNCTION(BlueprintCallable)
    void SetMusicVolume(float Volume);
    
    UFUNCTION(BlueprintCallable)
    void SetMouseRetargetingSensibility_KBM(float sensibility);
    
    UFUNCTION(BlueprintCallable)
    void SetMouseRetargetingMargins_KBM(float min, float max);
    
    UFUNCTION(BlueprintCallable)
    void SetMotionBlurIntensity(float _NewIntensity);
    
    UFUNCTION(BlueprintCallable)
    void SetMasterVolume(float Volume);
    
    UFUNCTION(BlueprintCallable)
    void SetLandscapeQuality(int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void SetInvertYAxis(bool _Inverted);
    
    UFUNCTION(BlueprintCallable)
    void SetInvertXAxis(bool _Inverted);
    
    UFUNCTION(BlueprintCallable)
    void SetInventoryNotificationDuration(float _Duration);
    
    UFUNCTION(BlueprintCallable)
    void SetHUDBarVisibility(int32 _Visibility);
    
    UFUNCTION(BlueprintCallable)
    void SetGamma(float _Gamma);
    
    UFUNCTION(BlueprintCallable)
    void SetFrameGenerationFSREnabled(bool _Enabled);
    
    UFUNCTION(BlueprintCallable)
    void SetFrameGenerationDLSS(int32 _FrameGeneration);
    
    UFUNCTION(BlueprintCallable)
    void SetForceFeedbackEnabled(bool _Enabled);
    
    UFUNCTION(BlueprintCallable)
    void SetExtraInteriorExposure(float _NewExposure);
    
    UFUNCTION(BlueprintCallable)
    void SetDisplayLanguage(FName _DisplayLanguage);
    
    UFUNCTION(BlueprintCallable)
    void SetDisplayID(int32 _DisplayID);
    
    UFUNCTION(BlueprintCallable)
    void SetDialogStyle(int32 _DialogStyle);
    
    UFUNCTION(BlueprintCallable)
    void SetDepthOfFieldIntensity(float _NewIntensity);
    
    UFUNCTION(BlueprintCallable)
    void SetColorSaturationOffset(float _NewOffset);
    
    UFUNCTION(BlueprintCallable)
    void SetColorContrastOffset(float _NewOffset);
    
    UFUNCTION(BlueprintCallable)
    void SetColorBrightnessOffset(float _NewOffset);
    
    UFUNCTION(BlueprintCallable)
    void SetCharacterNotificationDuration(float _Duration);
    
    UFUNCTION(BlueprintCallable)
    void SetCameraShakeEnabled(bool _Enabled);
    
    UFUNCTION(BlueprintCallable)
    void SetCameraSensitivityMargins_KBM(float min, float max);
    
    UFUNCTION(BlueprintCallable)
    void SetCameraSensitivityMargins_Gamepad(float min, float max);
    
    UFUNCTION(BlueprintCallable)
    void SetCameraSensitivity_KBM(float _Sensitivity);
    
    UFUNCTION(BlueprintCallable)
    void SetCameraSensitivity_Gamepad(float _Sensitivity);
    
    UFUNCTION(BlueprintCallable)
    void SetCameraPreset(int32 _CameraPreset);
    
    UFUNCTION(BlueprintCallable)
    void SetButtonGraphics(EButtonGraphics _ButtonGraphics);
    
    UFUNCTION(BlueprintCallable)
    void SetBloomIntensity(float _NewIntensity);
    
    UFUNCTION(BlueprintCallable)
    void SetBloodIntensity(float _Intensity);
    
    UFUNCTION(BlueprintCallable)
    void SetBaseFOV(float _BaseFOV);
    
    UFUNCTION(BlueprintCallable)
    void SetAutoCloseChests(bool _AutoCloseChests);
    
    UFUNCTION(BlueprintCallable)
    void SetAntiAliasingMethod(int32 _AntiAliasingMethod);
    
    UFUNCTION(BlueprintCallable)
    void SetAmbientOcclusionIntensity(float _NewIntensity);
    
    UFUNCTION(BlueprintCallable)
    void SetAimScalar_KBM(float _AimScalar);
    
    UFUNCTION(BlueprintCallable)
    void SetAimScalar_Gamepad(float _AimScalar);
    
    UFUNCTION(BlueprintCallable)
    void ResetInitialSetupFlag();
    
    UFUNCTION(BlueprintPure)
    bool IsShowSubtitles() const;
    
    UFUNCTION(BlueprintPure)
    bool IsShowOutlines() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetWindQuality() const;
    
    UFUNCTION(BlueprintPure)
    float GetVoiceVolume() const;
    
    UFUNCTION(BlueprintPure)
    FName GetVoiceOverLanguage() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetUpscalingQualityXeSS() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetUpscalingQualityTSR() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetUpscalingQualityFSR() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetUpscalingQualityDLSS() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetUpscalingMethod() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetSubtitleStyle() const;
    
    UFUNCTION(BlueprintPure)
    bool GetStreamlineReflexEnabled() const;
    
    UFUNCTION(BlueprintPure)
    bool GetStreamlineReflexBoostEnabled() const;
    
    UFUNCTION(BlueprintPure)
    bool GetShowSpeechBalloons() const;
    
    UFUNCTION(BlueprintPure)
    bool GetShowScreenRainDroplets() const;
    
    UFUNCTION(BlueprintPure)
    bool GetShowProjectileCount() const;
    
    UFUNCTION(BlueprintPure)
    bool GetShowPlayerSpeechBubble() const;
    
    UFUNCTION(BlueprintPure)
    bool GetShowInteractionNames() const;
    
    UFUNCTION(BlueprintPure)
    bool GetShowInteractionInputHints() const;
    
    UFUNCTION(BlueprintPure)
    bool GetShowInteractionIcons() const;
    
    UFUNCTION(BlueprintPure)
    bool GetShowHUDBarNumbers() const;
    
    UFUNCTION(BlueprintPure)
    float GetSharpeningIntensity() const;
    
    UFUNCTION(BlueprintPure)
    bool GetShareTelemetryData() const;
    
    UFUNCTION(BlueprintPure)
    float GetSFXVolume() const;
    
    UFUNCTION(BlueprintPure)
    float GetQuestNotificationDuration() const;
    
    UFUNCTION(BlueprintPure)
    float GetMusicVolume() const;
    
    UFUNCTION(BlueprintPure)
    float GetMouseRetargetingSensibility_KBM() const;
    
    UFUNCTION(BlueprintPure)
    FVector2D GetMouseRetargetingMargins_KBM() const;
    
    UFUNCTION(BlueprintPure)
    float GetMotionBlurIntensity() const;
    
    UFUNCTION(BlueprintPure)
    float GetMasterVolume() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetLandscapeQuality() const;
    
    UFUNCTION(BlueprintPure)
    bool GetInvertYAxis() const;
    
    UFUNCTION(BlueprintPure)
    bool GetInvertXAxis() const;
    
    UFUNCTION(BlueprintPure)
    float GetInventoryNotificationDuration() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetHUDBarVisibility() const;
    
    UFUNCTION(BlueprintCallable)
    static UGothicGameUserSettings* GetGothicGameUserSettings();
    
    UFUNCTION(BlueprintPure)
    float GetGamma() const;
    
    UFUNCTION(BlueprintPure)
    bool GetFrameGenerationFSREnabled() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetFrameGenerationDLSS() const;
    
    UFUNCTION(BlueprintPure)
    bool GetForceFeedbackEnabled() const;
    
    UFUNCTION(BlueprintPure)
    float GetExtraInteriorExposure() const;
    
    UFUNCTION(BlueprintPure)
    FName GetDisplayLanguage() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetDisplayID() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetDialogStyle() const;
    
    UFUNCTION(BlueprintPure)
    float GetDepthOfFieldIntensity() const;
    
    UFUNCTION(BlueprintPure)
    float GetColorSaturationOffset() const;
    
    UFUNCTION(BlueprintPure)
    float GetColorContrastOffset() const;
    
    UFUNCTION(BlueprintPure)
    float GetColorBrightnessOffset() const;
    
    UFUNCTION(BlueprintPure)
    float GetCharacterNotificationDuration() const;
    
    UFUNCTION(BlueprintPure)
    bool GetCameraShakeEnabled() const;
    
    UFUNCTION(BlueprintPure)
    FVector2D GetCameraSensitivityMargins_KBM() const;
    
    UFUNCTION(BlueprintPure)
    FVector2D GetCameraSensitivityMargins_Gamepad() const;
    
    UFUNCTION(BlueprintPure)
    float GetCameraSensitivity_KBM() const;
    
    UFUNCTION(BlueprintPure)
    float GetCameraSensitivity_Gamepad() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetCameraPreset() const;
    
    UFUNCTION(BlueprintPure)
    EButtonGraphics GetButtonGraphics() const;
    
    UFUNCTION(BlueprintPure)
    float GetBloomIntensity() const;
    
    UFUNCTION(BlueprintPure)
    float GetBloodIntensity() const;
    
    UFUNCTION(BlueprintPure)
    float GetBaseFOV() const;
    
    UFUNCTION(BlueprintPure)
    bool GetAutoCloseChests() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetAntiAliasingMethod() const;
    
    UFUNCTION(BlueprintPure)
    float GetAmbientOcclusionIntensity() const;
    
    UFUNCTION(BlueprintPure)
    float GetAimScalar_KBM() const;
    
    UFUNCTION(BlueprintPure)
    float GetAimScalar_Gamepad() const;
    
    UFUNCTION(BlueprintCallable)
    void DoInitialSetup(int32 _BenchmarkWorkScale, float _BenchmarkCPUMultiplier, float _BenchmarkGPUMultiplier);
    
    UFUNCTION(BlueprintCallable)
    void ApplyUpscalingSettings();
    
    UFUNCTION(BlueprintCallable)
    void ApplySyncIntervalySettings();
    
    UFUNCTION(BlueprintCallable)
    void ApplyLatencySettings();
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void ApplyGamma() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void ApplyAntiAliasingMethod() const;
    
};

