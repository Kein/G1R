#pragma once
#include "CoreMinimal.h"
#include "GothicBaseConfig.h"
#include "TurnOnSpotAssetConfig.generated.h"

class UAnimSequenceBase;

UCLASS(Abstract, BlueprintType, Const, EditInlineNew)
class UTurnOnSpotAssetConfig : public UGothicBaseConfig {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UAnimSequenceBase> m_Animation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_AnimatedAngle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName m_SlotName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_PlayRate;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_BlendIn;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_BlendOut;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_ScaleTurnAngle;
    
public:
    UTurnOnSpotAssetConfig();

};

