#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "EMSFootLockId.h"
#include "AnimNotify_MSFootLockTimer.generated.h"

UCLASS(CollapseCategories)
class MOTIONSYMPHONY_API UAnimNotify_MSFootLockTimer : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EMSFootLockId FootLockId;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float GroundingTime;
    
    UAnimNotify_MSFootLockTimer();

};

