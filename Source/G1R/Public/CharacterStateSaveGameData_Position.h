#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "CharacterStateSaveGameData_Position.generated.h"

USTRUCT(BlueprintType)
struct FCharacterStateSaveGameData_Position {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, SaveGame)
    FVector CharacterLocation;
    
    UPROPERTY(BlueprintReadWrite, SaveGame)
    FRotator CharacterRotation;
    
    UPROPERTY(BlueprintReadWrite, SaveGame)
    FVector SpawnLocation;
    
    UPROPERTY(BlueprintReadWrite, SaveGame)
    FRotator SpawnRotation;
    
    G1R_API FCharacterStateSaveGameData_Position();
};

