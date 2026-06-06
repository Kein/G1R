#pragma once
#include "CoreMinimal.h"
#include "InteractionSpotRequirements.h"
#include "Templates/SubclassOf.h"
#include "WeatherRequirements.generated.h"

class UWeatherCondition;

USTRUCT(BlueprintType)
struct G1R_API FWeatherRequirements : public FInteractionSpotRequirements {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UWeatherCondition> RequireWeatherCondition;
    
    FWeatherRequirements();
};

