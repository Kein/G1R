#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "CharacterStateSaveGameData_AttributeSet.generated.h"

USTRUCT()
struct FCharacterStateSaveGameData_AttributeSet {
    GENERATED_BODY()
public:
    UPROPERTY(SaveGame)
    TMap<FName, FGameplayAttributeData> Attributes;
    
    G1R_API FCharacterStateSaveGameData_AttributeSet();
};

