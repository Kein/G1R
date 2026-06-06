#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimLinkableElement.h"
#include "MotionTagEvent.generated.h"

class UMotionTag;

USTRUCT(BlueprintType)
struct FMotionTagEvent : public FAnimLinkableElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName TagName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UMotionTag* Tag;
    
    UPROPERTY()
    float Duration;
    
    UPROPERTY()
    FAnimLinkableElement EndLink;
    
    UPROPERTY()
    int32 TrackIndex;
    
    MOTIONSYMPHONY_API FMotionTagEvent();
};

