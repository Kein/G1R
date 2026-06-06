#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Templates/SubclassOf.h"
#include "SaveGamePublicData.generated.h"

class UCombatDifficultySettings;
class UDifficultyPreset;
class UProgressionDifficultySettings;
class UResourcesDifficultySettings;

USTRUCT(BlueprintType)
struct FSaveGamePublicData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FString m_SlotName;
    
    UPROPERTY(EditAnywhere)
    FString m_PlayerSaveName;
    
    UPROPERTY(EditAnywhere)
    bool m_IsPlayerSaveNameCustom;
    
    UPROPERTY(EditAnywhere)
    TArray<uint8> m_CompressedBitmap;
    
    UPROPERTY(EditAnywhere)
    int32 m_ChapterID;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UDifficultyPreset> m_difficultyPreset;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UCombatDifficultySettings> m_customCombatSettings;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UResourcesDifficultySettings> m_customResourcesSettings;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UProgressionDifficultySettings> m_customProgressionSettings;
    
    UPROPERTY(EditAnywhere)
    FString m_MapName;
    
    UPROPERTY(EditAnywhere)
    FDateTime m_Date;
    
    UPROPERTY(EditAnywhere)
    double m_TimePlayed;
    
    UPROPERTY(EditAnywhere)
    double m_TimeLoaded;
    
    UPROPERTY(EditAnywhere)
    bool m_QuickSave;
    
    UPROPERTY(EditAnywhere)
    bool m_AutoSave;
    
    UPROPERTY(EditAnywhere)
    int32 m_ProfileId;
    
    G1R_API FSaveGamePublicData();
};

