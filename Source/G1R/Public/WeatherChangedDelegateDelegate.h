#pragma once
#include "CoreMinimal.h"
#include "EWeather.h"
#include "WeatherChangedDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FWeatherChangedDelegate, EWeather, PreviousWeather, EWeather, NewWeather);

