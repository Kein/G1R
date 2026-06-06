#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ProfileData.generated.h"

class UCombatDifficultySettings;
class UDifficultyPreset;
class UProgressionDifficultySettings;
class UResourcesDifficultySettings;

USTRUCT(BlueprintType)
struct FProfileData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FString m_ProfileName;
    
    UPROPERTY(EditAnywhere)
    TArray<FString> m_QuickSaveName;
    
    UPROPERTY(EditAnywhere)
    TArray<FString> m_AutoSaveName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FString> m_SavedSlotsNames;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UDifficultyPreset> m_difficultyPreset;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UCombatDifficultySettings> m_customCombatSettings;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UResourcesDifficultySettings> m_customResourcesSettings;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UProgressionDifficultySettings> m_customProgressionSettings;
    
    UPROPERTY(EditAnywhere)
    bool m_Survival;
    
    UPROPERTY(EditAnywhere)
    bool m_PermanentDeath;
    
    UPROPERTY(EditAnywhere)
    bool m_PermanentDeathGameOver;
    
    UPROPERTY(EditAnywhere)
    bool m_FakeSloppyCombos;
    
    UPROPERTY(EditAnywhere)
    int32 m_MaxQuick;
    
    UPROPERTY(EditAnywhere)
    int32 m_MaxAuto;
    
    G1R_API FProfileData();
};

