#pragma once
#include "CoreMinimal.h"
#include "EWeatherEvent.h"
#include "WeatherTransitionDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FWeatherTransitionDelegate, EWeatherEvent, PreviousWeather, EWeatherEvent, NewWeather, float, Time);

