#include "DistanceMatching.h"

UDistanceMatching::UDistanceMatching(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutomaticTriggers = false;
    this->DistanceTolerance = 5.00f;
    this->MinPlantDetectionAngle = 130.00f;
    this->MinPlantSpeed = 100.00f;
    this->MinPlantAccel = 100.00f;
    this->ParentActor = NULL;
    this->MovementComponent = NULL;
}

void UDistanceMatching::TriggerTurnInPlaceTo(FVector DesiredDirection) {
}

void UDistanceMatching::TriggerTurnInPlaceFrom() {
}

void UDistanceMatching::TriggerStop(float DeltaTime) {
}

void UDistanceMatching::TriggerStart(float DeltaTime) {
}

void UDistanceMatching::TriggerPlant(float DeltaTime) {
}

void UDistanceMatching::TriggerPivotTo() {
}

void UDistanceMatching::TriggerPivotFrom() {
}

void UDistanceMatching::TriggerJump(float DeltaTime) {
}

void UDistanceMatching::StopDistanceMatching() {
}

float UDistanceMatching::GetMarkerDistance() {
    return 0.0f;
}

FDistanceMatchPayload UDistanceMatching::GetDistanceMatchPayload() {
    return FDistanceMatchPayload{};
}

EDistanceMatchTrigger UDistanceMatching::GetAndConsumeTriggeredTransition() {
    return EDistanceMatchTrigger::None;
}

void UDistanceMatching::DetectTransitions(float DeltaTime) {
}


