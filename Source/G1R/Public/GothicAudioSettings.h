#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "Chaos/ChaosEngineInterface.h"
#include "CutsceneAudioEventSet.h"
#include "GothicAudioSettings.generated.h"

class UCommonActivatableWidget;
class UFMODBus;
class UFMODEvent;
class UFMODVCA;
class UGothicAudioSettings;
class UWorld;

UCLASS(BlueprintType, DefaultConfig, Config=Game)
class G1R_API UGothicAudioSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<UFMODEvent> MusicMasterEvent;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<UFMODEvent> UnderWaterAmbience;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    TArray<TSoftObjectPtr<UWorld>> MainMenuMap;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    TSoftClassPtr<UCommonActivatableWidget> CreditScreenWidget;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    float VolumeFadeDuration;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    float CombatRadius;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    float MusicIntensityMaxHealth;
    
    UPROPERTY(Config, EditAnywhere)
    TMap<FName, float> MusicLocations;
    
    UPROPERTY(Config, EditAnywhere)
    TMap<FName, float> SpecialContentIDs;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<UFMODVCA> VCA_Master;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<UFMODVCA> VCA_Music;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<UFMODVCA> VCA_SFX;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<UFMODVCA> VCA_VOICE;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<UFMODVCA> VCA_VOICE_Ambience;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<UFMODVCA> VCA_Cutscene;
    
    UPROPERTY(Config, EditAnywhere)
    TArray<TSoftObjectPtr<UFMODBus>> LocalizationBuses;
    
    UPROPERTY(Config, EditAnywhere)
    TMap<FName, float> LocalizationVolume;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    TSoftObjectPtr<UFMODEvent> FMODEvent_Dialogue;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    TSoftObjectPtr<UFMODEvent> FMODEvent_Cutscene;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    TSoftObjectPtr<UFMODEvent> FMODEvent_Smalltalk;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    TSoftObjectPtr<UFMODEvent> FMODEvent_AmbientConversation;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    TSoftObjectPtr<UFMODEvent> FMODEvent_AmbientConversation_NPC;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    TSoftObjectPtr<UFMODEvent> FMODEvent_Mumble;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    TSoftObjectPtr<UFMODEvent> FMODEvent_SelfTalk;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    TSoftObjectPtr<UFMODEvent> FMODEvent_Reaction;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    TSoftObjectPtr<UFMODEvent> FMODEvent_UI;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    TSoftObjectPtr<UFMODEvent> FMODEvent_Possessed_2D;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    TSoftObjectPtr<UFMODEvent> FMODEvent_Possessed_3D;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    TSoftObjectPtr<UFMODEvent> FMODEvent_Undead;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    TSoftObjectPtr<UFMODEvent> FMODEvent_Demon;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    TSoftObjectPtr<UFMODEvent> FMODEvent_Orc_Reaction;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    TSoftObjectPtr<UFMODEvent> FMODEvent_Orc_Mumble;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    TSoftObjectPtr<UFMODEvent> FMODEvent_Orc_Conversation;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    TMap<FString, TSoftObjectPtr<UFMODEvent>> VOEventsByName;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    FName PossessedIntensityParameter;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    float PossessedIntensityValue2D;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    float PossessedIntensityValue3D;
    
    UPROPERTY(Config, EditAnywhere)
    TMap<FString, FCutsceneAudioEventSet> CutsceneAudioEventSets;
    
    UPROPERTY(Config, EditAnywhere)
    FString DaytimeParameter;
    
    UPROPERTY(Config, EditAnywhere)
    FString SoundOcclusionParameter;
    
    UPROPERTY(Config, EditAnywhere)
    FString SoundOcclusionInstantParameter;
    
    UPROPERTY(Config, EditAnywhere)
    FString AudioEnvironmentMuteParameter;
    
    UPROPERTY(Config, EditAnywhere)
    TMap<TEnumAsByte<EPhysicalSurface>, float> MaterialOcclusionValues;
    
    UPROPERTY(Config, EditAnywhere)
    float DefaultOcclusionValue;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    TMap<int32, TSoftObjectPtr<UFMODEvent>> ChapterJingles;
    
    UGothicAudioSettings();

    UFUNCTION(BlueprintCallable)
    static UGothicAudioSettings* GetAudioSettings();
    
};

