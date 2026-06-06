#include "ClockTimeLibrary.h"

UClockTimeLibrary::UClockTimeLibrary() {
}

FString UClockTimeLibrary::ToString(const FClockTime& ClockTime) {
    return TEXT("");
}

FString UClockTimeLibrary::ToShortString(const FClockTime& ClockTime) {
    return TEXT("");
}

int32 UClockTimeLibrary::GetTotalSeconds(const FClockTime& ClockTime) {
    return 0;
}

double UClockTimeLibrary::GetSecond(const FClockTime& ClockTime) {
    return 0.0;
}

int32 UClockTimeLibrary::GetMinute(const FClockTime& ClockTime) {
    return 0;
}

int32 UClockTimeLibrary::GetHour(const FClockTime& ClockTime) {
    return 0;
}


