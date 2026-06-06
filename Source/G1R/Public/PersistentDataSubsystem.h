#pragma once
#include "CoreMinimal.h"
#include "BaseClasses/ScriptGameInstanceSubsystem.h"
#include "Engine/TimerHandle.h"
#include "ESaveStatus.h"
#include "OnCannotSaveDelegateDelegate.h"
#include "OnGameSavedDelegateDelegate.h"
#include "ProfileData.h"
#include "SaveDataPayload.h"
#include "SaveGamePublicData.h"
#include "PersistentDataSubsystem.generated.h"

class UGothicLocalPlayer;
class UGothicPersistentDataGame;
class UGothicPersistentDataList;
class UObject;
class UPersistentDataSubsystem;
class USettingObject_Bool_HDR;

UCLASS(Abstract, Config=Game)
class G1R_API UPersistentDataSubsystem : public UScriptGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    int32 m_CurrentProfileId;
    
    UPROPERTY()
    bool m_IsPermaDeath;
    
    UPROPERTY()
    FProfileData m_EmptyProfile;
    
    UPROPERTY(Transient)
    UGothicPersistentDataGame* m_PersistentData;
    
    UPROPERTY(Transient)
    UGothicPersistentDataList* m_PersistentDataList;
    
    UPROPERTY()
    int32 m_CurrentSaveRequest;
    
    UPROPERTY()
    int32 m_LastSuccessfulSaveRequest;
    
    UPROPERTY()
    int32 m_LastSuccessfulLoadRequest;
    
    UPROPERTY()
    double m_LastGamePlayTime;
    
    UPROPERTY()
    FSaveDataPayload m_Payload;
    
    UPROPERTY()
    ESaveStatus m_SaveStatus;
    
    UPROPERTY(Config)
    int32 m_ProfileListSaveSize;
    
    UPROPERTY()
    FTimerHandle m_timerHandle;
    
    UPROPERTY()
    USettingObject_Bool_HDR* m_HDRSettings;
    
    UPROPERTY()
    TArray<uint8> m_CompressedBitmapTemporal;
    
    UPROPERTY()
    bool m_SaveScreenshotEnabledSettings;
    
public:
    UPROPERTY()
    bool m_IsAutosaveAllowedInCurrentMap;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FOnCannotSaveDelegate m_OnCannotSave;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FOnGameSavedDelegate m_OnGameSaved;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 m_MaxProfileNumber;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    bool bAllowSaveLoad;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_autosavePermaDeathTimer;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_ScreenshotTimeout;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool m_SaveScreenshotEnabled;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 m_ScreenshotResolutionX;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 m_ScreenshotResolutionY;
    
private:
    UPROPERTY(Transient)
    FSaveDataPayload m_LoadPayload;
    
public:
    UPersistentDataSubsystem();

    UFUNCTION(BlueprintPure)
    bool HasProfile() const;
    
    UFUNCTION()
    UGothicPersistentDataList* GetSharedSave();
    
    UFUNCTION(BlueprintCallable)
    FString GetSavePublicName(const FString& SlotName);
    
    UFUNCTION(BlueprintCallable)
    void GetProfiles(TArray<FProfileData>& Profiles);
    
    UFUNCTION()
    void GetMostRecentSaveForProfile(int32 ProfileId, FSaveGamePublicData& SaveData);
    
    UFUNCTION()
    void GetMostRecentSave(int32& ProfileId, FSaveGamePublicData& SaveData);
    
    UFUNCTION(BlueprintCallable)
    float GetMostRecentPlayTime();
    
    UFUNCTION()
    UGothicPersistentDataGame* GetGameSave();
    
    UFUNCTION(BlueprintPure)
    int32 GetCurrentProfileId() const;
    
    UFUNCTION(BlueprintCallable)
    FProfileData GetCurrentProfile();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UPersistentDataSubsystem* Get(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    bool CheckIsPermaDeath();
    
    UFUNCTION(BlueprintImplementableEvent)
    UGothicPersistentDataList* BP_LoadOrCreateSettings(const UGothicLocalPlayer* LocalPlayer);
    
    UFUNCTION(BlueprintImplementableEvent)
    UGothicPersistentDataGame* BP_LoadOrCreateDataGame();
    
};

