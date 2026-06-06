#pragma once
#include "CoreMinimal.h"
#include "CharacterStateSaveGameData_AIValueStorage.h"
#include "CharacterStateSaveGameData_DailyRoutine.h"
#include "CharacterStateSaveGameData_Inventory.h"
#include "CharacterStateSaveGameData_NPCSpawnInfo.h"
#include "CharacterStateSaveGameData_Position.h"
#include "CharacterStateSaveGameData_Relationship.h"
#include "CharacterStateSaveGameData_NPCCharacter.generated.h"

USTRUCT()
struct FCharacterStateSaveGameData_NPCCharacter {
    GENERATED_BODY()
public:
    UPROPERTY(SaveGame)
    TMap<FName, FCharacterStateSaveGameData_NPCSpawnInfo> SpawnInfoByGlobalId;
    
    UPROPERTY(SaveGame)
    TMap<FName, FCharacterStateSaveGameData_Position> PositionByGlobalId;
    
    UPROPERTY(SaveGame)
    TMap<FName, FCharacterStateSaveGameData_DailyRoutine> DailyRoutineByGlobalId;
    
    UPROPERTY(SaveGame)
    TMap<FName, FCharacterStateSaveGameData_Inventory> InventoryByGlobalId;
    
    UPROPERTY(SaveGame)
    TMap<FName, FCharacterStateSaveGameData_Relationship> RelationshipByGlobalId;
    
    UPROPERTY(SaveGame)
    TMap<FName, FCharacterStateSaveGameData_AIValueStorage> AIValueStorageByGlobalId;
    
    UPROPERTY(SaveGame)
    TSet<FName> GlobalIDsRemovedFromWorld;
    
    G1R_API FCharacterStateSaveGameData_NPCCharacter();
};

