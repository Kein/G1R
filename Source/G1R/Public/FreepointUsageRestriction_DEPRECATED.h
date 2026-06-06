#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Templates/SubclassOf.h"
#include "FreepointUsageRestriction_DEPRECATED.generated.h"

class UTimeRange;
class UWeatherCondition;

USTRUCT(BlueprintType)
struct G1R_API FFreepointUsageRestriction_DEPRECATED {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTagContainer CharacterTypeRestriction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FName> CharacterUniqueNameRestriction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<TSubclassOf<UTimeRange>> TimeRanges;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UWeatherCondition> WeatherCondition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CooldownSecondsAfterUse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Radius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 NumUsersAllowed;
    
    FFreepointUsageRestriction_DEPRECATED();
};

