#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNodeBase.h"
#include "Animation/AnimNodeBase.h"
#include "AN_PA_ProfileStart.generated.h"

USTRUCT(BlueprintType)
struct PROCEDURALANIMATIONTKRUNTIME_API FAN_PA_ProfileStart : public FAnimNode_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FPoseLink SourcePose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName SectionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bEnabled;
    
    FAN_PA_ProfileStart();
};

