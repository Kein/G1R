#include "IndoorDetectionComponent.h"

UIndoorDetectionComponent::UIndoorDetectionComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DetectionUpdatedAtTime = -340282346638528859811704183484516925440.00f;
    this->bDetectedIsIndoor = false;
    this->bDetectedIsOutdoor = false;
    this->DetectionConfidence = 0.00f;
    this->DetectionScore = 0.00f;
    this->DetectionAveragingWindowSizeSeconds = 1.00f;
    this->bUpdateOnMove = true;
}

void UIndoorDetectionComponent::RequestDetectionSampleAtTransform(const FTransform& QueryTransform) {
}

void UIndoorDetectionComponent::RequestDetectionSampleAt(const FVector& QueryLocation) {
}

void UIndoorDetectionComponent::RequestDetectionSample() {
}

bool UIndoorDetectionComponent::HasRecentDetectionResult(float MaxAgeSeconds) const {
    return false;
}

bool UIndoorDetectionComponent::HasAnyValidDetectionResults() const {
    return false;
}


