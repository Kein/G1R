#pragma once
#include "CoreMinimal.h"
#include "WorldPointSaveGameData.generated.h"

USTRUCT(BlueprintType)
struct FWorldPointSaveGameData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    double m_CurrentSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_RegenItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName m_PointUniqueName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<int32, FName> m_EmptyCoordItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FName> m_EventsToCall;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<int32, FName> m_Items;
    
    G1R_API FWorldPointSaveGameData();
};

