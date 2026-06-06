#pragma once
#include "CoreMinimal.h"
#include "AnimNotify_Base.h"
#include "AnimNotify_Ragdoll.generated.h"

UCLASS(CollapseCategories)
class UAnimNotify_Ragdoll : public UAnimNotify_Base {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    bool m_ActivateRagdoll;
    
public:
    UAnimNotify_Ragdoll();

};

