#include "UITimer.h"

UUITimer::UUITimer() {
    this->GameTimeSubsystem = NULL;
    this->WeatherSubsystem = NULL;
}

FText UUITimer::GetLocalizedWeather() {
    return FText::GetEmpty();
}


