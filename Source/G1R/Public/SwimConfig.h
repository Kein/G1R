#pragma once
#include "CoreMinimal.h"
#include "GothicBaseConfig.h"
#include "Templates/SubclassOf.h"
#include "SwimConfig.generated.h"

class UScriptGameplayEffect;

UCLASS(Abstract, BlueprintType, Const, EditInlineNew)
class USwimConfig : public UGothicBaseConfig {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float m_SwimToDiveHeight;
    
    UPROPERTY(EditAnywhere)
    float m_DiveToSwimHeight;
    
    UPROPERTY(EditAnywhere)
    float m_WalkToSwimHeight;
    
    UPROPERTY(EditAnywhere)
    float m_SwimToWalkHeight;
    
    UPROPERTY(EditAnywhere)
    float m_CrouchableWaterHeight;
    
    UPROPERTY(EditAnywhere)
    float m_CapsuleSwimmingHalfHeight;
    
    UPROPERTY(EditAnywhere)
    float m_WaterWalkingHeight;
    
    UPROPERTY(EditAnywhere)
    float m_MaxPotentialDiveDepth;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UScriptGameplayEffect> m_WaterWalkingEffect;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UScriptGameplayEffect> m_SwimmingEffect;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UScriptGameplayEffect> m_DivingEffect;
    
    UPROPERTY(EditAnywhere)
    bool m_bEnableWaterEntryForce;
    
    UPROPERTY(EditAnywhere)
    float m_WaterEntryVelocityThreshold;
    
    UPROPERTY(EditAnywhere)
    float m_WaterEntryImpactDuration;
    
    UPROPERTY(EditAnywhere)
    float m_WaterImpactFrictionMultiplier;
    
    UPROPERTY(EditAnywhere)
    float m_WaterImpactDragMultiplier;
    
    UPROPERTY(EditAnywhere)
    float m_WaterGlideFrictionReduction;
    
    UPROPERTY(EditAnywhere)
    float m_WaterEntryGlideDuration;
    
public:
    USwimConfig();

};

