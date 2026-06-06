#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "SaveDataPayload.generated.h"

class UCombatDifficultySettings;
class UDifficultyPreset;
class UProgressionDifficultySettings;
class UResourcesDifficultySettings;

USTRUCT(BlueprintType)
struct FSaveDataPayload {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, SaveGame)
    bool m_QuickSave;
    
    UPROPERTY(EditAnywhere, SaveGame)
    bool m_AutoSave;
    
    UPROPERTY(EditAnywhere, SaveGame)
    FString m_SlotName;
    
    UPROPERTY(EditAnywhere, SaveGame)
    int32 m_ProfileId;
    
    UPROPERTY(EditAnywhere, SaveGame)
    FString m_PlayerSaveName;
    
    UPROPERTY(EditAnywhere, SaveGame)
    bool m_IsPlayerSaveNameCustom;
    
    UPROPERTY(EditAnywhere, SaveGame)
    TArray<uint8> m_CompressedBitmap;
    
    UPROPERTY(EditAnywhere, SaveGame)
    TSubclassOf<UDifficultyPreset> m_difficultyPreset;
    
    UPROPERTY(EditAnywhere, SaveGame)
    TSubclassOf<UCombatDifficultySettings> m_customCombatSettings;
    
    UPROPERTY(EditAnywhere, SaveGame)
    TSubclassOf<UResourcesDifficultySettings> m_customResourcesSettings;
    
    UPROPERTY(EditAnywhere, SaveGame)
    TSubclassOf<UProgressionDifficultySettings> m_customProgressionSettings;
    
    UPROPERTY(EditAnywhere, SaveGame)
    bool m_PermaDeath;
    
    UPROPERTY(EditAnywhere, SaveGame)
    bool m_PermaDeathGameOver;
    
    UPROPERTY(EditAnywhere, SaveGame)
    bool m_SurvivalMode;
    
    UPROPERTY(EditAnywhere, SaveGame)
    bool m_FakeSloppyCombos;
    
    UPROPERTY(EditAnywhere, SaveGame)
    bool m_ForceSave;
    
    G1R_API FSaveDataPayload();
};

