#pragma once
#include "CoreMinimal.h"
#include "InGameTime.h"
#include "GameTimeSaveGameData.generated.h"

USTRUCT()
struct FGameTimeSaveGameData {
    GENERATED_BODY()
public:
    UPROPERTY(SaveGame)
    FInGameTime CurrentTime;
    
    G1R_API FGameTimeSaveGameData();
};

