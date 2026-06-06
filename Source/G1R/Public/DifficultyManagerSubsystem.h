#pragma once
#include "CoreMinimal.h"
#include "BaseClasses/ScriptGameInstanceSubsystem.h"
#include "EDifficultyGroup.h"
#include "Templates/SubclassOf.h"
#include "DifficultyManagerSubsystem.generated.h"

class UCombatDifficultySettings;
class UDifficultyManagerSubsystem;
class UDifficultyPreset;
class UDifficultySettings;
class UObject;
class UProgressionDifficultySettings;
class UResourcesDifficultySettings;

UCLASS(Abstract)
class G1R_API UDifficultyManagerSubsystem : public UScriptGameInstanceSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    TSubclassOf<UDifficultyPreset> m_currentPreset;
    
    UPROPERTY()
    TSubclassOf<UCombatDifficultySettings> m_customCombatSettings;
    
    UPROPERTY()
    TSubclassOf<UResourcesDifficultySettings> m_customResourcesSettings;
    
    UPROPERTY()
    TSubclassOf<UProgressionDifficultySettings> m_customProgressionSettings;
    
    UPROPERTY()
    bool m_SurvivalMode;
    
    UPROPERTY()
    bool m_PermanentDeathMode;
    
    UPROPERTY()
    bool m_FakeSloppyCombos;
    
    UPROPERTY()
    TArray<TSubclassOf<UDifficultyPreset>> m_availablePresets;
    
    UPROPERTY()
    TArray<TSubclassOf<UCombatDifficultySettings>> m_availableCombatSettings;
    
    UPROPERTY()
    TArray<TSubclassOf<UResourcesDifficultySettings>> m_availableResourcesSettings;
    
    UPROPERTY()
    TArray<TSubclassOf<UProgressionDifficultySettings>> m_availableProgressionSettings;
    
public:
    UDifficultyManagerSubsystem();

    UFUNCTION(BlueprintCallable)
    void UpdateProfilePreset();
    
    UFUNCTION(BlueprintCallable)
    void SetSurvivalModeState(bool Value);
    
    UFUNCTION()
    void SetIsPermanentDeathMode(bool isPermanentDeathMode);
    
    UFUNCTION(BlueprintCallable)
    void SetCustomGroupDifficultySettings(EDifficultyGroup Group, TSubclassOf<UDifficultySettings> Settings);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentPreset(TSubclassOf<UDifficultyPreset> Preset);
    
protected:
    UFUNCTION()
    void OnFakeSloppyCombosApplied();
    
public:
    UFUNCTION(BlueprintPure)
    bool GetSurvivalModeState() const;
    
    UFUNCTION(BlueprintPure)
    TSubclassOf<UResourcesDifficultySettings> GetResourcesDifficultySettingsClass() const;
    
    UFUNCTION(BlueprintPure)
    UResourcesDifficultySettings* GetResourcesDifficultySettings() const;
    
    UFUNCTION(BlueprintPure)
    TSubclassOf<UProgressionDifficultySettings> GetProgressionDifficultySettingsClass() const;
    
    UFUNCTION(BlueprintPure)
    UProgressionDifficultySettings* GetProgressionDifficultySettings() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetNumberOfSettingsByGroup(EDifficultyGroup Group) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetNumberOfPresets() const;
    
    UFUNCTION(BlueprintPure)
    TArray<TSubclassOf<UDifficultySettings>> GetGroupDifficultySettingsArray(EDifficultyGroup Group) const;
    
    UFUNCTION(BlueprintPure)
    TArray<TSubclassOf<UDifficultyPreset>> GetDifficultyPresetArray() const;
    
    UFUNCTION(BlueprintPure)
    TSubclassOf<UDifficultySettings> GetCustomDifficultySettings(EDifficultyGroup Group) const;
    
    UFUNCTION(BlueprintPure)
    TSubclassOf<UDifficultyPreset> GetCurrentPreset() const;
    
    UFUNCTION(BlueprintPure)
    TSubclassOf<UCombatDifficultySettings> GetCombatDifficultySettingsClass() const;
    
    UFUNCTION(BlueprintPure)
    UCombatDifficultySettings* GetCombatDifficultySettings() const;
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UDifficultyManagerSubsystem* Get(const UObject* WorldContextObject);
    
protected:
    UFUNCTION(BlueprintCallable)
    void AddGroupDifficultySettings(TSubclassOf<UDifficultySettings> Settings, EDifficultyGroup Group);
    
    UFUNCTION(BlueprintCallable)
    void AddDifficultyPreset(TSubclassOf<UDifficultyPreset> NewPreset);
    
};

