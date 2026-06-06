#pragma once
#include "CoreMinimal.h"
#include "AnimNotify_Base.h"
#include "AnimNotify_InteractProp_Hidden.generated.h"

UCLASS(CollapseCategories)
class G1R_API UAnimNotify_InteractProp_Hidden : public UAnimNotify_Base {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FName m_PropName;
    
    UPROPERTY(EditAnywhere)
    bool m_Hidden;
    
public:
    UAnimNotify_InteractProp_Hidden();

};

