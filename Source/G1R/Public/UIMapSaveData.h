#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "MapMarkerArrayData.h"
#include "UIMapSaveData.generated.h"

USTRUCT()
struct FUIMapSaveData {
    GENERATED_BODY()
public:
    UPROPERTY()
    TMap<FGameplayTag, FMapMarkerArrayData> m_MapsMarkersData;
    
    G1R_API FUIMapSaveData();
};

