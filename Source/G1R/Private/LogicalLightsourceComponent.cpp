#include "LogicalLightsourceComponent.h"

ULogicalLightsourceComponent::ULogicalLightsourceComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->LightsourceType = ELogicalLightsourceType::PointLight;
    this->Attenuation = ELogicalLightsourceAttenuation::Quadratic;
    this->bBlockedByWalls = false;
    this->Radius = 1000.00f;
    this->Intensity = 1.00f;
    this->SpotConeAngleDegrees = 45.00f;
    this->SpotConeInnerAngleFraction = 0.90f;
    this->BoxInnerFraction = 0.80f;
}

bool ULogicalLightsourceComponent::IsLightTypeAbleToHaveRadius() const {
    return false;
}

bool ULogicalLightsourceComponent::IsLightTypeAbleToHaveAttenuation() const {
    return false;
}

bool ULogicalLightsourceComponent::IsLightTypeAbleToCastShadows() const {
    return false;
}

float ULogicalLightsourceComponent::EvaluateTheoreticalIntensityAtLocation(const FVector& Location) const {
    return 0.0f;
}

float ULogicalLightsourceComponent::EvaluateIntensityAtLocationWithCostlyShadowRaycast(const FVector& Location) const {
    return 0.0f;
}


