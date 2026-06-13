#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "CharacterStateSaveGameData_NPCSpawnInfo.generated.h"

class AGothicCharacter;
class UCharacterConfig;

USTRUCT(BlueprintType)
struct FCharacterStateSaveGameData_NPCSpawnInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, SaveGame)
    TSubclassOf<UCharacterConfig> CharacterConfig;
    
    UPROPERTY(BlueprintReadWrite, SaveGame)
    TSoftClassPtr<AGothicCharacter> VisualCharacterClass;
    
    UPROPERTY(BlueprintReadWrite, SaveGame)
    FName SummonedBy;
    
    G1R_API FCharacterStateSaveGameData_NPCSpawnInfo();
};

