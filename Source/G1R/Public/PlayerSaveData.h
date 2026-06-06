#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "AttachedItem.h"
#include "ReplicatedInventoryMap.h"
#include "PlayerSaveData.generated.h"

USTRUCT()
struct FPlayerSaveData {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString m_PlayerID;
    
    UPROPERTY()
    FVector m_Location;
    
    UPROPERTY()
    FRotator m_Rotation;
    
    UPROPERTY()
    bool m_ResumeAtTransform;
    
    UPROPERTY()
    FReplicatedInventoryMap m_Inventory;
    
    UPROPERTY()
    TArray<FAttachedItem> m_MapOfAttachedItems;
    
    G1R_API FPlayerSaveData();
};

