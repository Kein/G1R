#pragma once
#include "CoreMinimal.h"
#include "PhysicsEngine/PhysicalAnimationComponent.h"
#include "GothicBaseConfig.h"
#include "PhysicalBonesConfig.generated.h"

UCLASS(Const, EditInlineNew)
class G1R_API UPhysicalBonesConfig : public UGothicBaseConfig {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    uint8 m_SimulationLOD;
    
    UPROPERTY(EditAnywhere)
    FPhysicalAnimationData m_PhysicalAnimationData;
    
    UPROPERTY(EditAnywhere)
    bool m_usePhysicalAnimation;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> m_Bones;
    
public:
    UPhysicalBonesConfig();

    UFUNCTION()
    bool UsesPhysicalAnimation() const;
    
    UFUNCTION()
    uint8 GetSimulationLOD() const;
    
    UFUNCTION()
    FPhysicalAnimationData GetPhysicalAnimationData() const;
    
    UFUNCTION()
    TArray<FName> GetBones() const;
    
};

