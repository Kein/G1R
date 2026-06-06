#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GothicBaseConfig.h"
#include "Templates/SubclassOf.h"
#include "WaterConfig.generated.h"

class UScriptGameplayEffect;

UCLASS(Abstract, BlueprintType, Const, EditInlineNew)
class UWaterConfig : public UGothicBaseConfig {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float m_Buoyancy;
    
    UPROPERTY(EditAnywhere)
    float m_RagdollUnderWaterHeight;
    
    UPROPERTY(EditAnywhere)
    float m_SurfaceWaterMinHeight;
    
    UPROPERTY(EditAnywhere)
    float m_MidWaterMinHeight;
    
    UPROPERTY(EditAnywhere)
    float m_DeepWaterMinHeight;
    
    UPROPERTY(EditAnywhere)
    bool m_IsWaterVelocityInfluencingWalkingSpeed;
    
    UPROPERTY(EditAnywhere)
    float m_WaterVelocityInfluencesWalkingSpeedMinWaterDepth;
    
    UPROPERTY(EditAnywhere)
    float m_WaterVelocityInfluencesWalkingSpeedMinWaterSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UScriptGameplayEffect> m_SurfaceWaterEffect;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UScriptGameplayEffect> m_MidWaterEffect;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UScriptGameplayEffect> m_DeepWaterEffect;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGameplayTag m_WaterMovementTag;
    
public:
    UWaterConfig();

};

