#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "InGameTime.h"
#include "FInGameTimeStatics.generated.h"

class UObject;

UCLASS(BlueprintType)
class UFInGameTimeStatics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFInGameTimeStatics();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FInGameTime XRealtimeSecondsFromNow(const UObject* WorldContextObject, float RealTimeSeconds);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FInGameTime XRealtimeSecondsAgo(const UObject* WorldContextObject, float RealTimeSeconds);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FInGameTime XRealtimeMinutesFromNow(const UObject* WorldContextObject, float RealtimeMinutes);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FInGameTime XRealtimeMinutesAgo(const UObject* WorldContextObject, float RealtimeMinutes);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FInGameTime XRealtimeHoursFromNow(const UObject* WorldContextObject, float RealtimeHours);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FInGameTime XRealtimeHoursAgo(const UObject* WorldContextObject, float RealtimeHours);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FInGameTime XRealtimeDaysFromNow(const UObject* WorldContextObject, float RealtimeDays);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FInGameTime XRealtimeDaysAgo(const UObject* WorldContextObject, float RealtimeDays);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FInGameTime XIngameSecondsFromNow(const UObject* WorldContextObject, float InGameSeconds);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FInGameTime XIngameSecondsAgo(const UObject* WorldContextObject, float InGameSeconds);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FInGameTime XIngameMinutesFromNow(const UObject* WorldContextObject, float IngameMinutes);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FInGameTime XIngameMinutesAgo(const UObject* WorldContextObject, float IngameMinutes);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FInGameTime XIngameHoursFromNow(const UObject* WorldContextObject, float InGameHours);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FInGameTime XIngameHoursAgo(const UObject* WorldContextObject, float InGameHours);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FInGameTime XIngameDaysFromNow(const UObject* WorldContextObject, float InGameDays);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FInGameTime XIngameDaysAgo(const UObject* WorldContextObject, float InGameDays);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FInGameTime Now(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static FInGameTime Make(int32 Days, int32 Hours, int32 Minutes, double Seconds);
    
    UFUNCTION(BlueprintPure)
    static bool IsBetween(const FInGameTime& This, const FInGameTime& A, const FInGameTime& B);
    
    UFUNCTION(BlueprintPure)
    static bool IsBefore(const FInGameTime& This, const FInGameTime& Time);
    
    UFUNCTION(BlueprintPure)
    static bool IsAfter(const FInGameTime& This, const FInGameTime& Time);
    
    UFUNCTION(BlueprintCallable)
    static FInGameTime Invalid();
    
    UFUNCTION(BlueprintCallable)
    static FInGameTime Infinite();
    
    UFUNCTION(BlueprintCallable)
    static FInGameTime FromSeconds(double Seconds);
    
    UFUNCTION(BlueprintCallable)
    static FInGameTime FromMinutes(double Minutes);
    
    UFUNCTION(BlueprintCallable)
    static FInGameTime FromHours(double Hours);
    
    UFUNCTION(BlueprintCallable)
    static FInGameTime FromDays(double Days);
    
};

