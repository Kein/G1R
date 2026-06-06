#pragma once
#include "CoreMinimal.h"
#include "TickableGameStateSubsystem.h"
#include "ClockTime.h"
#include "EDayTimeType.h"
#include "EWeekDay.h"
#include "InGameTime.h"
#include "GameTimeSubsystem.generated.h"

class UGameTimeSubsystem;
class UGameTimeSubsystemConfig;
class UObject;

UCLASS(BlueprintType)
class G1R_API UGameTimeSubsystem : public UTickableGameStateSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Replicated)
    FInGameTime CurrentGameTime;
    
    UPROPERTY(Replicated)
    float GameTimeSpeed;
    
    UPROPERTY(Instanced)
    UGameTimeSubsystemConfig* TimeConfig;
    
public:
    UGameTimeSubsystem();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void UnfreezeTime();
    
    UFUNCTION(BlueprintCallable)
    void SkipTime(const FInGameTime& Duration);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentGameTime(int32 Days, int32 Hours, int32 Minutes, float Seconds);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentClockTime(int32 Hours, int32 Minutes, float Seconds);
    
    UFUNCTION(BlueprintPure)
    FInGameTime GetTimeUntil(const FInGameTime& FutureTime) const;
    
    UFUNCTION()
    float GetTimeSpeed() const;
    
    UFUNCTION(BlueprintPure)
    FInGameTime GetTimeSince(const FInGameTime& PastTime) const;
    
    UFUNCTION(BlueprintPure)
    float GetRealTimeSince(float PastRealTime) const;
    
    UFUNCTION(BlueprintPure)
    float GetRealTimeFromGameTime(FInGameTime GameTime) const;
    
    UFUNCTION(BlueprintPure)
    float GetRealTimeFromClockTime(FClockTime ClockTimeInput) const;
    
    UFUNCTION(BlueprintPure)
    FInGameTime GetGameTimeFromRealTime(float RealTimeInput) const;
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UGameTimeSubsystem* GetGameTime(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    EDayTimeType GetDayTimeType() const;
    
    UFUNCTION(BlueprintPure)
    float GetCurrentGameTimeInRealTime() const;
    
    UFUNCTION(BlueprintPure)
    FInGameTime GetCurrentGameTime() const;
    
    UFUNCTION(BlueprintPure)
    EWeekDay GetCurrentDayOfWeek() const;
    
    UFUNCTION(BlueprintPure)
    FClockTime GetCurrentClockTime() const;
    
    UFUNCTION(BlueprintPure)
    FClockTime GetClockTimeFromRealTime(float RealTimeInput) const;
    
    UFUNCTION(BlueprintCallable)
    void FreezeTime();
    
    UFUNCTION(BlueprintCallable)
    void AdvanceToClockTime(const FClockTime& ClockTime);
    
};

