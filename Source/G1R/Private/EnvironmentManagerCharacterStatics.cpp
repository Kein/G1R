#include "EnvironmentManagerCharacterStatics.h"

UEnvironmentManagerCharacterStatics::UEnvironmentManagerCharacterStatics() {
}

bool UEnvironmentManagerCharacterStatics::IsUnderRoof(const AGothicCharacter* This) {
    return false;
}

bool UEnvironmentManagerCharacterStatics::IsInWeather(const AGothicCharacter* This, EWeather Weather) {
    return false;
}

bool UEnvironmentManagerCharacterStatics::IsInRain(const AGothicCharacter* This, int32 Level) {
    return false;
}


