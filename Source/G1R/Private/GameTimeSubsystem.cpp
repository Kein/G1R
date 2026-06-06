#include "GameTimeSubsystem.h"
#include "Net/UnrealNetwork.h"

UGameTimeSubsystem::UGameTimeSubsystem() {
    this->GameTimeSpeed = 15.00f;
    this->TimeConfig = NULL;
}

void UGameTimeSubsystem::UnfreezeTime() {
}

void UGameTimeSubsystem::SkipTime(const FInGameTime& Duration) {
}

void UGameTimeSubsystem::SetCurrentGameTime(int32 Days, int32 Hours, int32 Minutes, float Seconds) {
}

void UGameTimeSubsystem::SetCurrentClockTime(int32 Hours, int32 Minutes, float Seconds) {
}

FInGameTime UGameTimeSubsystem::GetTimeUntil(const FInGameTime& FutureTime) const {
    return FInGameTime{};
}

float UGameTimeSubsystem::GetTimeSpeed() const {
    return 0.0f;
}

FInGameTime UGameTimeSubsystem::GetTimeSince(const FInGameTime& PastTime) const {
    return FInGameTime{};
}

float UGameTimeSubsystem::GetRealTimeSince(float PastRealTime) const {
    return 0.0f;
}

float UGameTimeSubsystem::GetRealTimeFromGameTime(FInGameTime GameTime) const {
    return 0.0f;
}

float UGameTimeSubsystem::GetRealTimeFromClockTime(FClockTime ClockTimeInput) const {
    return 0.0f;
}

FInGameTime UGameTimeSubsystem::GetGameTimeFromRealTime(float RealTimeInput) const {
    return FInGameTime{};
}

UGameTimeSubsystem* UGameTimeSubsystem::GetGameTime(UObject* WorldContextObject) {
    return NULL;
}

EDayTimeType UGameTimeSubsystem::GetDayTimeType() const {
    return EDayTimeType::Morning;
}

float UGameTimeSubsystem::GetCurrentGameTimeInRealTime() const {
    return 0.0f;
}

FInGameTime UGameTimeSubsystem::GetCurrentGameTime() const {
    return FInGameTime{};
}

EWeekDay UGameTimeSubsystem::GetCurrentDayOfWeek() const {
    return EWeekDay::Monday;
}

FClockTime UGameTimeSubsystem::GetCurrentClockTime() const {
    return FClockTime{};
}

FClockTime UGameTimeSubsystem::GetClockTimeFromRealTime(float RealTimeInput) const {
    return FClockTime{};
}

void UGameTimeSubsystem::FreezeTime() {
}

void UGameTimeSubsystem::AdvanceToClockTime(const FClockTime& ClockTime) {
}

void UGameTimeSubsystem::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UGameTimeSubsystem, CurrentGameTime);
    DOREPLIFETIME(UGameTimeSubsystem, GameTimeSpeed);
}


