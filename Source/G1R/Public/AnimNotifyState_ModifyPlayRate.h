#pragma once
#include "CoreMinimal.h"
#include "AnimNotifyState_Base.h"
#include "AnimNotifyState_ModifyPlayRate.generated.h"

class UAnimMontage;

UCLASS(CollapseCategories, EditInlineNew)
class UAnimNotifyState_ModifyPlayRate : public UAnimNotifyState_Base {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    UAnimMontage* m_AnimMontage;
    
    UPROPERTY(EditAnywhere)
    uint32 m_SectionFrames;
    
    UPROPERTY()
    float m_OldPlayRate;
    
    UPROPERTY(EditAnywhere)
    bool m_IgnorePlayer;
    
    UPROPERTY(EditAnywhere)
    bool m_IgnoreAI;
    
public:
    UAnimNotifyState_ModifyPlayRate();

};

