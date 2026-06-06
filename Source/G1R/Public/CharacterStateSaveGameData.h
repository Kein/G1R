#pragma once
#include "CoreMinimal.h"
#include "CharacterStateSaveGameData_AnyCharacterType.h"
#include "CharacterStateSaveGameData_NPCCharacter.h"
#include "CharacterStateSaveGameData_PlayerCharacter.h"
#include "ECharacterStateGlobalIDFormat.h"
#include "CharacterStateSaveGameData.generated.h"

USTRUCT(BlueprintType)
struct FCharacterStateSaveGameData {
    GENERATED_BODY()
public:
    UPROPERTY(SaveGame)
    FCharacterStateSaveGameData_AnyCharacterType AnyCharacterType;
    
    UPROPERTY(SaveGame)
    FCharacterStateSaveGameData_NPCCharacter NPCCharacters;
    
    UPROPERTY(SaveGame)
    FCharacterStateSaveGameData_PlayerCharacter PlayerCharacters;
    
    UPROPERTY(SaveGame)
    ECharacterStateGlobalIDFormat GlobalIDFormat;
    
    G1R_API FCharacterStateSaveGameData();
};

