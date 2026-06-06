#pragma once
#include "CoreMinimal.h"
#include "AnimNotify_Base.h"
#include "AnimNotify_Rumble.generated.h"

class UForceFeedbackEffect;

UCLASS(CollapseCategories)
class G1R_API UAnimNotify_Rumble : public UAnimNotify_Base {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    UForceFeedbackEffect* m_forceFeedbackEffect;
    
public:
    UAnimNotify_Rumble();

};

