#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "VCASubsystem.generated.h"

class UObject;
class UVCASubsystem;

UCLASS(BlueprintType)
class G1R_API UVCASubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UVCASubsystem();

    UFUNCTION(BlueprintCallable)
    void SetVoiceVolume(float InVolume, bool bSkipBlending);
    
    UFUNCTION(BlueprintCallable)
    void SetSFXVolume(float InVolume, bool SkipBlending);
    
    UFUNCTION(BlueprintCallable)
    void SetMuted(bool bMute);
    
    UFUNCTION(BlueprintCallable)
    void SetMusicVolume(float InVolume, bool bSkipBlending);
    
    UFUNCTION(BlueprintCallable)
    void SetMasterVolume(float InVolume, bool bSkipBlending);
    
protected:
    UFUNCTION()
    void HandleVolumeSettingsChanged();
    
    UFUNCTION()
    void HandleSettingsChanged();
    
public:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UVCASubsystem* Get(const UObject* WorldContextObject);
    
};

