#include "IndoorDetectionSampler.h"

FIndoorDetectionSampler::FIndoorDetectionSampler() {
    this->SweepTraceSphereRadius = 0.00f;
    this->NumSamples = 0;
    this->CollisionChannel = ECC_WorldStatic;
    this->TraceRadius = 0.00f;
    this->ConeFullAngleDegrees = 0.00f;
    this->ScoreWeight_Indoor_EnclosedByWalls = 0.00f;
    this->ScoreWeight_Indoor_HasRoof = 0.00f;
    this->ScoreWeight_Outdoor_NoWalls = 0.00f;
    this->ScoreWeight_Outdoor_VisibleSky = 0.00f;
}

