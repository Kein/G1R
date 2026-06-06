#pragma once
#include "CoreMinimal.h"
#include "CharacterStateSaveGameData_Relationship.generated.h"

class UActivePersonalRelationshipModifier;

USTRUCT()
struct FCharacterStateSaveGameData_Relationship {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced, SaveGame)
    TArray<UActivePersonalRelationshipModifier*> ActivePersonalRelationshipModifiers;
    
    G1R_API FCharacterStateSaveGameData_Relationship();
};

