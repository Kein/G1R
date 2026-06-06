#pragma once
#include "CoreMinimal.h"
#include "GothicBaseConfig.h"
#include "TransitionConfig.generated.h"

UCLASS(Abstract, BlueprintType, Const, EditInlineNew)
class UTransitionConfig : public UGothicBaseConfig {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_DynTransitionBlendTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_DynTransitionPlayRate;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_DynTransitionStartTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_DynTransitionReTriggerDelay;
    
public:
    UTransitionConfig();

};

