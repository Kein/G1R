#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/SceneComponent.h"
#include "StructBoneOverride.h"
#include "BuoyantForceComponent.generated.h"

class USignificanceManager;

UCLASS(BlueprintType, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBuoyantForceComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_MeshDensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_FluidDensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_FluidLinearDamping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_FluidAngularDamping;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    FVector m_VelocityDamper;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_ClampMaxVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_MaxUnderwaterVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_TestPointRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FVector> m_TestPoints;
    
    UPROPERTY(BlueprintReadOnly)
    int32 m_PointsUnderWater;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_ApplyForceToBones;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_SnapToSurfaceIfNoPhysics;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_WaterVelocityMultiplier;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    TArray<float> m_PointDensityOverride;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    TArray<FStructBoneOverride> m_BoneOverride;
    
protected:
    UPROPERTY(EditAnywhere)
    float m_DeactivationDistance;
    
    UPROPERTY(EditAnywhere)
    float m_ReactivationDistanceThreshold;
    
    UPROPERTY(Transient)
    USignificanceManager* m_SignificanceManager;
    
public:
    UBuoyantForceComponent(const FObjectInitializer& ObjectInitializer);

};

