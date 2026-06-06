#include "DailyRoutineSimulationComponent.h"

UDailyRoutineSimulationComponent::UDailyRoutineSimulationComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SimulationMeshOverride = NULL;
}

void UDailyRoutineSimulationComponent::RequestUpdate() {
}

void UDailyRoutineSimulationComponent::NotifyIdleUntil(const FInGameTime& IdleUntil) {
}

void UDailyRoutineSimulationComponent::NotifyIdleForRealtimeSeconds(float IdleForRealtimeSeconds) {
}

void UDailyRoutineSimulationComponent::NotifyDoneWithAction() {
}

void UDailyRoutineSimulationComponent::NotifyDoingInteractionUntil(const FGameplayTag& Action, FInteractionSpotClaimToken SpotClaimToken, const FInGameTime& InteractingUntil) {
}

void UDailyRoutineSimulationComponent::NotifyDoingInteractionForRealtimeSeconds(const FGameplayTag& Action, FInteractionSpotClaimToken SpotClaimToken, float InteractingForRealtimeSeconds) {
}

bool UDailyRoutineSimulationComponent::IsDoingStateThatCanBeSimulated() const {
    return false;
}

bool UDailyRoutineSimulationComponent::IsDailyRoutineSimulationActive() const {
    return false;
}

void UDailyRoutineSimulationComponent::ForceUpdate() {
}

void UDailyRoutineSimulationComponent::EnableLightsource(FName LightPreset) {
}

void UDailyRoutineSimulationComponent::DisableLightsource() {
}


