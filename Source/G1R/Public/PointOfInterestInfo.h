#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PointOfInterestInfo.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FPointOfInterestInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_POIAvailable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTransform m_StaticTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TWeakObjectPtr<AActor> m_Actor;
    
    G1R_API FPointOfInterestInfo();
};

