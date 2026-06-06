#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "InGameTime.h"
#include "IngameTimeMixins.generated.h"

UCLASS(BlueprintType)
class UIngameTimeMixins : public UObject {
    GENERATED_BODY()
public:
    UIngameTimeMixins();

    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsYesterday(const FInGameTime& This, const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsWithinXMinutesAgoAndNow(const FInGameTime& This, int32 Minutes, const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsWithinXHoursAgoAndNow(const FInGameTime& This, int32 Hours, const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsWithinXDaysAgoAndNow(const FInGameTime& This, int32 Days, const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static bool IsValid(const FInGameTime& This);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsTomorrow(const FInGameTime& This, const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsToday(const FInGameTime& This, const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsTimeInThePast(const FInGameTime& This, const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsTimeInTheFuture(const FInGameTime& This, const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsMoreThanXMinutesAgo(const FInGameTime& This, int32 Minutes, const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsMoreThanXHoursAgo(const FInGameTime& This, int32 Hours, const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsMoreThanXDaysAgo(const FInGameTime& This, int32 Days, const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsLessThanXMinutesAgo(const FInGameTime& This, int32 Minutes, const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsLessThanXHoursAgo(const FInGameTime& This, int32 Hours, const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsLessThanXDaysAgo(const FInGameTime& This, int32 Days, const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsInXMinutesOrLater(const FInGameTime& This, int32 Minutes, const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsInXMinutesOrEarlier(const FInGameTime& This, int32 Minutes, const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsInXHoursOrLater(const FInGameTime& This, int32 Hours, const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsInXHoursOrEarlier(const FInGameTime& This, int32 Hours, const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsInXDaysOrLater(const FInGameTime& This, int32 Days, const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsInXDaysOrEarlier(const FInGameTime& This, int32 Days, const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsInMoreThanXMinutes(const FInGameTime& This, int32 Minutes, const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsInMoreThanXHours(const FInGameTime& This, int32 Hours, const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsInMoreThanXDays(const FInGameTime& This, int32 Days, const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsInLessThanXMinutes(const FInGameTime& This, int32 Minutes, const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsInLessThanXHours(const FInGameTime& This, int32 Hours, const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsInLessThanXDays(const FInGameTime& This, int32 Days, const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsInExactlyXMinutes(const FInGameTime& This, int32 Minutes, const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsInExactlyXHours(const FInGameTime& This, int32 Hours, const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsInExactlyXDays(const FInGameTime& This, int32 Days, const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsExactlyXMinutesAgo(const FInGameTime& This, int32 Minutes, const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsExactlyXHoursAgo(const FInGameTime& This, int32 Hours, const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsExactlyXDaysAgo(const FInGameTime& This, int32 Days, const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsAtLeastXMinutesAgo(const FInGameTime& This, int32 Minutes, const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsAtLeastXHoursAgo(const FInGameTime& This, int32 Hours, const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsAtLeastXDaysAgo(const FInGameTime& This, int32 Days, const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static float GetAgeInRealtimeSeconds(const FInGameTime& InGameTime, const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static float GetAgeInIngameSeconds(const FInGameTime& InGameTime, const UObject* WorldContextObject);
    
};

