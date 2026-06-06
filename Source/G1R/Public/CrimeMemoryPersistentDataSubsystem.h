#pragma once
#include "CoreMinimal.h"
#include "GothicCrimeMemorySaveGameData.h"
#include "PersistentDataBaseSubsystem.h"
#include "CrimeMemoryPersistentDataSubsystem.generated.h"

UCLASS()
class G1R_API UCrimeMemoryPersistentDataSubsystem : public UPersistentDataBaseSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY()
    TOptional<FGothicCrimeMemorySaveGameData> CrimeMemoryGameState;
    
    UCrimeMemoryPersistentDataSubsystem();

};

