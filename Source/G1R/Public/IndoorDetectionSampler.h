#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "IndoorDetectionSampler.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FIndoorDetectionSampler {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float SweepTraceSphereRadius;
    
    UPROPERTY(EditAnywhere)
    int32 NumSamples;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ECollisionChannel> CollisionChannel;
    
    UPROPERTY(EditAnywhere)
    float TraceRadius;
    
    UPROPERTY(EditAnywhere)
    float ConeFullAngleDegrees;
    
    UPROPERTY(EditAnywhere)
    float ScoreWeight_Indoor_EnclosedByWalls;
    
    UPROPERTY(EditAnywhere)
    float ScoreWeight_Indoor_HasRoof;
    
    UPROPERTY(EditAnywhere)
    float ScoreWeight_Outdoor_NoWalls;
    
    UPROPERTY(EditAnywhere)
    float ScoreWeight_Outdoor_VisibleSky;
    
    UPROPERTY(EditAnywhere)
    TArray<AActor*> IgnoredActors;
    
    G1R_API FIndoorDetectionSampler();
};

