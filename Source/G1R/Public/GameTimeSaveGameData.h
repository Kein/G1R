#pragma once
#include "CoreMinimal.h"
#include "InGameTime.h"
#include "GameTimeSaveGameData.generated.h"

USTRUCT(BlueprintType)
struct FGameTimeSaveGameData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, SaveGame)
    FInGameTime CurrentTime;
    
    G1R_API FGameTimeSaveGameData();
};

