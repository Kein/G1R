#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "Templates/SubclassOf.h"
#include "ProfileSlotInfo.generated.h"

class UCombatDifficultySettings;
class UDifficultyPreset;
class UProgressionDifficultySettings;
class UResourcesDifficultySettings;

UCLASS(BlueprintType)
class G1R_API UProfileSlotInfo : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FString ProfileName;
    
    UPROPERTY(BlueprintReadOnly)
    double TimePlayed;
    
    UPROPERTY(BlueprintReadOnly)
    FDateTime ProfileDate;
    
    UPROPERTY(BlueprintReadOnly)
    TSubclassOf<UDifficultyPreset> DifficultyPreset;
    
    UPROPERTY(BlueprintReadOnly)
    TSubclassOf<UCombatDifficultySettings> CustomCombatSettings;
    
    UPROPERTY(BlueprintReadOnly)
    TSubclassOf<UResourcesDifficultySettings> CustomResourcesSettings;
    
    UPROPERTY(BlueprintReadOnly)
    TSubclassOf<UProgressionDifficultySettings> CustomProgressionSettings;
    
    UPROPERTY(BlueprintReadOnly)
    bool Survival;
    
    UPROPERTY(BlueprintReadOnly)
    bool PermanentDeath;
    
    UPROPERTY(BlueprintReadOnly)
    bool PermanentDeathGameOver;
    
    UPROPERTY(BlueprintReadOnly)
    int32 MostRecentChapterId;
    
    UProfileSlotInfo();

};

