#pragma once
#include "CoreMinimal.h"
#include "GothicPhysicsVolumePriority.generated.h"

class APhysicsVolume;

USTRUCT(BlueprintType)
struct FGothicPhysicsVolumePriority {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<APhysicsVolume> m_PhysicsVolume;
    
    UPROPERTY(EditAnywhere)
    int32 m_Priority;
    
    G1R_API FGothicPhysicsVolumePriority();
};

