#pragma once
#include "CoreMinimal.h"
#include "PersistentDataBaseSubsystem.h"
#include "WorldPointsSaveGameData.h"
#include "WorldPointsPersistentDataSubsystem.generated.h"

UCLASS()
class G1R_API UWorldPointsPersistentDataSubsystem : public UPersistentDataBaseSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FWorldPointsSaveGameData m_WorldPointsSavedData;
    
public:
    UWorldPointsPersistentDataSubsystem();

};

