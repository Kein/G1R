#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Templates/SubclassOf.h"
#include "EnvironmentContext.generated.h"

class UTimeRange;
class UWeatherCondition;

UCLASS(Abstract, Const)
class UEnvironmentContext : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSubclassOf<UWeatherCondition> m_WeatherCondition;
    
    UPROPERTY(EditAnywhere)
    TArray<TSubclassOf<UTimeRange>> m_TimeRanges;
    
    UEnvironmentContext();

};

