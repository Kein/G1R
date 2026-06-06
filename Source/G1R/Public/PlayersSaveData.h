#pragma once
#include "CoreMinimal.h"
#include "PlayerSaveData.h"
#include "PlayersSaveData.generated.h"

USTRUCT(BlueprintType)
struct FPlayersSaveData {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FPlayerSaveData> m_SavedPlayers;
    
    G1R_API FPlayersSaveData();
};

