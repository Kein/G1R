#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Animation/BoneReference.h"
#include "Interfaces/Interface_BoneReferenceSkeletonProvider.h"
#include "EAllAxis.h"
#include "MotionMatchConfig.generated.h"

class USkeleton;

UCLASS(BlueprintType)
class MOTIONSYMPHONY_API UMotionMatchConfig : public UObject, public IBoneReferenceSkeletonProvider {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    USkeleton* SourceSkeleton;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EAllAxis UpAxis;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EAllAxis ForwardAxis;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<float> TrajectoryTimes;
    
    UPROPERTY(EditAnywhere)
    TArray<FBoneReference> PoseBones;
    
    UMotionMatchConfig();


    // Fix for true pure virtual functions not being implemented
};

