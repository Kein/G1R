#include "IngameTimeMixins.h"

UIngameTimeMixins::UIngameTimeMixins() {
}

bool UIngameTimeMixins::IsYesterday(const FInGameTime& This, const UObject* WorldContextObject) {
    return false;
}

bool UIngameTimeMixins::IsWithinXMinutesAgoAndNow(const FInGameTime& This, int32 Minutes, const UObject* WorldContextObject) {
    return false;
}

bool UIngameTimeMixins::IsWithinXHoursAgoAndNow(const FInGameTime& This, int32 Hours, const UObject* WorldContextObject) {
    return false;
}

bool UIngameTimeMixins::IsWithinXDaysAgoAndNow(const FInGameTime& This, int32 Days, const UObject* WorldContextObject) {
    return false;
}

bool UIngameTimeMixins::IsValid(const FInGameTime& This) {
    return false;
}

bool UIngameTimeMixins::IsTomorrow(const FInGameTime& This, const UObject* WorldContextObject) {
    return false;
}

bool UIngameTimeMixins::IsToday(const FInGameTime& This, const UObject* WorldContextObject) {
    return false;
}

bool UIngameTimeMixins::IsTimeInThePast(const FInGameTime& This, const UObject* WorldContextObject) {
    return false;
}

bool UIngameTimeMixins::IsTimeInTheFuture(const FInGameTime& This, const UObject* WorldContextObject) {
    return false;
}

bool UIngameTimeMixins::IsMoreThanXMinutesAgo(const FInGameTime& This, int32 Minutes, const UObject* WorldContextObject) {
    return false;
}

bool UIngameTimeMixins::IsMoreThanXHoursAgo(const FInGameTime& This, int32 Hours, const UObject* WorldContextObject) {
    return false;
}

bool UIngameTimeMixins::IsMoreThanXDaysAgo(const FInGameTime& This, int32 Days, const UObject* WorldContextObject) {
    return false;
}

bool UIngameTimeMixins::IsLessThanXMinutesAgo(const FInGameTime& This, int32 Minutes, const UObject* WorldContextObject) {
    return false;
}

bool UIngameTimeMixins::IsLessThanXHoursAgo(const FInGameTime& This, int32 Hours, const UObject* WorldContextObject) {
    return false;
}

bool UIngameTimeMixins::IsLessThanXDaysAgo(const FInGameTime& This, int32 Days, const UObject* WorldContextObject) {
    return false;
}

bool UIngameTimeMixins::IsInXMinutesOrLater(const FInGameTime& This, int32 Minutes, const UObject* WorldContextObject) {
    return false;
}

bool UIngameTimeMixins::IsInXMinutesOrEarlier(const FInGameTime& This, int32 Minutes, const UObject* WorldContextObject) {
    return false;
}

bool UIngameTimeMixins::IsInXHoursOrLater(const FInGameTime& This, int32 Hours, const UObject* WorldContextObject) {
    return false;
}

bool UIngameTimeMixins::IsInXHoursOrEarlier(const FInGameTime& This, int32 Hours, const UObject* WorldContextObject) {
    return false;
}

bool UIngameTimeMixins::IsInXDaysOrLater(const FInGameTime& This, int32 Days, const UObject* WorldContextObject) {
    return false;
}

bool UIngameTimeMixins::IsInXDaysOrEarlier(const FInGameTime& This, int32 Days, const UObject* WorldContextObject) {
    return false;
}

bool UIngameTimeMixins::IsInMoreThanXMinutes(const FInGameTime& This, int32 Minutes, const UObject* WorldContextObject) {
    return false;
}

bool UIngameTimeMixins::IsInMoreThanXHours(const FInGameTime& This, int32 Hours, const UObject* WorldContextObject) {
    return false;
}

bool UIngameTimeMixins::IsInMoreThanXDays(const FInGameTime& This, int32 Days, const UObject* WorldContextObject) {
    return false;
}

bool UIngameTimeMixins::IsInLessThanXMinutes(const FInGameTime& This, int32 Minutes, const UObject* WorldContextObject) {
    return false;
}

bool UIngameTimeMixins::IsInLessThanXHours(const FInGameTime& This, int32 Hours, const UObject* WorldContextObject) {
    return false;
}

bool UIngameTimeMixins::IsInLessThanXDays(const FInGameTime& This, int32 Days, const UObject* WorldContextObject) {
    return false;
}

bool UIngameTimeMixins::IsInExactlyXMinutes(const FInGameTime& This, int32 Minutes, const UObject* WorldContextObject) {
    return false;
}

bool UIngameTimeMixins::IsInExactlyXHours(const FInGameTime& This, int32 Hours, const UObject* WorldContextObject) {
    return false;
}

bool UIngameTimeMixins::IsInExactlyXDays(const FInGameTime& This, int32 Days, const UObject* WorldContextObject) {
    return false;
}

bool UIngameTimeMixins::IsExactlyXMinutesAgo(const FInGameTime& This, int32 Minutes, const UObject* WorldContextObject) {
    return false;
}

bool UIngameTimeMixins::IsExactlyXHoursAgo(const FInGameTime& This, int32 Hours, const UObject* WorldContextObject) {
    return false;
}

bool UIngameTimeMixins::IsExactlyXDaysAgo(const FInGameTime& This, int32 Days, const UObject* WorldContextObject) {
    return false;
}

bool UIngameTimeMixins::IsAtLeastXMinutesAgo(const FInGameTime& This, int32 Minutes, const UObject* WorldContextObject) {
    return false;
}

bool UIngameTimeMixins::IsAtLeastXHoursAgo(const FInGameTime& This, int32 Hours, const UObject* WorldContextObject) {
    return false;
}

bool UIngameTimeMixins::IsAtLeastXDaysAgo(const FInGameTime& This, int32 Days, const UObject* WorldContextObject) {
    return false;
}

float UIngameTimeMixins::GetAgeInRealtimeSeconds(const FInGameTime& InGameTime, const UObject* WorldContextObject) {
    return 0.0f;
}

float UIngameTimeMixins::GetAgeInIngameSeconds(const FInGameTime& InGameTime, const UObject* WorldContextObject) {
    return 0.0f;
}


