#pragma once
#include "CoreMinimal.h"
#include "TravellingData.generated.h"

class ACharacter;
class UCameraDefinition;

USTRUCT()
struct FTravellingData {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    UCameraDefinition* m_DestinationTravellingCameraConf;
    
    UPROPERTY()
    ACharacter* m_PossessedCharacter;
    
    G1R_API FTravellingData();
};

