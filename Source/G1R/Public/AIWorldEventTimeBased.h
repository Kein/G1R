#pragma once
#include "CoreMinimal.h"
#include "AIWorldEvent.h"
#include "ClockTimeRange.h"
#include "EWeather.h"
#include "EWeekDay.h"
#include "InGameTime.h"
#include "AIWorldEventTimeBased.generated.h"

UCLASS(Abstract)
class UAIWorldEventTimeBased : public UAIWorldEvent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FClockTimeRange TimeRange;
    
    UPROPERTY(EditAnywhere)
    int32 MinDaysBetween;
    
    UPROPERTY(EditAnywhere)
    TSet<EWeekDay> AllowOnWeekday;
    
    UPROPERTY(EditAnywhere)
    TSet<EWeather> AllowOnWeather;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FInGameTime LastTimeActive;
    
    UPROPERTY(EditAnywhere)
    TSet<FName> CharactersRequiredToBeAlive;
    
    UAIWorldEventTimeBased();

    UFUNCTION(BlueprintNativeEvent)
    bool BP_IsApplicableNow() const;
    
};

