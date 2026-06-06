#pragma once
#include "CoreMinimal.h"
#include "ClockTime.h"
#include "DailyRoutineTaskConditionDelegateDelegate.h"
#include "Templates/SubclassOf.h"
#include "DailyRoutineTaskDescription.generated.h"

class UCharacterAIState;
class UNavArea;
class UTerritoryConfig;

USTRUCT(BlueprintType)
struct FDailyRoutineTaskDescription {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FClockTime StartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UCharacterAIState* TaskInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName AtWaypoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float WaypointRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UNavArea> InNavArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FDailyRoutineTaskConditionDelegate ConditionDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTerritoryConfig* TerritoryOverride;
    
    G1R_API FDailyRoutineTaskDescription();
};

