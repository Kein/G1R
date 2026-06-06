#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "EMSFootLockId.h"
#include "AnimNotify_MSFootLockSingle.generated.h"

UCLASS(CollapseCategories)
class MOTIONSYMPHONY_API UAnimNotify_MSFootLockSingle : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EMSFootLockId FootLockId;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bSetLocked;
    
    UAnimNotify_MSFootLockSingle();

};

