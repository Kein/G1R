#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "CharacterStateSaveGameData_Position.generated.h"

USTRUCT()
struct FCharacterStateSaveGameData_Position {
    GENERATED_BODY()
public:
    UPROPERTY(SaveGame)
    FVector CharacterLocation;
    
    UPROPERTY(SaveGame)
    FRotator CharacterRotation;
    
    UPROPERTY(SaveGame)
    FVector SpawnLocation;
    
    UPROPERTY(SaveGame)
    FRotator SpawnRotation;
    
    G1R_API FCharacterStateSaveGameData_Position();
};

