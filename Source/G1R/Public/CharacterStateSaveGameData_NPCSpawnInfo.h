#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "CharacterStateSaveGameData_NPCSpawnInfo.generated.h"

class AGothicCharacter;
class UCharacterConfig;

USTRUCT()
struct FCharacterStateSaveGameData_NPCSpawnInfo {
    GENERATED_BODY()
public:
    UPROPERTY(SaveGame)
    TSubclassOf<UCharacterConfig> CharacterConfig;
    
    UPROPERTY(SaveGame)
    TSoftClassPtr<AGothicCharacter> VisualCharacterClass;
    
    UPROPERTY(SaveGame)
    FName SummonedBy;
    
    G1R_API FCharacterStateSaveGameData_NPCSpawnInfo();
};

