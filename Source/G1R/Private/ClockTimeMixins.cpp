#include "ClockTimeMixins.h"

UClockTimeMixins::UClockTimeMixins() {
}

bool UClockTimeMixins::IsBetween(const FClockTime& This, const FClockTime& A, const FClockTime& B) {
    return false;
}

bool UClockTimeMixins::IsBefore(const FClockTime& This, const FClockTime& Time) {
    return false;
}

bool UClockTimeMixins::IsAfter(const FClockTime& This, const FClockTime& Time) {
    return false;
}

float UClockTimeMixins::GetSecondsSinceMidnight(const FClockTime& This) {
    return 0.0f;
}

void UClockTimeMixins::AddSeconds(FClockTime& This, float SecondsToAdd) {
}


