#include "IngameTimeLibrary.h"

UIngameTimeLibrary::UIngameTimeLibrary() {
}

FString UIngameTimeLibrary::ToString(const FInGameTime& InGameTime) {
    return TEXT("");
}

bool UIngameTimeLibrary::IsInfinite(const FInGameTime& InGameTime) {
    return false;
}

int32 UIngameTimeLibrary::GetDay(const FInGameTime& InGameTime) {
    return 0;
}

FClockTime UIngameTimeLibrary::GetClockTime(const FInGameTime& InGameTime) {
    return FClockTime{};
}


