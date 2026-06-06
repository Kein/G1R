#pragma once
#include "CoreMinimal.h"
#include "GothicLockSaveGameData.generated.h"

USTRUCT()
struct FGothicLockSaveGameData {
    GENERATED_BODY()
public:
    UPROPERTY(SaveGame)
    TSet<FName> m_UnlockedLocks;
    
    G1R_API FGothicLockSaveGameData();
};

