#pragma once
#include "CoreMinimal.h"
#include "WorldPointSaveGameData.generated.h"

USTRUCT()
struct FWorldPointSaveGameData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    double m_CurrentSeconds;
    
    UPROPERTY(EditAnywhere)
    bool m_RegenItems;
    
    UPROPERTY(EditAnywhere)
    FName m_PointUniqueName;
    
    UPROPERTY(EditAnywhere)
    TMap<int32, FName> m_EmptyCoordItem;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> m_EventsToCall;
    
    UPROPERTY(EditAnywhere)
    TMap<int32, FName> m_Items;
    
    G1R_API FWorldPointSaveGameData();
};

