#pragma once
#include "CoreMinimal.h"
#include "GameStateDataBaseSaveData.h"
#include "PersistentDataBaseSubsystem.h"
#include "PlayersSaveData.h"
#include "MainPlayerPersistentDataSubsystem.generated.h"

UCLASS(Abstract)
class G1R_API UMainPlayerPersistentDataSubsystem : public UPersistentDataBaseSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FPlayersSaveData m_PlayersSavedData;
    
    UPROPERTY()
    FGameStateDataBaseSaveData m_GlobalDataBase;
    
public:
    UMainPlayerPersistentDataSubsystem();

};

