#pragma once
#include "CoreMinimal.h"
#include "AnimNotify_Base.h"
#include "AnimNotify_FreezeFrame.generated.h"

UCLASS(CollapseCategories)
class G1R_API UAnimNotify_FreezeFrame : public UAnimNotify_Base {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float m_slowAmount;
    
    UPROPERTY(EditAnywhere)
    float m_Duration;
    
public:
    UAnimNotify_FreezeFrame();

};

