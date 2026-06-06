#include "AIState_DailyRoutine.h"
#include "Templates/SubclassOf.h"

UAIState_DailyRoutine::UAIState_DailyRoutine() {
    this->bSupportsSimulatedSteps = true;
    this->ScheduleTimeOffsetMinutesMin = 0.00f;
    this->ScheduleTimeOffsetMinutesMax = 0.00f;
    this->WeatherPerceptionDelay = 0.00f;
    this->WeatherPerceptionDelayVariance = 0.00f;
    this->CurrentTask = NULL;
    this->ScheduledTaskForTheDayIndex = -1;
    this->ScheduledTask = NULL;
    this->InterruptState = NULL;
    this->FallbackTaskClass = NULL;
    this->TeleportToCurrentTaskWhen = EDailyRoutineTeleportMode::Never;
    this->bSimulateRoutineTasksFromStartTime = true;
    this->bReactsToWeather = false;
    this->bIsPendingScheduleCheck = true;
    this->AutoSwitchToRoutine = NULL;
    this->PassiveAssessmentModule = NULL;
    this->bForceSimulationUpdateEveryTick = false;
}

void UAIState_DailyRoutine::UpdateRoutineTaskExecution() {
}

bool UAIState_DailyRoutine::StartScheduledTaskIfPossible() {
    return false;
}

bool UAIState_DailyRoutine::ShouldDoDifferentTaskNow() const {
    return false;
}

void UAIState_DailyRoutine::ScheduleRemoveAllForEvent(TSubclassOf<UAIWorldEvent> EventClass) {
}

void UAIState_DailyRoutine::ScheduleIfRainingL3(int32 StartHour, int32 StartMinute, UCharacterAIState* Task, FName AtWaypoint, float WaypointRadius, TSubclassOf<UNavArea> InNavArea, UTerritoryConfig* Territory) {
}

void UAIState_DailyRoutine::ScheduleIfRainingL2(int32 StartHour, int32 StartMinute, UCharacterAIState* Task, FName AtWaypoint, float WaypointRadius, TSubclassOf<UNavArea> InNavArea, UTerritoryConfig* Territory) {
}

void UAIState_DailyRoutine::ScheduleIfRaining(int32 StartHour, int32 StartMinute, UCharacterAIState* Task, FName AtWaypoint, float WaypointRadius, TSubclassOf<UNavArea> InNavArea, UTerritoryConfig* Territory) {
}

void UAIState_DailyRoutine::ScheduleIfCloudy(int32 StartHour, int32 StartMinute, UCharacterAIState* Task, FName AtWaypoint, float WaypointRadius, TSubclassOf<UNavArea> InNavArea, UTerritoryConfig* Territory) {
}

void UAIState_DailyRoutine::ScheduleDuringEvent(TSubclassOf<UAIWorldEvent> EventClass, int32 StartHour, int32 StartMinute, UCharacterAIState* Task, FName AtWaypoint, float WaypointRadius, UTerritoryConfig* Territory) {
}

void UAIState_DailyRoutine::ScheduleAnyWeather(int32 StartHour, int32 StartMinute, UCharacterAIState* Task, FName AtWaypoint, float WaypointRadius, TSubclassOf<UNavArea> InNavArea, UTerritoryConfig* Territory) {
}

void UAIState_DailyRoutine::Schedule(int32 StartHour, int32 StartMinute, UCharacterAIState* Task, FName AtWaypoint, float WaypointRadius, TSubclassOf<UNavArea> InNavArea, UTerritoryConfig* Territory) {
}

void UAIState_DailyRoutine::RestoreAttributes() {
}

void UAIState_DailyRoutine::RequestDailyRoutineScheduleUpdateWithRandomTimeOffset() {
}

void UAIState_DailyRoutine::RequestDailyRoutineScheduleUpdate() {
}

void UAIState_DailyRoutine::OnSubtaskEndedExitDailyRoutine(UAbilityTaskGeneric* Task, EGenericTaskResult Result) {
}

void UAIState_DailyRoutine::OnSubtaskEnded(UAbilityTaskGeneric* Task, EGenericTaskResult Result) {
}

void UAIState_DailyRoutine::OnPotentialTaskSwitch(const FInGameTime& Time) {
}

bool UAIState_DailyRoutine::NeedsAttributeRestore() const {
    return false;
}

bool UAIState_DailyRoutine::IsDoingInterruptState() const {
    return false;
}

void UAIState_DailyRoutine::HandleWeatherChange(EWeather PreviousWeather, EWeather NewWeather) {
}

void UAIState_DailyRoutine::HandleNewDayStarted() {
}

EWeather UAIState_DailyRoutine::GetWeather() const {
    return EWeather::Sunny;
}

int32 UAIState_DailyRoutine::GetScheduleSecondsRandomOffset(int32 Day) const {
    return 0;
}

UTerritoryConfig* UAIState_DailyRoutine::FindTerritoryOverrideOfCurrentlyScheduledTask() const {
    return NULL;
}

void UAIState_DailyRoutine::DoInterruptStateOfClass(TSubclassOf<UCharacterAIState> StateClass) {
}

void UAIState_DailyRoutine::DoInterruptState(UCharacterAIState* StateTemplate) {
}

void UAIState_DailyRoutine::CheckIfReactsToWeather() {
}



void UAIState_DailyRoutine::AddRoutineTaskEx(const FDailyRoutineTaskDescription& TaskDesc) {
}


