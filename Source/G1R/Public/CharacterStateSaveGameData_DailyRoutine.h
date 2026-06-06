#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "InGameTime.h"
#include "InteractionSpotHandle.h"
#include "Templates/SubclassOf.h"
#include "CharacterStateSaveGameData_DailyRoutine.generated.h"

class UAIState_DailyRoutine;

USTRUCT()
struct FCharacterStateSaveGameData_DailyRoutine {
    GENERATED_BODY()
public:
    UPROPERTY(SaveGame)
    TSubclassOf<UAIState_DailyRoutine> DailyRoutineClass;
    
    UPROPERTY(SaveGame)
    FInGameTime AssignedAt;
    
    UPROPERTY(SaveGame)
    FVector LocationWhenStartedRoutine;
    
    UPROPERTY(SaveGame)
    FInteractionSpotHandle UsedSpot;
    
    G1R_API FCharacterStateSaveGameData_DailyRoutine();
};

