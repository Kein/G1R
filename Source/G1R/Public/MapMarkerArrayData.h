#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "MapMarkerArrayData.generated.h"

USTRUCT(BlueprintType)
struct FMapMarkerArrayData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    TMap<FVector2D, FGameplayTag> m_MapMarkersDataArray;
    
    G1R_API FMapMarkerArrayData();
};

