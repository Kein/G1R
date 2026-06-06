#include "DailyRoutineSimulationSubsystem.h"

UDailyRoutineSimulationSubsystem::UDailyRoutineSimulationSubsystem() {
    this->ObserverMovementSinceLastTick = 0.00f;
    this->MaxDistanceConsideredForSpawning = 6000.00f;
    this->LightContainerActor = NULL;
}


