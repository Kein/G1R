#pragma once
#include "CoreMinimal.h"
#include "AnimNotifyState_Base.h"
#include "AnimNotifyState_UseFov.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class G1R_API UAnimNotifyState_UseFov : public UAnimNotifyState_Base {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float m_NewFov;
    
public:
    UAnimNotifyState_UseFov();

};

