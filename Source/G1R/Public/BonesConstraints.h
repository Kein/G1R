#pragma once
#include "CoreMinimal.h"
#include "PhysicsEngine/PhysicalAnimationComponent.h"
#include "BonesConstraints.generated.h"

USTRUCT(BlueprintType)
struct FBonesConstraints {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FPhysicalAnimationData m_PhysicalAnimationData;
    
    UPROPERTY(EditAnywhere)
    bool m_usePhysicalAnimation;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> m_Bones;
    
    G1R_API FBonesConstraints();
};

