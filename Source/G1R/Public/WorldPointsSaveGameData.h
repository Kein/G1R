#pragma once
#include "CoreMinimal.h"
#include "DroppedItem.h"
#include "WorldPointSaveGameData.h"
#include "WorldPointsSaveGameData.generated.h"

USTRUCT(BlueprintType)
struct FWorldPointsSaveGameData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FName> m_ActiveEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<FName, FWorldPointSaveGameData> m_WorldPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<int32, FDroppedItem> m_SavedDropItemsArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 m_NumDropItems;
    
    G1R_API FWorldPointsSaveGameData();
};

