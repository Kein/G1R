#pragma once
#include "CoreMinimal.h"
#include "DroppedItem.h"
#include "WorldPointSaveGameData.h"
#include "WorldPointsSaveGameData.generated.h"

USTRUCT(BlueprintType)
struct FWorldPointsSaveGameData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FName> m_ActiveEvents;
    
    UPROPERTY(EditAnywhere)
    TMap<FName, FWorldPointSaveGameData> m_WorldPoint;
    
    UPROPERTY(EditAnywhere)
    TMap<int32, FDroppedItem> m_SavedDropItemsArray;
    
    UPROPERTY(EditAnywhere)
    int32 m_NumDropItems;
    
    G1R_API FWorldPointsSaveGameData();
};

