#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ParticlePoint.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FParticlePoint {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FVector m_Position;
    
    UPROPERTY()
    FRotator m_Rotator;
    
    UPROPERTY()
    AActor* m_ParticleSystem;
    
    G1R_API FParticlePoint();
};

