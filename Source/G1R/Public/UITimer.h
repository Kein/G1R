#pragma once
#include "CoreMinimal.h"
#include "AlkUserWidget.h"
#include "UITimer.generated.h"

class UGameTimeSubsystem;
class UWeatherSubsystem;

UCLASS(EditInlineNew)
class G1R_API UUITimer : public UAlkUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly)
    UGameTimeSubsystem* GameTimeSubsystem;
    
    UPROPERTY(BlueprintReadOnly)
    UWeatherSubsystem* WeatherSubsystem;
    
public:
    UUITimer();

protected:
    UFUNCTION(BlueprintCallable)
    FText GetLocalizedWeather();
    
};

