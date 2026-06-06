#pragma once
#include "CoreMinimal.h"
#include "BoneControllers/AnimNode_SkeletalControlBase.h"
#include "EMSHyperExtensionFixMethod.h"
#include "MSFootLockLimbDefinition.h"
#include "AnimNode_MSFootLocker.generated.h"

USTRUCT(BlueprintType)
struct MOTIONSYMPHONY_API FAnimNode_MSFootLocker : public FAnimNode_SkeletalControlBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bLeftFootLock;
    
    UPROPERTY(EditAnywhere)
    bool bRightFootLock;
    
    UPROPERTY(EditAnywhere)
    EMSHyperExtensionFixMethod LegHyperExtensionFixMethod;
    
    UPROPERTY(EditAnywhere)
    float AllowLegExtensionRatio;
    
    UPROPERTY(EditAnywhere)
    float LockReleaseSmoothTime;
    
    UPROPERTY(EditAnywhere)
    FMSFootLockLimbDefinition LeftFootDefinition;
    
    UPROPERTY(EditAnywhere)
    FMSFootLockLimbDefinition RightFootDefinition;
    
    FAnimNode_MSFootLocker();
};

