#pragma once
#include "CoreMinimal.h"
#include "GothicBaseConfig.h"
#include "Templates/SubclassOf.h"
#include "TurnOnSpotConfig.generated.h"

class UTurnOnSpotAssetConfig;

UCLASS(Abstract, BlueprintType, Const, EditInlineNew)
class UTurnOnSpotConfig : public UGothicBaseConfig {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_TurnCheckMinAngle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_ExplicitTurnInPlaceAngleTolerance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_Turn180Threshold;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_AimYawRateLimit;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_MinAngleDelay;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_MaxAngleDelay;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UTurnOnSpotAssetConfig> m_TIPL30;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UTurnOnSpotAssetConfig> m_TIPR30;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UTurnOnSpotAssetConfig> m_TIPL90;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UTurnOnSpotAssetConfig> m_TIPR90;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UTurnOnSpotAssetConfig> m_TIPL180;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UTurnOnSpotAssetConfig> m_TIPR180;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UTurnOnSpotAssetConfig> m_TIPCL30;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UTurnOnSpotAssetConfig> m_TIPCR30;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UTurnOnSpotAssetConfig> m_TIPCL90;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UTurnOnSpotAssetConfig> m_TIPCR90;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UTurnOnSpotAssetConfig> m_TIPCL180;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UTurnOnSpotAssetConfig> m_TIPCR180;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_RotateMinThreshold;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_RotateMaxThreshold;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_AimYawRateMinRange;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_AimYawRateMaxRange;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_MinPlayRate;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_MaxPlayRate;
    
public:
    UTurnOnSpotConfig();

};

