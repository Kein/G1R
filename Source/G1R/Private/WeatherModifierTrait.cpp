#include "WeatherModifierTrait.h"

UWeatherModifierTrait::UWeatherModifierTrait() {
    this->HandleCharacterUniqueNames.AddDefaulted(1);
    this->bChangeWeatherInstant = false;
    this->bHasDuration = false;
    this->Duration = 0.00f;
    this->Weather = EWeather::Count;
}


