#pragma once
#include "CoreMinimal.h"
#include "CharacterStateSaveGameData_Relationship.generated.h"

class UActivePersonalRelationshipModifier;

USTRUCT(BlueprintType)
struct FCharacterStateSaveGameData_Relationship {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced, SaveGame, BlueprintReadOnly, meta=(AllowPrivateAccess=true))
    TArray<UActivePersonalRelationshipModifier*> ActivePersonalRelationshipModifiers;
    
    G1R_API FCharacterStateSaveGameData_Relationship();
};

